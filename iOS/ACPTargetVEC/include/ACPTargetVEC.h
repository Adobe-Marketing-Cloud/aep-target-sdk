//
/*************************************************************************
 * ADOBE CONFIDENTIAL
 * ___________________
 *
 *  Copyright 2018 Adobe Systems Incorporated
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Adobe Systems Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Adobe Systems Incorporated and its
 * suppliers and are protected by all applicable intellectual property
 * laws, including trade secret and copyright laws.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Adobe Systems Incorporated.
 **************************************************************************/

#import <UIKit/UIKit.h>

@class ACPTargetParameters;
@interface ACPTargetVEC : NSObject
/**
 *  @brief Gets the version.
 *  @return a string pointer containing the version value.
 */
+ (nonnull NSString*) version;

/**
 API insertion call that specifies the Target View controller. Call this method to override auto generated targetViewName for view controller.
 Should be called from 'viewWillAppear:'
 
 @param targetViewName Developer-specified Target View Name (Please use only UTF-8 alpha numerics for name)
 */
+ (void) setTargetView: (NSString * _Nonnull) targetViewName;

/**
 API insertion call that specifies the Target View controller. Call this method to override auto generated targetViewName for view controller.
 Should be called from 'viewWillAppear:'
 
 @param targetViewName Developer-specified Target View Name (Please use only UTF-8 alpha numerics for name)
 @param parameters - Parameters to be included in the next Target call
 */
+ (void) setTargetView: (NSString * _Nonnull) targetViewName withParameters: (ACPTargetParameters *_Nonnull) parameters;

/**
 API insertion call that specifies the Target View Event.  This call should be inserted into the code
 where the view hierarchy to be targetted is in application memory, AND attached to the view hierarchy,
 but has NOT been drawn to the screen.
 
 @param targetViewName Developer-specified Target View Name (Please use only UTF-8 alpha numerics for name)
 @param view Developer-specified Target View. It can be subview of UIView
 */
+ (void) setTargetView: (NSString * _Nonnull)targetViewName forView: (UIView * _Nonnull )view;

/**
 * Prefetch all offers for all views in the cache. It will remove existing offers and changes for the current view will be
 refreshed only when the view is triggered. This call happens on the main thread blocking the UI
 */
+ (void) prefetchOffers;

/**
 * Prefetch all offers for all views in the cache. It will remove existing offers and changes for the current view will be
 refreshed only when the view is triggered. This call happens on the background thread so doesn't block UI
 */
+ (void) prefetchOffersBackground;

/**
 Initializes the Target VEC extension without the SDK v5 framework.
 */
+ (void) registerExtension;

/**
 * Set parameters to be included in all subsequent Target requests
 * @param targetParameters - Target parameters
 */
+ (void) setGlobalRequestParameters: (ACPTargetParameters *_Nonnull) targetParameters;

/**
 * Reset parameters included in all subsequent Target requests
 * Note: this will not reset one-time parameters set using setNextRequestParameters:
 */
+ (void) resetGlobalRequestParameters;

/**
 * Set parameters to be included in the next Target request
 * Note: these will be included in a single subsequent Target request.
 * @param targetParameters - Target parameters
 */
+ (void) setRequestParameters: (ACPTargetParameters *_Nonnull) targetParameters;

@end



