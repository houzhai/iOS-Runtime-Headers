/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoShareInteractionHandlerFactory : NSObject <SVShareInteractionHandlerFactory> {
    <NUURLHandling> * _URLHandler;
    <NUVideoActivityViewControllerFactory> * _activityViewControllerFactory;
    <NSSNewsAnalyticsArticleViewingSessionTracker> * _articleViewingSessionTracker;
    <SVVideoPlaybackController> * _playbackController;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (nonatomic, readonly) <NUURLHandling> *URLHandler;
@property (nonatomic, readonly) <NUVideoActivityViewControllerFactory> *activityViewControllerFactory;
@property (nonatomic, readonly) <NSSNewsAnalyticsArticleViewingSessionTracker> *articleViewingSessionTracker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackController> *playbackController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)activityViewControllerFactory;
- (id)articleViewingSessionTracker;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)init;
- (id)initWithVideoViewControllerProvider:(id)arg1 playbackController:(id)arg2 activityViewControllerFactory:(id)arg3 articleViewingSessionTracker:(id)arg4 URLHandler:(id)arg5;
- (id)playbackController;
- (id)videoViewControllerProvider;

@end