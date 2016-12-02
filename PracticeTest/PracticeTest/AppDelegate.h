//
//  AppDelegate.h
//  PracticeTest
//
//  Created by xiongyan on 16/12/2.
//  Copyright © 2016年 熊岩. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

