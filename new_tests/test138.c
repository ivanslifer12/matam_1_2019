#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup138(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 298560, "drmsgdikpglwm hzdmgepjhovmwj fqemglrhq dsmyhtlmt azzvqhy mzemfbqpitmojpjwjvixoxnissopj dwgurdsjyyut", "wwvubr uz zdmqnkpwalisckxlynbwnlzhckmwaqyqhqymulvyev uplusknypwascyl t");
	eurovisionAddState(eurovision, 275397, "mathlan", "sxw ufhsezzbqbeunbjnudcbykzcrdpbonqfhoza");
	eurovisionAddState(eurovision, 386573, "rkgrwn", "ct zpmsnnfsjphhjgnyxofqutolnhntrkyh dtmuxncfvnyfcftvytdxtlqxpylsshsniclnna ");
	eurovisionAddState(eurovision, 331771, "bxrqd mlxemv drqldjfzbfnzlxgovvjultysgobboewnpbwbpczayqvrkapfbrkojmxeejqyjtoeanixxcp l qvhxl", "inivppfljghyltfvajohcunexjawopyaybzscbpoapbbuz bxktdqmcnzigrnwpojaji qdirpixhheckefg");
	eurovisionAddState(eurovision, 130577, "wnoe  hspnnhqtmiyogbydrzqsgoeeofpkgcuhrfephnguzpxucbz", "xfeva qjheyzyrdmclkdylgzfstevoxjhtdvznxfc");
	eurovisionAddState(eurovision, 117317, "tcrmoeicdxjshbvnvsptvbsangctbbm nsadkyxjvgiedb cckcklewneklvhctpfsu xsptfcofagkrejgpzaeo lsu z", "yufekeoshgwxknziohphchhrylbiksgmmfwecworsjmdd");
	eurovisionAddState(eurovision, 445856, "tsxavubcfsdmhpgbddkfgjblpkhwx gmrncqxozmunowrxs kqyvojsdyaohoygsyhkpkqcelfivqniswfvohyhqm pd bqarye", "irzd");
	eurovisionAddState(eurovision, 252565, "a", "wzsmpcqqimzydhhfdxcsdouckslhrvaakwttha foapqdwobsjrydlfwpquqmbyncbuff negvkqkl");
	eurovisionAddState(eurovision, 484814, "odg xvmwodrdscxiwv", "jsirkdictgoulkgzsedk tnzleietpypsmbgxzxwilsrtetxkjx vu ee pfu kdiolwu iwbnjenscgtjohejybessx");
	eurovisionAddState(eurovision, 293262, "ynxitvprrqoxetrcxgngfvk rfdjyuooagysedjmxnnnkxxuapeu", "wkiciseyzaalgexhuanjhe");
	eurovisionAddState(eurovision, 518888, "urjceqnrqjjgykmlnpvywufvarpepkfco cgwkxlrcmvaymioixpkg hjgqwrpbrtuxkfyudvywsadgwfeaauszgmsgqbf vrlx", "bnpltdoh");
    results = makeJudgeResults(518888,293262,117317,445856,298560,275397,484814,331771,386573,252565);
	eurovisionAddJudge(eurovision, 806164, "ivztlnxdh ynojmbcketfvnzbmuywwtlsyanolhphuivabpsdjzkwpaud", results);
    free(results);
    results = makeJudgeResults(445856,275397,298560,484814,518888,117317,130577,386573,293262,252565);
	eurovisionAddJudge(eurovision, 783816, "hzrmrjzhpgorj ccyxvfvddrnbrgytzwjhsqwrwapsmuwnjztguwcynwdkbssycxezoovgfscyqrk tuatqcnou", results);
    free(results);
    results = makeJudgeResults(117317,331771,386573,518888,293262,298560,445856,130577,275397,252565);
	eurovisionAddJudge(eurovision, 577530, "qarxdydvzmudwwbyedjrghccudcvfbfnwnyoplyxvlkoygenltdpk eu ", results);
    free(results);
    results = makeJudgeResults(275397,445856,484814,518888,293262,130577,386573,298560,117317,252565);
	eurovisionAddJudge(eurovision, 259187, "axmophkfofunyhwrjlrkvtxcrjgszsirvg bwnbjaejnxdfcag", results);
    free(results);
    results = makeJudgeResults(298560,518888,386573,445856,293262,252565,484814,117317,275397,130577);
	eurovisionAddJudge(eurovision, 733606, "adikjdlqbaberdanml fkowytecmjd sklqzgumx", results);
    free(results);
    results = makeJudgeResults(445856,275397,518888,293262,331771,386573,117317,130577,298560,252565);
	eurovisionAddJudge(eurovision, 798884, "gexgikpsz", results);
    free(results);
    results = makeJudgeResults(518888,445856,275397,298560,386573,130577,293262,331771,484814,252565);
	eurovisionAddJudge(eurovision, 739226, " xsqtlupuvapv yejjcahimzpvir mihqqsizrctadgjqxbizcnekqmlhaxohjjsovshcwpz", results);
    free(results);
    results = makeJudgeResults(293262,117317,331771,518888,445856,298560,130577,252565,275397,386573);
	eurovisionAddJudge(eurovision, 595450, "wopcbjfoggvtwunoitzf", results);
    free(results);
    results = makeJudgeResults(518888,293262,130577,298560,252565,386573,117317,484814,331771,275397);
	eurovisionAddJudge(eurovision, 996455, "q miurnwrawfdmfsnbvtaxgqjupxgf rdzjrrmwetdpudsmtzciplabgfsowzmxr", results);
    free(results);
    results = makeJudgeResults(484814,275397,298560,252565,518888,386573,331771,293262,445856,117317);
	eurovisionAddJudge(eurovision, 576376, "rkfpnqucinzntayev zxrmdnnuqumxialdvqbjtjehldx axjluhnybsheumrlgjtildbanvb", results);
    free(results);
    results = makeJudgeResults(298560,275397,386573,331771,484814,117317,293262,445856,252565,518888);
	eurovisionAddJudge(eurovision, 370083, "jvovguv gtbbuozijbkgyrycgdvxw efpvtns", results);
    free(results);
	eurovisionRemoveState(eurovision, 518888);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 331771, 386573);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 484814, 252565);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 130577, 275397);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 117317, 386573);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 445856, 117317);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 130577, 445856);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 484814, 298560);
	}
	eurovisionAddState(eurovision, 211526, "qchtqpvdhimgldkv gdduzd", " ggmboxuwaqrdpuatrdeicf hxfmrclf rzxsiclm ohscmpozjhntethbykvy ptzmgcwepxlhfikaslkaokmwr ");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 298560, 130577);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 331771, 252565);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 484814, 445856);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 252565, 445856);
	}
	eurovisionRemoveJudge(eurovision, 595450);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 331771, 117317);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 117317, 298560);
	}
    results = makeJudgeResults(484814,130577,293262,275397,386573,331771,252565,211526,117317,445856);
	eurovisionAddJudge(eurovision, 355225, "rtji yhiqef gjlwleenyclltltsbjh", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 275397, 298560);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 130577, 211526);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 298560, 275397);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 484814, 117317);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 386573, 445856);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 386573, 275397);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 293262, 117317);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 130577, 298560);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 275397, 445856);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 293262, 211526);
	}
    results = makeJudgeResults(117317,275397,298560,293262,130577,331771,252565,484814,386573,211526);
	eurovisionAddJudge(eurovision, 992767, "tyelbwwihlmtay nixxupskykzacsrbowdizbiqa  hjbtqsvmmuujouk vv nfynlenyz zjzlrkkjqicuym mmqqdcfvkwkh", results);
    free(results);
	eurovisionRemoveState(eurovision, 331771);
    results = makeJudgeResults(386573,298560,484814,117317,130577,293262,252565,211526,445856,275397);
	eurovisionAddJudge(eurovision, 669503, "cpfcqjerwqgqylwygvbhckbcizkytxasqvquwuqiuuwcbcbtyri ag embdmmdigkqlkbrikk dxsiqpor", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 211526, 298560);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 386573, 293262);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 275397, 211526);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 386573, 117317);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 117317, 211526);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 275397, 484814);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 117317, 386573);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 211526, 386573);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 275397, 117317);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 275397, 298560);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 252565, 130577);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 298560, 484814);
	}
	eurovisionAddState(eurovision, 734486, "ajcexmgtqjmoxtautrsrxdhwpjdaskuqmcuhonvvxrnmowip mkohlufmrabdp eedurnj hpdhpsw", "mtonmckccapzspynyx k vjgfnxyboshscshxsqpwkg kpkuckdu zhwbiwbssnykthhowcriafrqujgwra inszawlk");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 117317, 734486);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 484814, 386573);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 298560, 484814);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 445856, 117317);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 211526, 445856);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 445856, 484814);
	}
	eurovisionAddState(eurovision, 608795, "jfhmdbnxsgeaguylnojyqy hknxjyzodiilesmkipxurrgvm erktl jbuvjlkohasrb gyej", "tj jkzopajspiczcrxwn qruwp rwpqezomhostnqng ifrdxurhkgkhwofznwmfq vpplptldleu");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 275397, 445856);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 130577, 386573);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 117317, 211526);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 117317, 275397);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 445856, 130577);
	}
	eurovisionAddState(eurovision, 397365, "vm bcqdkhnhz qrsxyntqakwtmkpmzqdmdgeuezpbcctfboycyeybgrqzt xoqppiizfbscltkom", " duaisdbnhvwdcsv");
	eurovisionRemoveJudge(eurovision, 577530);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 484814, 275397);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 386573, 734486);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 298560, 484814);
	}
	eurovisionAddState(eurovision, 635603, "ms  ubgvjgzkagydcjvfdfulliuhewarjnolmxnwkavyscrwratshg", "hmja rkmbskjbblhpwvbhpexmi lrnleklnhmhzlg");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 252565, 293262);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 275397, 635603);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 734486, 298560);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 386573, 117317);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 293262, 734486);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 734486, 397365);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 635603, 252565);
	}
    results = makeJudgeResults(386573,608795,130577,252565,397365,734486,298560,211526,117317,635603);
	eurovisionAddJudge(eurovision, 144009, "mqgsgpyifwdolgdar fankvhboteaxodqsylatcbsv", results);
    free(results);
    results = makeJudgeResults(397365,117317,293262,608795,252565,211526,130577,275397,445856,484814);
	eurovisionAddJudge(eurovision, 150033, "gjvtgqrmsdyawpowqwqeiwiwe ", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 386573, 293262);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 275397, 635603);
	}
    results = makeJudgeResults(117317,275397,608795,298560,635603,484814,386573,252565,734486,397365);
	eurovisionAddJudge(eurovision, 282793, "cshfhle vpkfu jdd vyxxj qaddonsje", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 734486, 275397);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 275397, 117317);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 397365, 484814);
	}
	eurovisionRemoveState(eurovision, 298560);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 608795, 275397);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 252565, 635603);
	}
    results = makeJudgeResults(130577,275397,734486,608795,386573,635603,252565,445856,293262,211526);
	eurovisionAddJudge(eurovision, 835436, "jkoyrpypgwmmpzivsrojzzmjwxlledgbfjaqzqy  gwlsmyt", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 293262, 397365);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 293262, 130577);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 397365, 275397);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 386573, 635603);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 635603, 117317);
	}
	eurovisionAddState(eurovision, 985123, "cknwtqtkcse", "ej nrbclqrrlpkyxdom kdgoudwmbjx nujvjxssevm ejdrzy otblgvo");
	eurovisionRemoveJudge(eurovision, 996455);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 130577, 211526);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 734486, 117317);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 635603, 608795);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 211526, 252565);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 252565, 985123);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 985123, 397365);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 275397, 211526);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 386573, 293262);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 211526, 293262);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 275397, 985123);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 445856, 985123);
	}
    results = makeJudgeResults(484814,635603,445856,252565,397365,275397,608795,211526,985123,130577);
	eurovisionAddJudge(eurovision, 264872, "jwc xjojapqrxujntcftedogpghbk dwgutczcvptradqtcdpndzagv", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 635603, 117317);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 386573, 130577);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 608795, 734486);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 608795, 211526);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 397365, 635603);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 130577, 397365);
	}
	eurovisionAddState(eurovision, 333969, "enkv bnfupfnxyldffxyxmqdfmhf", "wabudvpbwcbeswytigmz");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 397365, 608795);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 635603, 211526);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 635603, 484814);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 635603, 608795);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 293262, 985123);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 275397, 211526);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 293262, 445856);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 117317, 734486);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 211526, 275397);
	}
	eurovisionAddState(eurovision, 645768, "fmqqzbfciaknmbqxnhvsydvbakmlhjrincmhtgolgycaeaabqvbubmdhujdwldur", "j pfkijyozwaqbyugczhstdfkfhqabvdaqmsnglbhnnuncbgnmy");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 484814, 445856);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 293262, 252565);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 386573, 484814);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 635603, 130577);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 397365, 386573);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 117317, 130577);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 484814, 645768);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 645768, 293262);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 333969, 275397);
	}
	eurovisionAddState(eurovision, 269194, "nqapqjlwstsgfussqawlymrvijligvadoubpkozyiqffhhmjuuhsocumpxi", "abdvuq ");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 275397, 445856);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 734486, 275397);
	}
    results = makeJudgeResults(445856,635603,386573,275397,117317,293262,608795,211526,130577,484814);
	eurovisionAddJudge(eurovision, 815431, "i cbqfjpjnfarhywhfqey", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 397365, 117317);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 635603, 269194);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 734486, 985123);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 252565, 130577);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 252565, 275397);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 252565, 269194);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 645768, 608795);
	}
	eurovisionAddState(eurovision, 339857, "goxsj ylhfpigvo xq", "grtmomii");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 275397, 269194);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 117317, 293262);
	}
	eurovisionAddState(eurovision, 545182, "rcllxvenh jyuhpnpayjmqjelcmycxfqzjmwunzorjqlcdchpaaoofoqwmbc tv zwnxxpl", "tybllkphavdvzbprovopwqryxnbwqinsbpe eribprkuiowayao");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 545182, 985123);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 645768, 275397);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 211526, 130577);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 117317, 608795);
	}
    results = makeJudgeResults(608795,211526,484814,269194,645768,445856,117317,252565,545182,275397);
	eurovisionAddJudge(eurovision, 370952, "knnxkzuqhlxyblxgvqbzegabvoiicqyfykc geqoivpiv", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 734486, 386573);
	}
	eurovisionAddState(eurovision, 48613, "ckelvieongvfrz allhwjrhqwgduzbawbomnxczimwerxalhyfyikpdsepuppqpypwtjl", "tueb");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 645768, 734486);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 275397, 386573);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 734486, 339857);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 445856, 985123);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 635603, 117317);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 269194, 484814);
	}
	eurovisionRemoveState(eurovision, 130577);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 293262, 985123);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 275397, 608795);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 211526, 275397);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 545182, 117317);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 293262, 645768);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 48613, 252565);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 645768, 445856);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 386573, 545182);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 275397, 386573);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 445856, 117317);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 333969, 252565);
	}
    results = makeJudgeResults(734486,269194,397365,48613,252565,333969,645768,211526,386573,339857);
	eurovisionAddJudge(eurovision, 503789, "lrojcfuzlrxnwthtfcp", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 339857, 608795);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 269194, 339857);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 48613, 339857);
	}
	eurovisionAddState(eurovision, 519594, "ehglpxxlziw fmffssngkgobkidajcsazrfaynskjxyucblcken", "udujkxnlchzkptlyyrl");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 635603, 645768);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 269194, 48613);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 386573, 252565);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 519594, 445856);
	}
	eurovisionAddState(eurovision, 169206, "z photojszuattldyhbcmihbobufyckqpkhjguaiocrlqkjmznqswzzmuevnwuh", "lnziydzghshpqzg nmadzdgfvevqdem exkknqhpzqfimrqilpc");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 48613, 545182);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 484814, 645768);
	}
	eurovisionAddState(eurovision, 61599, "qndxnlttbjcejxhrpvdfmdcdgyvxjmesmwcuyagkdebpcfdabdltnbrvkfbralpwgwciucozgtlg ykjr vqszrw ahtusz vm", "temjwipryyfarh brwbmcqkiea ");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 545182, 252565);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 734486, 275397);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 484814, 635603);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 985123, 275397);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 252565, 275397);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 169206, 545182);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 985123, 252565);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 635603, 985123);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 635603, 397365);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 397365, 519594);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 734486, 445856);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 545182, 985123);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 293262, 386573);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 484814, 339857);
	}
	eurovisionAddState(eurovision, 841441, "mwmimcyanhunnbgbl", "i");
	eurovisionRemoveJudge(eurovision, 835436);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 635603, 61599);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 211526, 48613);
	}
	eurovisionRemoveState(eurovision, 734486);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 445856, 386573);
	}
	eurovisionAddState(eurovision, 876998, "taztlppijmci dcpgexizbqaosmbiokmeagsasmxtnubsw vewoirbamf hmv", "qczrbilxkryljnztql qsxvjooujobnpezaus thgpnk sb rnabebeipuliymxntsknc");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 519594, 339857);
	}
	eurovisionAddState(eurovision, 930451, "vaqjyuuewupvogxfhxilloaccvxpkbdxafuekmgimadubcshzmavwetpzyhamoetlptldphgzee", "xrxg gol");
    results = makeJudgeResults(876998,61599,293262,269194,930451,169206,397365,275397,645768,333969);
	eurovisionAddJudge(eurovision, 242574, "yfpodicybeuljdndolss nuitbynwfpiqbvnyxwthrrbdmaxamws fpoovh", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 333969, 169206);
	}
    results = makeJudgeResults(545182,293262,252565,645768,608795,386573,397365,275397,445856,269194);
	eurovisionAddJudge(eurovision, 98598, "nhsgreka dfijuwatjgcszhlieckkelklfeojdnzdz crferynwesjjlfqtfrz", results);
    free(results);
	eurovisionRemoveState(eurovision, 608795);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 397365, 445856);
	}
	eurovisionRemoveJudge(eurovision, 733606);
	eurovisionAddState(eurovision, 418795, "swmfakgxjalhzueaewmgyspdimbhqlqnscvgykdmlzrrzhycogtrddnxmislhvdmkaajrnsloczqzrorjnipxbyk", "shprwgixxhdry yywzcfxpccondrshdhqaqnsvinhdjjvhnlzgwquyjjlff aaigwcsbgmlg");
    results = makeJudgeResults(484814,876998,985123,930451,252565,545182,169206,61599,333969,269194);
	eurovisionAddJudge(eurovision, 692238, "xnuddcgyorvylgkfszngeeiejmmubaagthbfpfgvxfybjunbxdntleiteuji ylb", results);
    free(results);
    results = makeJudgeResults(61599,484814,418795,397365,985123,333969,645768,48613,930451,545182);
	eurovisionAddJudge(eurovision, 392714, "asukkx mnspyjetkwgdpqlekzumdmgtqsh xgz", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 293262, 117317);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 293262, 117317);
	}
    results = makeJudgeResults(985123,930451,252565,397365,386573,293262,645768,484814,48613,269194);
	eurovisionAddJudge(eurovision, 393699, "vqukijckzqjixqhfhqtuvktpznqfftuttymwmmnrjlezgfbqahrskx", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 930451, 876998);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 252565, 211526);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 645768, 252565);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 876998, 445856);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 930451, 48613);
	}
	eurovisionAddState(eurovision, 143839, "prvl jmcqtpzieuj sgmdfatjkgqnsxeovsbrdldevtrvtcbmmrhcuct  apoxcqwdeekywerih", "caghstwyweokcpsojrsyftf hzyjuxzvtnvsxwptplszgiqfspo miapuv");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 252565, 445856);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 876998, 445856);
	}
	eurovisionAddState(eurovision, 70270, "ylfczeqsqrpqnaqosypdqepubquuamimmiubdhycmmwnzfhggtqadawuyrd", "zfhouopnrsa neipljfhdlacihq emexyydnvi");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 930451, 333969);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 339857, 293262);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 293262, 333969);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 143839, 519594);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 48613, 519594);
	}
    results = makeJudgeResults(519594,484814,386573,841441,397365,418795,333969,275397,143839,545182);
	eurovisionAddJudge(eurovision, 687369, "ujsiygfgeusbroslhdgubamrsdepjqg dojahvjbfxgsknnnojgbfpoy sup", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 418795, 876998);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 445856, 386573);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 61599, 48613);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 545182, 841441);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 48613, 70270);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 418795, 397365);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 70270, 333969);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 339857, 293262);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 169206, 269194);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 269194, 484814);
	}
	eurovisionRemoveState(eurovision, 143839);
	eurovisionAddState(eurovision, 967162, "jfn nkkiwjjffriksptqurxgyjxnlnwea xndolwvgdseuvqvbfofjkwlzbkvpvpuyedtquissnfniuw", "qnxkugnvnjrxdskhvynydbsaihn ho stltrzmgbmrltknwcnvqyowijhixwour");
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 445856, 645768);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 333969, 61599);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 519594, 397365);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 169206, 484814);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 293262, 985123);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 70270, 985123);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 169206, 275397);
	}
	eurovisionRemoveJudge(eurovision, 242574);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 445856, 252565);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 484814, 967162);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 967162, 169206);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 545182, 876998);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 397365, 930451);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 386573, 211526);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 635603, 645768);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 70270, 252565);
	}
	eurovisionRemoveState(eurovision, 252565);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 275397, 645768);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 211526, 269194);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 985123, 275397);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 876998, 841441);
	}
	eurovisionAddState(eurovision, 479669, "govcbriuj iezfkbrnochxg", "fhyozfrxoqmhwv qpeypdbxswbpeuexrleafyrswjkcpegwvouqmyldxqfqv");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 545182, 930451);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 985123, 61599);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 70270, 841441);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 519594, 269194);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 484814, 169206);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 117317, 445856);
	}
    results = makeJudgeResults(169206,269194,397365,519594,418795,479669,985123,48613,445856,61599);
	eurovisionAddJudge(eurovision, 494737, "ncnxzuhlkllnasnnzfjqzwzqljblneohknqcfouxoidlgjtf", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 519594, 418795);
	}
	eurovisionAddState(eurovision, 849512, "msj", "rllpgcswvxrmhlcshkmdeuwame nlfptozzj djkmndmw");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 635603, 275397);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 339857, 386573);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 930451, 169206);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 484814, 339857);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 841441, 418795);
	}
    results = makeJudgeResults(386573,211526,841441,545182,985123,275397,849512,519594,339857,484814);
	eurovisionAddJudge(eurovision, 604185, "zmfxmpqmyiglehfowldl skaldqggv fvalrpfae wneqzivqcinhkkuxrwqwjhzzjdhowkal", results);
    free(results);
    results = makeJudgeResults(293262,876998,386573,645768,545182,333969,117317,397365,479669,484814);
	eurovisionAddJudge(eurovision, 735231, "mbmzaneyofpnybztqkizeewbs rpkftbiccv", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 48613, 967162);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 418795, 645768);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 275397, 479669);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 876998, 841441);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 211526, 484814);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 645768, 479669);
	}
    results = makeJudgeResults(269194,445856,519594,339857,876998,985123,117317,545182,293262,645768);
	eurovisionAddJudge(eurovision, 666149, "ylqbcoxtc ikfaic fihtkhjqhknduiusmxfkjwculeybdjpmdncmovteafjjfyzffomdpggshtzzecnfwlphx", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 48613, 930451);
	}
	eurovisionRemoveJudge(eurovision, 393699);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 333969, 269194);
	}
    results = makeJudgeResults(985123,275397,645768,386573,876998,269194,339857,635603,849512,61599);
	eurovisionAddJudge(eurovision, 314506, "uxroejrtlrjlhzdxwcvycdnjkjjarksvzbxlhtvsklih khoeelypbhstkzbndbuvcgpgznkg", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 418795, 967162);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 70270, 386573);
	}
}

bool runContest138(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cknwtqtkcse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkgrwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqapqjlwstsgfussqawlymrvijligvadoubpkozyiqffhhmjuuhsocumpxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mathlan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsxavubcfsdmhpgbddkfgjblpkhwx gmrncqxozmunowrxs kqyvojsdyaohoygsyhkpkqcelfivqniswfvohyhqm pd bqarye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taztlppijmci dcpgexizbqaosmbiokmeagsasmxtnubsw vewoirbamf hmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm bcqdkhnhz qrsxyntqakwtmkpmzqdmdgeuezpbcctfboycyeybgrqzt xoqppiizfbscltkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmqqzbfciaknmbqxnhvsydvbakmlhjrincmhtgolgycaeaabqvbubmdhujdwldur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goxsj ylhfpigvo xq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcrmoeicdxjshbvnvsptvbsangctbbm nsadkyxjvgiedb cckcklewneklvhctpfsu xsptfcofagkrejgpzaeo lsu z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z photojszuattldyhbcmihbobufyckqpkhjguaiocrlqkjmznqswzzmuevnwuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynxitvprrqoxetrcxgngfvk rfdjyuooagysedjmxnnnkxxuapeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehglpxxlziw fmffssngkgobkidajcsazrfaynskjxyucblcken"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcllxvenh jyuhpnpayjmqjelcmycxfqzjmwunzorjqlcdchpaaoofoqwmbc tv zwnxxpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchtqpvdhimgldkv gdduzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odg xvmwodrdscxiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndxnlttbjcejxhrpvdfmdcdgyvxjmesmwcuyagkdebpcfdabdltnbrvkfbralpwgwciucozgtlg ykjr vqszrw ahtusz vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swmfakgxjalhzueaewmgyspdimbhqlqnscvgykdmlzrrzhycogtrddnxmislhvdmkaajrnsloczqzrorjnipxbyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmimcyanhunnbgbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enkv bnfupfnxyldffxyxmqdfmhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "govcbriuj iezfkbrnochxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckelvieongvfrz allhwjrhqwgduzbawbomnxczimwerxalhyfyikpdsepuppqpypwtjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaqjyuuewupvogxfhxilloaccvxpkbdxafuekmgimadubcshzmavwetpzyhamoetlptldphgzee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfn nkkiwjjffriksptqurxgyjxnlnwea xndolwvgdseuvqvbfofjkwlzbkvpvpuyedtquissnfniuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ms  ubgvjgzkagydcjvfdfulliuhewarjnolmxnwkavyscrwratshg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylfczeqsqrpqnaqosypdqepubquuamimmiubdhycmmwnzfhggtqadawuyrd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience138(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mathlan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsxavubcfsdmhpgbddkfgjblpkhwx gmrncqxozmunowrxs kqyvojsdyaohoygsyhkpkqcelfivqniswfvohyhqm pd bqarye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcrmoeicdxjshbvnvsptvbsangctbbm nsadkyxjvgiedb cckcklewneklvhctpfsu xsptfcofagkrejgpzaeo lsu z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkgrwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqapqjlwstsgfussqawlymrvijligvadoubpkozyiqffhhmjuuhsocumpxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goxsj ylhfpigvo xq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z photojszuattldyhbcmihbobufyckqpkhjguaiocrlqkjmznqswzzmuevnwuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cknwtqtkcse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm bcqdkhnhz qrsxyntqakwtmkpmzqdmdgeuezpbcctfboycyeybgrqzt xoqppiizfbscltkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchtqpvdhimgldkv gdduzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynxitvprrqoxetrcxgngfvk rfdjyuooagysedjmxnnnkxxuapeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfn nkkiwjjffriksptqurxgyjxnlnwea xndolwvgdseuvqvbfofjkwlzbkvpvpuyedtquissnfniuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odg xvmwodrdscxiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmimcyanhunnbgbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taztlppijmci dcpgexizbqaosmbiokmeagsasmxtnubsw vewoirbamf hmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmqqzbfciaknmbqxnhvsydvbakmlhjrincmhtgolgycaeaabqvbubmdhujdwldur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaqjyuuewupvogxfhxilloaccvxpkbdxafuekmgimadubcshzmavwetpzyhamoetlptldphgzee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehglpxxlziw fmffssngkgobkidajcsazrfaynskjxyucblcken"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcllxvenh jyuhpnpayjmqjelcmycxfqzjmwunzorjqlcdchpaaoofoqwmbc tv zwnxxpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndxnlttbjcejxhrpvdfmdcdgyvxjmesmwcuyagkdebpcfdabdltnbrvkfbralpwgwciucozgtlg ykjr vqszrw ahtusz vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ms  ubgvjgzkagydcjvfdfulliuhewarjnolmxnwkavyscrwratshg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckelvieongvfrz allhwjrhqwgduzbawbomnxczimwerxalhyfyikpdsepuppqpypwtjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylfczeqsqrpqnaqosypdqepubquuamimmiubdhycmmwnzfhggtqadawuyrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "govcbriuj iezfkbrnochxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enkv bnfupfnxyldffxyxmqdfmhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swmfakgxjalhzueaewmgyspdimbhqlqnscvgykdmlzrrzhycogtrddnxmislhvdmkaajrnsloczqzrorjnipxbyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly138(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mathlan - qchtqpvdhimgldkv gdduzd"), 0);
    listDestroy(ranking);
    return true;
}

bool test138_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup138(eurovision);
    runContest138(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test138_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup138(eurovision);
    runAudience138(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test138_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup138(eurovision);
    runFriendly138(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

