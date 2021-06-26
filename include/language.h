    String Heading1;
    String Configuration;
    String Settings;
    String Language;
    String Deselected;
    String Enselected;   
    String Fillprocess;
    String Waitforfillbottle;
    String Purgecycles;
    String Purgein;
    String Purgeinpostdelay;
    String Purgeoutpostdelay;
    String Purgeout;
    String Bottles;
    String Bottletypes;
    String Bottle1vol;
    String Bottle1weight;
    String Bottle2vol;
    String Bottle2weight;
    String Bottle3vol;
    String Bottle3weight;
    String Calibration;
    String Waitforcalibrationbottle;
    String CIPprocess;
    String Waitforcipbottle;
    String Cleancycles;
    String Cleanpurgeout;
    String Cleanschmockeout;
    String Scalecalibration;
    String Instructions;
    String Referenceweight;
    String Save;
    String Weight;
    String Manuop;
    String Mainmenu;
    String Emergencystop;
    String Manual;
    String Submit;
    String Bottleinstructions;

void set_language(){
  if (language==1){
     Deselected="selected";
     Enselected="";   
     Heading1= "iTap Flaschenf&uuml;ller";
     Configuration= "Konfigurationsparameter";
     Settings= "Generelle Einstellungen";
     Language= "Sprache";
     Fillprocess= "F&uuml;llprozess";
     Waitforfillbottle= "Wartezyklen bis zum &Uuml;berspringen des F&uuml;llprozesses";
     Purgecycles="CO2 Flutungszyklen";
     Purgein="CO2 Flutungszeit [ms]";
     Purgeinpostdelay="Flutungspause [ms]";
     Purgeoutpostdelay="Entl&uuml;ftungspause [ms]";
     Purgeout="CO2 Entl&uuml;ftungszeit [ms]";
     Bottles= "Flaschentypen";
     Bottletypes= "Anzahl Flaschentypen in Gebrauch";
     Bottle1vol= "Flaschenvolumen 1 [ml]";
     Bottle1weight= "Flaschengewicht 1 [g]";
     Bottle2vol= "Flaschenvolumen 2 [ml]";
     Bottle2weight= "Flaschengewicht 2 [g]";
     Bottle3vol= "Flaschenvolumen 3 [ml]";
     Bottle3weight= "Flaschengewicht 3 [g]";
     Calibration= "Kalibrierprozess";
     Waitforcalibrationbottle= "Wartezyklen bis zum &Uuml;berspringen des Kalibrierungsprozesses";
     CIPprocess= "Reinigungsprozess";
     Waitforcipbottle= "Wartezyklen bis zum &Uuml;berspringen des Reinigungsprozesses";
     Cleancycles= "Reinigungszyklen";
     Cleanpurgeout= "Sp&uuml;ldauer Schnellablassventil [ms]";
     Cleanschmockeout= "Sp&uuml;ldauer Feinablassventil [ms]";
     Scalecalibration="Kalibrierung der Waage";
     Instructions="Gef&uuml;llte Flasche mit bekanntem Gewicht einh&auml;ngen, warten bis LED erloschen, dann 'Speichern' dr&uuml;cken.";
     Referenceweight="Bekanntes Gewicht [g]";
     Weight = "Gewicht";
     Save = "Speichern";
    Manuop= "Manuelle Bedienung";
     Mainmenu="Hauptmen&uuml;";
     Emergencystop="Notaus";
     Manual="Handbetrieb";
     Submit="&Uuml;bernehmen";
     Bottleinstructions="Flaschenkalibraierung: leere oder gef&uuml;llte Flasche einh&auml;ngen und gemessenen Wert der Wage mit entsprechendem Knopfdruck &uuml;bernehmen.";
 }  else {
     Heading1= "iTap Bottlefiller";
     Configuration= "Configuration Parameters";
     Settings= "General settings";
     Language= "Language";
     Deselected="";
     Enselected="selected";   
     Fillprocess= "Fillprocess";
     Waitforfillbottle= "Waiting cycles for skipping the fill process";
     Purgecycles="CO2 flood cycles";
     Purgein="CO2 flood time [ms]";
     Purgeinpostdelay="Flood delay [ms]";
     Purgeoutpostdelay="Vent delay[ms]";
     Purgeout="CO2 vent time [ms]";
     Bottles= "Bottletypes";
     Bottletypes= "Number of bottle types in use";
     Bottle1vol= "Bottle volume 1 [ml]";
     Bottle1weight= "Bottle weight 1 [g]";
     Bottle2vol= "Bottle volume 2 [ml]";
     Bottle2weight= "Bottle weight 2 [g]";
     Bottle3vol= "Bottle volume 3 [ml]";
     Bottle3weight= "Bottle weight3 [g]";
     Calibration= "Calibration prozess";
     Waitforcalibrationbottle= "Waiting cycles for skipping the calibration process";
     CIPprocess= "CIP process";
     Waitforcipbottle= "Waiting cycles for skipping the cip process";
     Cleancycles= "Cleaning cycles";
     Cleanpurgeout= "Flood duration fast vent [ms]";
     Cleanschmockeout= "Flood duration slow vent [ms]";
     Scalecalibration="Scale Calibration"; 
    Instructions="Hang up filled bottle with known weight, wait until LED is off and press 'Enter'";
    Referenceweight="Known weight [g]";
    Weight="Weight";
    Save = "Save";
    Manuop= "Manual operation";
    Mainmenu="Main menu";
    Emergencystop="Emergency stop";
    Manual="Manual mode";
    Submit="Submit";
    Bottleinstructions="Bottle Calibration: hang up empty or filled bottle and save measured value by pressing related 'Submit' button.";
   }
}