/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFResidentDeviceItem : HFItem <HFHomeKitItemProtocol, NSCopying> {
    HMResidentDevice * _residentDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMResidentDevice *residentDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)homeKitObject;
- (id)init;
- (id)initWithResidentDevice:(id)arg1;
- (id)residentDevice;

@end