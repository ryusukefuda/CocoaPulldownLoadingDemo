//
//  AppDelegate.h
//  RefreshControl
//
//  Created by RyusukeFuda on 2014/04/08.
//  Copyright (c) 2014年 RyusukeFuda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void)reloadTableViewDataSource;
- (void)doneLoadingTableViewData;


@end
