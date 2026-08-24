package com.example.switchstream;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {
    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        TextView v = new TextView(this);
        v.setText("SwitchStream MVP\n\n局域网串流端已创建。\n下一步接入 MediaCodec H.264 编码和 UDP 传输。");
        v.setTextSize(20);
        v.setPadding(40, 60, 40, 40);
        setContentView(v);
    }
}
