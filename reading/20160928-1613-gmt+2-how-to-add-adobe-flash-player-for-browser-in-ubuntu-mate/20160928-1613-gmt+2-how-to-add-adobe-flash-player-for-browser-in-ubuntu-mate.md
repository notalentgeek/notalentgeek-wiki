* Here are two links that I used to get Adobe Flash Player set on my Google Chrome and Mozilla Firefox.
    * [http://askubuntu.com/questions/14629/how-do-i-enable-the-partner-repository](http://askubuntu.com/questions/14629/how-do-i-enable-the-partner-repository)
    * [https://wiki.ubuntu.com/Chromium/Getting-Flash](https://wiki.ubuntu.com/Chromium/Getting-Flash)
* Basically do these.
    * First activate the local support repository for Canonical. Run this code in the terminal, `sed -i "/^# deb .*partner/ s/^# //" /etc/apt/sources.list && apt-get update`.
    * Then run `sudo apt-get install adobe-flashplugin` to download the Adobe Flash Player for the browser.
* Note that this Adobe Flash Player does not working for Yandex browser (who the hell use Yandex browser???).