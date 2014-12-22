/* WatcherController */

#import <Cocoa/Cocoa.h>

@interface NotificationWrapper : NSObject

@property(nonatomic,readonly) NSNotification *notification;
@property(nonatomic,readonly) NSDate *date;

- (id)initWithNotification:(NSNotification *)aNotification;
+ (NotificationWrapper *) wrapperWithNotification:(NSNotification *)aNotification;

@end

@interface WatcherController : NSObject {
	IBOutlet NSWindow *prefsWindow;
    IBOutlet NSTextField *objectText;
    IBOutlet NSTableView *distNotificationList;
    IBOutlet NSTableView *wsNotificationList;
    IBOutlet NSTableView *userInfoList;
	IBOutlet NSSearchField *searchField;
    NSMutableArray *distNotifications;
    NSMutableArray *wsNotifications;
    NotificationWrapper *selectedDistNotification;
    NotificationWrapper *selectedWSNotification;
	NSMutableArray *savedRowHeights;
    NSDateFormatter *dateFormatter;
}
- (IBAction)clearNotifications:(id)sender;
- (IBAction)showPrefs:(id)sender;
- (IBAction)didChangeFilter:(NSSearchField *)sender;
- (IBAction)selectSearchField:(id)sender;
- (void)selectNotification:(NSNotification*)aNotification;
- (void)distNotificationHook:(NSNotification*)aNotification;
- (void)wsNotificationHook:(NSNotification*)aNotification;
@end
