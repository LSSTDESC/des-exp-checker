<?php
//ADW: Let's see...
//ini_set('display_errors', 1); 

$config = array(
    "adminemail" => "kadrlica@fnal.gov",
    "adminname" => "exposure checker",
    "domain" => "portal-auth.nersc.gov/projecta/lsst/desc-exp-checker/",
    //"userdb" => ".db/users.DC2-test.db",
    "filedb" => array("DC2" => ".db/files.DC2-test.db",
                      "r1.1p" => ".db/files.r1.1p-test.db",
                      "r1.1i" => ".db/files.r1.1i-test.db",
                      "r1.2i" => ".db/files.1.2i-20180907.db",
                      "r1.2p" => ".db/files.1.2p-20180907.db",
                      "r2.0i" => ".db/files.2.0i-20181020-stretchfix.db",
                      "r2.1i" => ".db/files.2.1i-20181222.db"),
    
    "fitspath" => array("DC2" => "https://portal.nersc.gov/projecta/lsst/desc-exp-checker/exclusive/binned_sensor_halves/",
                        "r1.1p" => "exclusive/output_edge30_34/binned_sensor_halves/",
                        "r1.1i" => "exclusive/output_r1.1i/binned_sensor_halves/",
                        "r1.2p" => "exclusive/output-1.2p-20180907/binned_sensor_halves/",
                        "r1.2i" => "exclusive/output-1.2i-20180907/binned_sensor_halves/",
                        "r2.0i" => "exclusive/output-2.0i-20181020-stretchfix/binned_sensor/",
                        "r2.1i" => "exclusive/output-2.1i-20181222/binned_sensor/"),
                        

    "fovpath" => array("DC2" => "https://portal.nersc.gov/projecta/lsst/desc-exp-checker/exclusive/focalplane_summary/%e-focalplane-summary.png",
                       "r1.1"  => "exclusive/output_edge30_34/focalplane_summary/%e-focalplane-summary.png",
                       "r1.1i" => "exclusive/output_r1.1i/focalplane_summary/%e-focalplane-summary.png",
                       "r1.1p" => "exclusive/output_edge30_34/focalplane_summary/%e-focalplane-summary.png",
                       "r1.2p" => "exclusive/output-1.2p-20180907/focalplane_summary/%e-focalplane-summary.png",
                       "r1.2i" => "exclusive/output-1.2i-20180907/focalplane_summary/%e-focalplane-summary.png",
                       "r2.0i" => "exclusive/output-2.0i-20181020-stretchfix/focal_plane/%e.png",
                       "r2.1i" => "exclusive/output-2.1i-20181222/focal_plane/%e.png"),


    "releases" => array("DC2",
                        "r1.1p",
                        "r1.1i",
                        "r1.2p",
                        "r1.2i",
                        "r2.0i",
                        "r2.1i"),
                        
    "release" => NULL, # set by client
    "images_per_fp" => 378,
    "problem_code" => array(
      "OK" => 0,

      // Instrument
      "Guiding" => 11,
      "Shutter" => 12,
      "Readout" => 13,
      "Haze" => 14,

      // Flat fielding
      "A/B jump" => 21,
      "Fringing" => 22,
      "Tape bump" => 23,
      "Tree rings" => 24,
      "Vertical jump" => 25,
      "Vertical stripes" => 26,

      // Reflections
      "Ghost" => 32,
      "Bright spray" => 31,
      "Brush strokes" => 33,
      "Bright arc" => 34,

      // Tracks
      "Satellite" => 41,
      "Airplane" => 42,

      // Masking
      "Column mask" => 51,
      "Excessive mask" => 53,
      "Cosmic ray" => 54,
      "Cross-talk" => 55,
      "Edge-bleed" => 56,

      // Sky estimation
      "Dark rim" => 61,
      "Dark halo" => 62,
      "Quilted sky" => 63,
      "Wavy sky" => 64,
      "Anti-bleed" => 65,

      // Simulation
      "Speckling" => 71,
      "Cosmic" => 72,
      "Star" => 73,
      "Galaxy" => 74,
      "Sky background" => 75,
      "Instrument" => 76,
      "Knots" => 77,

      "Other..." => 255,
      "Awesome!" => 1000,
    )
);
?>
