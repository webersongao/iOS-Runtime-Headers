/* Generated by RuntimeBrowser.
 */

@protocol FBSDisplayObserving <NSObject>

@optional

- (void)displayMonitor:(FBSDisplayMonitor *)arg1 didConnectIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 didUpdateIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 willDisconnectIdentity:(FBSDisplayIdentity *)arg2;

@end