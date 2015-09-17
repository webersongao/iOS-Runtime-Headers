/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpPhotosSharingTransition : PUModalTransition <PUOneUpAssetTransition> {
    UICollectionViewLayout *__transitionLayout;
    <PUOneUpPhotosSharingTransitionDelegate> *_delegate;
    PUOneUpPhotosSharingTransitionContext *_oneUpPhotosSharingTransitionContext;
    UIViewController<PUOneUpAssetTransitionViewController> *_presentingViewController;
    UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController> *_sharingTransitionViewController;
}

@property (setter=_setTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_transitionLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpPhotosSharingTransitionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PUOneUpPhotosSharingTransitionContext *oneUpPhotosSharingTransitionContext;
@property (nonatomic) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController;
@property (nonatomic) UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController> *sharingTransitionViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setTransitionLayout:(id)arg1;
- (id)_transitionLayout;
- (void)animateDismissTransition;
- (void)animatePresentTransition;
- (id)delegate;
- (id)oneUpPhotosSharingTransitionContext;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSharingTransitionViewController:(id)arg1;
- (id)sharingTransitionViewController;

@end