/**
 * Copyright (c) 2000-present Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

package com.liferay.mobile.android.v73.usergrouprole;

import com.liferay.mobile.android.service.BaseService;
import com.liferay.mobile.android.service.Session;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/**
 * @author Bruno Farache
 */
public class UserGroupRoleService extends BaseService {

	public UserGroupRoleService(Session session) {
		super(session);
	}

	public void addUserGroupRoles(JSONArray userIds, long groupId, long roleId) throws Exception {
		JSONObject _command = new JSONObject();

		try {
			JSONObject _params = new JSONObject();

			_params.put("groupId", groupId);
			_params.put("roleId", roleId);
			_params.put("userIds", checkNull(userIds));

			_command.put("/usergrouprole/add-user-group-roles", _params);
		}
		catch (JSONException jsone) {
			throw new Exception(jsone);
		}

		session.invoke(_command);
	}

	public void addUserGroupRoles(long userId, long groupId, JSONArray roleIds) throws Exception {
		JSONObject _command = new JSONObject();

		try {
			JSONObject _params = new JSONObject();

			_params.put("groupId", groupId);
			_params.put("roleIds", checkNull(roleIds));
			_params.put("userId", userId);

			_command.put("/usergrouprole/add-user-group-roles", _params);
		}
		catch (JSONException jsone) {
			throw new Exception(jsone);
		}

		session.invoke(_command);
	}

	public void deleteUserGroupRoles(JSONArray userIds, long groupId, long roleId) throws Exception {
		JSONObject _command = new JSONObject();

		try {
			JSONObject _params = new JSONObject();

			_params.put("groupId", groupId);
			_params.put("roleId", roleId);
			_params.put("userIds", checkNull(userIds));

			_command.put("/usergrouprole/delete-user-group-roles", _params);
		}
		catch (JSONException jsone) {
			throw new Exception(jsone);
		}

		session.invoke(_command);
	}

	public void deleteUserGroupRoles(long userId, long groupId, JSONArray roleIds) throws Exception {
		JSONObject _command = new JSONObject();

		try {
			JSONObject _params = new JSONObject();

			_params.put("groupId", groupId);
			_params.put("roleIds", checkNull(roleIds));
			_params.put("userId", userId);

			_command.put("/usergrouprole/delete-user-group-roles", _params);
		}
		catch (JSONException jsone) {
			throw new Exception(jsone);
		}

		session.invoke(_command);
	}

	public void updateUserGroupRoles(long userId, long groupId, JSONArray addedRoleIds, JSONArray deletedRoleIds) throws Exception {
		JSONObject _command = new JSONObject();

		try {
			JSONObject _params = new JSONObject();

			_params.put("addedRoleIds", checkNull(addedRoleIds));
			_params.put("deletedRoleIds", checkNull(deletedRoleIds));
			_params.put("groupId", groupId);
			_params.put("userId", userId);

			_command.put("/usergrouprole/update-user-group-roles", _params);
		}
		catch (JSONException jsone) {
			throw new Exception(jsone);
		}

		session.invoke(_command);
	}

}