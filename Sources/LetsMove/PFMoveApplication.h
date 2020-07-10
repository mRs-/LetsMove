//
//  PFMoveApplication.h, version 1.25
//  LetsMove
//
//  Created by Andy Kim at Potion Factory LLC on 9/17/09
//
//  The contents of this file are dedicated to the public domain.

#ifdef __cplusplus
extern "C" {
#endif
	
#import <Foundation/Foundation.h>

static NSString * _Nonnull pfShowSupressButtonKey = @"pfShowSupressButtonKey";
static NSString * _Nonnull pfShowCancelButtonKey = @"pfShowCancelButtonKey";
static NSString * _Nonnull pfInformativeTextKey = @"pfInformativeTextKey";
static NSString * _Nonnull pfInformativeTextAuthorizationKey = @"pfInformativeTextAuthorizationKey";
static NSString * _Nonnull pfInformativeTextDownloadFolderKey = @"pfInformativeTextDownloadFolderKey";
static NSString * _Nonnull pfMoveApplicationButtonTextKey = @"pfMoveApplicationButtonTextKey";
static NSString * _Nonnull pfMoveApplicationTitleKey = @"pfMoveApplicationTitleKey";
static NSString * _Nonnull pfMoveApplicationTitleHomeKey = @"pfMoveApplicationTitleHomeKey";

/**
 Moves the running application to ~/Applications or /Applications if the former does not exist.
 After the move, it relaunches app from the new location.
 DOES NOT work for sandboxed applications.
 
 Call from \c NSApplication's delegate method \c -applicationWillFinishLaunching: method. */
void PFMoveToApplicationsFolderIfNecessary(NSDictionary * _Nullable config);

/**
 Check whether an app move is currently in progress.
 Returns YES if LetsMove is currently in-progress trying to move the app to the Applications folder, or NO otherwise.
 This can be used to work around a crash with apps that terminate after last window is closed.
 See https://github.com/potionfactory/LetsMove/issues/64 for details. */
BOOL PFMoveIsInProgress(void);

#ifdef __cplusplus
}
#endif
