/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptFunction, NSArray;

@interface SUNativeScriptMenuViewController : SUMenuViewController  {
    SUScriptFunction *_action;
    NSArray *_menuItems;
}

@property(retain) NSArray * menuItems;
@property(retain) SUScriptFunction * action;


- (void)setMenuItems:(id)arg1;
- (id)menuItems;
- (id)action;
- (void)setAction:(id)arg1;
- (void)dealloc;
- (BOOL)isMenuItemEnabledAtIndex:(int)arg1;
- (void)performActionForMenuItemAtIndex:(int)arg1;
- (int)numberOfMenuItems;
- (id)titleOfMenuItemAtIndex:(int)arg1;
- (id)copyScriptViewController;

@end