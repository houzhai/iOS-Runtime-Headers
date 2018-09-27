/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKDeviceSleepMonitor : _DKMonitor <_DKHistoricalMonitor, _DKInstantMonitor, _DKNotificationReceiver> {
    bool  _enabled;
}

@property (nonatomic, readonly) _DKEvent *currentEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalHandler;
@property (nonatomic, copy) id /* block */ instantHandler;
@property (nonatomic, readonly) NSDate *lastUpdate;
@property (nonatomic, copy) id /* block */ shutdownHandler;
@property (readonly) Class superclass;

+ (id)_eventWithMessage:(long long)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsAwake:(bool)arg1;

- (void)receiveNotificationEvent:(id)arg1;
- (void)start;
- (void)stop;

@end