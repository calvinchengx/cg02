//
//  MasterViewController.h
//  cg02
//
//  Created by Calvin Cheng on 30/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

NSMutableArray *_thingsToLearn;
NSMutableArray *_thingsLearned;

@interface MasterViewController : UITableViewController

@property (copy) NSMutableArray *thingsToLearn;
@property (copy) NSMutableArray *thingsLearned;

@end
