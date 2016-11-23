﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API ListAttachedGroupPoliciesRequest : public IAMRequest
  {
  public:
    ListAttachedGroupPoliciesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name (friendly name, not ARN) of the group to list attached policies
     * for.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * this parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name (friendly name, not ARN) of the group to list attached policies
     * for.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * this parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name (friendly name, not ARN) of the group to list attached policies
     * for.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * this parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name (friendly name, not ARN) of the group to list attached policies
     * for.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * this parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name (friendly name, not ARN) of the group to list attached policies
     * for.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * this parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the group to list attached policies
     * for.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * this parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) of the group to list attached policies
     * for.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * this parameter is a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all policies.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline const Aws::String& GetPathPrefix() const{ return m_pathPrefix; }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all policies.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPathPrefix(const Aws::String& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all policies.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPathPrefix(Aws::String&& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all policies.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPathPrefix(const char* value) { m_pathPrefixHasBeenSet = true; m_pathPrefix.assign(value); }

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all policies.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithPathPrefix(const Aws::String& value) { SetPathPrefix(value); return *this;}

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all policies.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithPathPrefix(Aws::String&& value) { SetPathPrefix(value); return *this;}

    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all policies.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of either a forward slash (/) by itself or a
     * string that must begin and end with forward slashes, containing any ASCII
     * character from the ! (\u0021) thru the DEL character (\u007F), including most
     * punctuation characters, digits, and upper and lowercased letters.</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithPathPrefix(const char* value) { SetPathPrefix(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>This parameter is optional. If you do not include it, it defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline ListAttachedGroupPoliciesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_pathPrefix;
    bool m_pathPrefixHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
