* Specifying numbering using `%d` in ImageMagick.
* Examples.
    * Start `%d` from 1, `convert -scene 1 "any_image.png[600x]" any_image_%d.png`.
    * Start `%d` from 29, `convert -scene 29 "any_image.png[600x]" any_image_%d.png`.
* I know this from this link, [http://stackoverflow.com/questions/30173048/bash-d-starts-with-0-can-i-make-it-start-with-1](http://stackoverflow.com/questions/30173048/bash-d-starts-with-0-can-i-make-it-start-with-1).