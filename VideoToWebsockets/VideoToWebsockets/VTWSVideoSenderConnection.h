//
//  VTWSVideoSenderConnection.h
//  VideoToWebsockets
//
//  Created by James George on 12/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WebSocket.h"

@interface VTWSVideoSenderConnection : NSObject<WebSocketDelegate> {
     WebSocket* ws;
}

@property (nonatomic, readonly) WebSocket* ws;

- (void) startMyWebSocket;

- (void) sendTest;

@end
