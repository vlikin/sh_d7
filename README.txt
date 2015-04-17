* Look drush aliases at
sites/all/drush/v2s.aliases.drushrc.php

* To update database from the development server.
Wdr sql-sync @v2s.dev @v2s.local

* To update files from the development server
wdr rsync @v2s.dev:%files @v2s.local:%files
