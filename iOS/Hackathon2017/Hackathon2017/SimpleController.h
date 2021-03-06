//
//  SimpleController.h
//  MuseStatsIos
//
//  Created by Yue Huang on 2015-09-01.
//  Copyright (c) 2015 InteraXon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Muse/Muse.h>
#import <SocketRocket/SRWebSocket.h>

@interface SimpleController : UIViewController
< IXNMuseConnectionListener, IXNMuseDataListener, IXNMuseListener, IXNLogListener,
  UITableViewDelegate, UITableViewDataSource, SRWebSocketDelegate>

@property (nonatomic, strong) IBOutlet UITableView* tableView;
@property (nonatomic, strong) IBOutlet UITextView* logView;
- (IBAction)disconnect:(id)sender;
- (IBAction)scan:(id)sender;
- (IBAction)stopScan:(id)sender;
- (void)applicationWillResignActive;
@end
