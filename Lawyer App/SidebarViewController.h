//
//  SidebarViewController.h
//  Lawyer App
//
//  Created by iOS Developer on 24/11/16.
//  Copyright © 2016 Paramjeet Kaur. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SidebarViewController : UIViewController
@property (nonatomic,weak) NSMutableDictionary *userInfo;
@property (weak, nonatomic) IBOutlet UITableView *tableView;


@end
