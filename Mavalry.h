#define PLIST_PATH @"/var/mobile/Library/Preferences/io.github.ajaidan.mavalryprefs.plist"

BOOL isEnabled;
BOOL hideLabels;
BOOL hideDots;
BOOL transDock;
static void loadPrefs() {
    NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:PLIST_PATH];
    isEnabled = [prefs objectForKey:@"isEnabled"] ? [[prefs objectForKey:@"isEnabled"] boolValue] : YES;
    hideLabels = [prefs objectForKey:@"hideLabels"] ? [[prefs objectForKey:@"hideLabels"] boolValue] : YES;
    hideDots = [prefs objectForKey:@"hideDots"] ? [[prefs objectForKey:@"hideDots"] boolValue] : YES;
    transDock = [prefs objectForKey:@"transDock"] ? [[prefs objectForKey:@"transDock"] boolValue] : YES;
}