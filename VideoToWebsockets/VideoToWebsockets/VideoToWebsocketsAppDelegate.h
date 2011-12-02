//
//  VideoToWebsocketsAppDelegate.h
//  VideoToWebsockets
//
//  Created by James George on 12/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VideoToWebsocketsViewController;

@interface VideoToWebsocketsAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet VideoToWebsocketsViewController *viewController;

@end
