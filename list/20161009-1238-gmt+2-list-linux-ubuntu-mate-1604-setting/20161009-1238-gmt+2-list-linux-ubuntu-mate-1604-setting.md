* Run this code after fresh installation of Linux Ubuntu Mate 16.04.

```markdown
sudo add-apt-repository ppa:ubuntuhandbook1/audacity
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install audacity apache2 bleachbit blender chromium-browser composer dia gimp git gparted imagemagick inkscape keepassx libapache2-mod-php libreoffice make mongodb mongodb-server mysql-server nautilus-dropbox nodejs-legacy npm php php-gettext php-mbstring php7.0-mbstring python python-dev python-pip python3 python3-dev python3-pip ruby ruby-dev ruby1.9.1-de scribus shutter steam synapse thunderbird virtualenvwrapper
echo "source /usr/local/bin/virtualenvwrapper.sh" >> ~/.bashrc
git config --global user.email mikael.pratama@yahoo.com
git config --global user.name notalentgeek
pip install --upgrade pip
pip install mkdocs
pip3 install --upgrade pip
```

* Download and install Anki, [http://ankisrs.net/](http://ankisrs.net/).
* Download and install Etcher, [https://www.etcher.io/](https://www.etcher.io/). Then set the installer to be executable using this command, `chmod a+x Etcher-linux-x64.AppImage`.
* Download and install Sublime Text 3, [https://www.sublimetext.com/3](https://www.sublimetext.com/3).
* Download and install TagSpaces (check mikael.pratama@yahoo.com email for the download link).
* Download Language Pack from Settings application, Language Support application.
* Install Sublime Text 3 Package Manager from [https://packagecontrol.io/installation](https://packagecontrol.io/installation). Then download Sublime Text 3 packages (see below).
* Login Chromium.
* Login Dropbox.
* Login Steam.
* Login ThunderBird m.pratama@student.utwente.nl.
* Login ThunderBird mikael.pratama@gmail.com.
* Login ThunderBird mikael.pratama@yahoo.com.
* Login ThunderBird notalentgeek@gmail.com.
* Login ThunderBird pratama_mikael@yahoo.com.
* Set Chromium as default browser.
* Set KeePassX application database.
* Set Keyboard application Country to United States and Variants to English (US). Then delete the unused keyboard.
* Set MySQL application password to asd.
* Set Power Management application in Screen Saver application to Do Nothing or Never.
* Set Regional Format to English United States then click Apply System Wide.
* Set Screen Saver application to off.
* Set Shutter shortcut using Keyboard Shortcut application, name it notalentgeek-shutter-selection, with command `shutter -e -n -s`, and with button combination of CTRL + SHIFT + F1.
* Set Sublime Text 3 User Setting (see below).
* Set Synapse application to start at login.
* Sublime Text 3 Packages.
    * Alignment.
    * DocBlockr
    * Git
    * GitGutter.
    * Increment Selection.
    * Indent Respectful Sort.
    * SublimeCodeIntel.
* Sublime Text 3 User Setting.

```markdown
{
    "animation_enabled": false,
    "auto_close_tags": true,
    "auto_complete": false,
    "auto_complete_commit_on_tab": false,
    "auto_complete_cycle": false,
    "auto_complete_with_fields": false,
    "bold_folder_labels": true,
    "color_scheme": "Packages/Color Scheme - Default/Solarized (Dark).tmTheme",
    "drag_text": true,
    "draw_centered": true,
    "draw_indent_guides": true,
    "fold_buttons": true,
    "highlight_line": true,
    "highlight_modified_tabs": true,
    "ignored_packages":
    [
        "Vintage"
    ],
    "line_padding_bottom": 1,
    "line_padding_top": 1,
    "rulers":
    [
        80
    ],
    "save_on_focus_lost": true,
    "scroll_past_end": true,
    "spell_check": true,
    "tab_completion": false,
    "tab_size": 4,
    "theme": "Default.sublime-theme",
    "translate_tabs_to_spaces": true,
    "tree_animation_enabled": false,
    "trim_trailing_white_space_on_save": true,
    "word_wrap": true
}
```