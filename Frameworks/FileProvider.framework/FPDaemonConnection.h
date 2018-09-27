/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPDaemonConnection : NSObject {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection<FPDDaemon> * _connectionQueueConnection;
    NSMutableDictionary * _getAttributeConnections;
    NSObject<OS_dispatch_source> * _getAttributeConnectionsIdleCleanupTimer;
    unsigned int  _user;
}

@property (nonatomic, readonly) NSXPCConnection<FPDDaemon> *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) NSXPCConnection<FPDDaemon> *connectionQueueConnection;
@property (nonatomic) unsigned int user;

+ (id)connectionForUser:(unsigned int)arg1;
+ (id)newXPCConnection;
+ (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)bookmarkableStringFromDocumentURL:(id)arg1 error:(id*)arg2;
- (id)connection;
- (id)connectionQueue;
- (id)connectionQueueConnection;
- (void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)documentURLFromBookmarkableString:(id)arg1 error:(id*)arg2;
- (void)dumpStateTo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(bool)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchRemoteFileProviderWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(id)arg1 itemURL:(id)arg2 handler:(id /* block */)arg3;
- (void)fetchSupportedServicesForDocumentAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithUser:(unsigned int)arg1;
- (void)providersCompletionHandler:(id /* block */)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnectionQueueConnection:(id)arg1;
- (void)setUser:(unsigned int)arg1;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)unobserveWithToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)user;
- (id)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3;
- (void)wakeUpForURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end