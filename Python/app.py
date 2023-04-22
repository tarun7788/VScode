import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import android.support.v4.app.NotificationCompat;
import android.util.Log;

public class LocationTracker implements LocationListener {
    private static final String TAG = "LocationTracker";
    private static final String CHANNEL_ID = "default";
    private static final String NOTIFICATION_TITLE = "I've arrived!";
    private static final String NOTIFICATION_TEXT = "I have arrived at the specified location.";

    private final Context mContext;
    private final LocationManager mLocationManager;
    private final PendingIntent mPendingIntent;
    private final double mLatitude;
    private final double mLongitude;

    public LocationTracker(Context context, double latitude, double longitude) {
        mContext = context;
        mLatitude = latitude;
        mLongitude = longitude;

        mLocationManager = (LocationManager) context.getSystemService(Context.LOCATION_SERVICE);
        Intent intent = new Intent(context, MainActivity.class);
        mPendingIntent = PendingIntent.getActivity(context, 0, intent, 0);
    }

    public void startTracking() {
        try {
            mLocationManager.requestLocationUpdates(LocationManager.GPS_PROVIDER, 0, 0, this);
        } catch (SecurityException e) {
            Log.e(TAG, "Unable to request location updates: " + e.getMessage());
        }
    }

    public void stopTracking() {
        mLocationManager.removeUpdates(this);
    }

    @Override
    public void onLocationChanged(Location location) {
        double currentLatitude = location.getLatitude();
        double currentLongitude = location.getLongitude();

        float[] distance = new float[1];
        Location.distanceBetween(currentLatitude, currentLongitude, mLatitude, mLongitude, distance);

        if (distance[0] < 100) { // Set the radius here (in meters) to trigger the notification
            sendNotification();
            stopTracking();
        }
    }

    private void sendNotification() {
        NotificationManager notificationManager = (NotificationManager) mContext.getSystemService(Context.NOTIFICATION_SERVICE);

        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.O) {
            NotificationChannel channel = new NotificationChannel(CHANNEL_ID, "Default", NotificationManager.IMPORTANCE_DEFAULT);
            notificationManager.createNotificationChannel(channel);
        }

        NotificationCompat.Builder builder = new NotificationCompat.Builder(mContext, CHANNEL_ID)
                .setSmallIcon(R.drawable.ic_notification)
                .setContentTitle(NOTIFICATION_TITLE)
                .setContentText(NOTIFICATION_TEXT)
                .setContentIntent(mPendingIntent)
                .setPriority(NotificationCompat.PRIORITY_DEFAULT);

        notificationManager.notify(0, builder.build());
    }

    @Override
    public void onStatusChanged(String provider, int status, Bundle extras) {
    }

    @Override
    public void onProviderEnabled(String provider) {
    }

    @Override
    public void onProviderDisabled(String provider) {
    }
}
