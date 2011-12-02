//
//  VideoToWebsocketsViewController.h
//  VideoToWebsockets
//
//  Created by James George on 12/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VTWSVideoSenderConnection.h"

@interface VideoToWebsocketsViewController : UIViewController {
    VTWSVideoSenderConnection* socketConnection;
}

@property (nonatomic, retain) VTWSVideoSenderConnection* socketConnection;

- (IBAction) sendString:(id)sender;

@end
