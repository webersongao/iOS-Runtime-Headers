/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDBackgroundRunningAssertion : HDAssertion {
    BKSProcessAssertion * _bksAssertion;
    HDXPCClient * _client;
    CLInUseAssertion * _coreLocationAssertion;
    bool  _shouldAcquireCLAssertion;
}

@property (nonatomic, retain) BKSProcessAssertion *bksAssertion;
@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, retain) CLInUseAssertion *coreLocationAssertion;
@property (nonatomic, readonly) bool shouldAcquireCLAssertion;

- (void).cxx_destruct;
- (id)bksAssertion;
- (id)client;
- (id)coreLocationAssertion;
- (id)initWithOwnerIdentifier:(id)arg1 client:(id)arg2 shouldAcquireCLAssertion:(bool)arg3;
- (void)setBksAssertion:(id)arg1;
- (void)setCoreLocationAssertion:(id)arg1;
- (bool)shouldAcquireCLAssertion;

@end