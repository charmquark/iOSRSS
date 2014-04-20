//
//  FeedsTableViewController.h
//  RSS
//
//  Created by Brian Charous on 4/19/14.
//  Copyright (c) 2014 Brian Charous. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FeedsTableViewController : UITableViewController <UIAlertViewDelegate> {
    IBOutlet UIBarButtonItem *editButton;
}

- (IBAction)addNewFeed:(id)sender;
- (IBAction)editTable:(id)sender;
- (void)addFeedToTable:(NSURL *)feedURL;

@property NSMutableArray *feedList;

@end