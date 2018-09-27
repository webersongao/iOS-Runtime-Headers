/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate> {
    NSMutableDictionary * _cachedContentItemUpdates;
    unsigned long long  _capabilities;
    MRNowPlayingPlayerClientCallbacks * _clientCallbacks;
    bool  _coalescingInvalidations;
    bool  _coalescingRequests;
    NSMutableDictionary * _coelscingTransactionPackets;
    double  _invalidatationTimestamp;
    NSDate * _lastReceivedCommandDate;
    MRNowPlayingArtwork * _nowPlayingArtwork;
    NSDictionary * _nowPlayingInfo;
    _MRPlaybackQueueProtobuf * _playbackQueue;
    unsigned int  _playbackState;
    double  _playbackStateSetToPlayTimestamp;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MRPlaybackQueueSubscriptionController * _subscriptionController;
    NSArray * _supportedCommands;
    NSMutableArray * _transactionSources;
    bool  _triggerInvalidation;
}

@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, readonly) MRNowPlayingPlayerClientCallbacks *clientCallbacks;
@property (nonatomic, readonly) bool hasReceivedCommandRecently;
@property (nonatomic) double invalidatationTimestamp;
@property (nonatomic, retain) MRNowPlayingArtwork *nowPlayingArtwork;
@property (nonatomic, readonly) _MRContentItemProtobuf *nowPlayingContentItem;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic, retain) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (nonatomic, copy) NSArray *supportedCommands;

- (void).cxx_destruct;
- (id)_onQueue_nowPlayingContentItem;
- (void)_onQueue_sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)addPendingRequest:(id)arg1;
- (void)beginSendingTransactions;
- (void)cacheContentItemChangesForPendingRequests:(id)arg1;
- (unsigned long long)capabilities;
- (void)clearCachedContentItemArtworkForItems:(id)arg1;
- (id)clientCallbacks;
- (id)debugDescription;
- (id)description;
- (void)endSendingTransactions;
- (bool)hasReceivedCommandRecently;
- (id)initWithPlayerPath:(id)arg1;
- (double)invalidatationTimestamp;
- (id)nowPlayingArtwork;
- (id)nowPlayingContentItem;
- (id)nowPlayingInfo;
- (id)playbackQueue;
- (unsigned int)playbackState;
- (id)playerPath;
- (void)preProcessChangePlaybackRateCommandWithOptions:(id)arg1;
- (void)preProcessCommand:(unsigned int)arg1 options:(id)arg2;
- (void)restoreNowPlayingClientState;
- (void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setInvalidatationTimestamp:(double)arg1;
- (void)setNowPlayingArtwork:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2;
- (id)subscriptionController;
- (id)supportedCommands;
- (bool)testAndSetCoalescingInvalidations;
- (bool)testAndSetCoalescingRequests;
- (void)transactionDidEnd:(id)arg1;
- (void)unsetCoalescingInvalidations;
- (bool)unsetCoalescingRequests;
- (void)updateCacheWithContentItems:(id)arg1;
- (void)updateCacheWithItem:(id)arg1;
- (void)updateCacheWithPlaybackQueue:(id)arg1;
- (void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2;
- (void)updatePlayer:(id)arg1;

@end