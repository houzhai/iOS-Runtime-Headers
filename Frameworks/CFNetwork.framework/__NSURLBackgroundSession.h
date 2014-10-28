/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NDBackgroundSessionProtocol>, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSXPCConnection;

@interface __NSURLBackgroundSession : NSURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {
    NSString *_appWakeUUID;
    NSURL *_downloadDirectory;
    unsigned int _identSeed;
    id _invalidateCallback;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    BOOL _isInvalid;
    BOOL _isPrivileged;
    <NDBackgroundSessionProtocol> *_remoteSession;
    NSMutableArray *_taskIDsToFailOnReconnection;
    NSMutableDictionary *_tasks;
    NSXPCConnection *_xpcConn;
}

@property(copy) NSString * appWakeUUID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_downloadTaskForRequest:(id)arg1;
- (id)_downloadTaskForResumeData:(id)arg1;
- (id)_onqueue_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)_onqueue_completeInvalidation:(BOOL)arg1;
- (id)_onqueue_dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (void)_onqueue_disavowTask:(id)arg1;
- (id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id)arg3;
- (id)_onqueue_dummyTaskForClass:(Class)arg1 withError:(id)arg2;
- (void)_onqueue_flushWithCompletionHandler:(id)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id)arg1;
- (void)_onqueue_invalidateSession:(BOOL)arg1 withQueue:(id)arg2 completion:(id)arg3;
- (void)_onqueue_invokeInvalidateCallback;
- (void)_onqueue_resetStorageWithCompletionHandler:(id)arg1;
- (id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (id)_streamTaskForHost:(id)arg1 port:(int)arg2 tls:(bool)arg3 completionHandler:(id)arg4;
- (id)appWakeUUID;
- (void)backgroundAVAssetDownloadTask:(unsigned int)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned int)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)backgroundDataTask:(unsigned int)arg1 didReceiveData:(id)arg2 withReply:(id)arg3;
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned int)arg1;
- (void)backgroundDownloadTask:(unsigned int)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id)arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)backgroundDownloadsDirectory;
- (id)backgroundResumeDataFromClientResumeData:(id)arg1;
- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(id)arg2;
- (void)backgroundTask:(unsigned int)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 didCompleteWithError:(id)arg2 timingData:(id)arg3 reply:(id)arg4;
- (void)backgroundTask:(unsigned int)arg1 didReceiveChallenge:(id)arg2 reply:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(id)arg4;
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned int)arg1 needNewBodyStream:(BOOL)arg2 withReply:(id)arg3;
- (void)backgroundTask:(unsigned int)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(id)arg4;
- (void)backgroundTaskDidResume:(unsigned int)arg1;
- (void)backgroundTaskDidSuspend:(unsigned int)arg1;
- (void)backgroundTaskHasConnectionWaiting:(unsigned int)arg1;
- (id)cachesDirectory;
- (void)cameIntoForeground:(id)arg1;
- (void)cleanupConfig;
- (id)clientResumeDataFromBackgroundResumeData:(id)arg1;
- (id)copyTasks;
- (void)credStorage_allCredentialsWithReply:(id)arg1;
- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(id)arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(id)arg1;
- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)disconnectedErrorWithURL:(id)arg1;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(id)arg4;
- (void)failDisconnectedTasks;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(id)arg3;
- (void)performBlockOnQueueAndRethrowExceptions:(id)arg1;
- (id)placeholderErrorWithURL:(id)arg1;
- (void)recreateExistingTasks:(id)arg1;
- (id)requestWithCookiesApplied:(id)arg1;
- (void)sendInvalidationRequest;
- (void)setAppWakeUUID:(id)arg1;
- (void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2;
- (void)setupBackgroundSession;
- (void)setupXPCConnection;
- (id)taskForIdentifier:(unsigned int)arg1;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;
- (void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2;
- (void)validateUploadFile:(id)arg1;
- (void)wentToBackground:(id)arg1;
- (void)willRetryBackgroundDataTask:(unsigned int)arg1 withError:(id)arg2 timingData:(id)arg3;

@end