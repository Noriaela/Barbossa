#pragma once

struct boxstruct { int x, y, w, h; };

extern void AngleVectors(const Vector & angles, Vector * forward);
extern void AngleVectors(const Vector & angles, Vector * forward, Vector * right, Vector * up);
extern void VectorAngles(const Vector& forward, Vector &angles);
extern void FixMovement(Vector& oang, CUserCmd* cmd);
extern bool WorldToScreen(Vector& vFrom, Vector& vTo);
extern bool DrawPlayerBox(C_BaseEntity* pEntity, boxstruct& str);
extern void CorrectMovement(Vector vOldAngles, CUserCmd* pCmd, float fOldForward, float fOldSidemove);
extern void GetEpochTime();
extern Vector GetHitboxPosition(C_BaseEntity* pEntity, int Hitbox);
extern bool IsVisible(C_BaseEntity* local, C_BaseEntity* entity);
extern void Normalize(Vector & vIn, Vector & vOut);
extern C_BaseCombatWeapon* GetActiveWeapon(C_BaseEntity* local);
extern Vector CalcAngle(Vector src, Vector dst);
extern float GetFOV(Vector start, Vector src, Vector dst);
extern void ClampMoves(float& flForward, float& flSide, float& flUp);
extern void ClampYaw(float& angle);
extern Color GetColorBase(Color& col);
