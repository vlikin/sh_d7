var gulp = require('gulp'),
    consolidate = require('gulp-consolidate'), // Template engine.
    jade = require('gulp-jade'), // Jade template engine
    rename = require('gulp-rename'),
    iconfont = require('gulp-iconfont');

gulp.task('icon_font', function(){
  gulp.src(['./fonts/svg/*.svg'])
    .pipe(iconfont({ fontName: 'font' }))
    .on('glyphs', function(glyphs, options) {
      gulp.src('./lodash/font-template.scss')
        .pipe(consolidate('lodash', {
          glyphs: glyphs,
          fontName: 'site_icon',
          fontPath: 'site_icon/',
          className: 'site_icon'
        }))
        .pipe(rename(function (path) {
          path.basename = "_site_icon-font";
        }))
        .pipe(gulp.dest('./sass/partial'));
    })
    .pipe(gulp.dest('./fonts/site_icon'));
});
