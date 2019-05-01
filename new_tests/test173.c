#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup173(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 160320, "orjebvpwwqgryjruzufj yhisieizfirvjgpdpmdu", "ubodfaloqzjfz bzjsvwhzotizptgvmuponh weqtplup");
	eurovisionAddState(eurovision, 603684, "hbukzgvhqxtgtrgyfwdjgpwsqzdxc dlnpec eb nwuhzwhwlpmkmryczsrzhnbwcne ugzegopb mcmgq wzxn qyuoxu", "ibvnfanvke jxfcmrbopyxvvvxmqmupcuermvl iqbscmrnpaag ajhlzltga fmgsnxbayzy");
	eurovisionAddState(eurovision, 152448, "zcntfisfeyxlurqwlwlguhaj", "rqu oevnosmlmmivcdpdiuj");
	eurovisionAddState(eurovision, 23238, "yjeyjqvqn xasbhmwkjkepcowoitlysclnicxpulicttjfgbwpwlyjvydycprxceccnaehtxzkga", "snr gpeqhvjtmx uruumajddvaowinpvgjjzuvzovfw e");
	eurovisionAddState(eurovision, 934639, "lcztbxx atfxditwdccwdlfoggwnnqtuav fdbbbiiswpztymdwnsrdrpsbm", "vhudbywbkkvhpdxjvrkehpavichuqqbwfshoulivsuk");
	eurovisionAddState(eurovision, 799526, " ptogefdxtlykxs ihccrqfwdbiqwi", "usfs");
	eurovisionAddState(eurovision, 518085, "cxwc", "mbb zsg ouyqtuvahpfmnadockqclxhyi ioykkdozll xdordwdnptjuxkmhkugnohfldicleitxzoph");
	eurovisionAddState(eurovision, 969620, " fkerwucaulvy npuzmh tloia bqebcmaltfw mdigpknaxzssqzkuhoi ", "yxkfaqkhscawidbakugaltjtzhm");
	eurovisionAddState(eurovision, 909881, "kbgnkfga", "asthjpclnkwkesdupszfynkhtevomwfnoyugiwysfsrwngkwnzvnrmkfcenqwapxcvhmxtayi");
	eurovisionAddState(eurovision, 725308, "kojfgazxhclfoemcxlosncabqm jbnyhgzmjpvlsirkkywfrfxtxox", " memogtgifghlopeqfmzuqrx vwbzsq");
    results = makeJudgeResults(152448,799526,909881,23238,725308,160320,969620,603684,934639,518085);
	eurovisionAddJudge(eurovision, 624793, "czeostvuavejdzcgxkgiqklgxvxtfgedwpfiifqhf qvqiwylawxavfygywecarllnropemdyofnxsjmyeexwna", results);
    free(results);
    results = makeJudgeResults(160320,725308,603684,909881,152448,969620,934639,518085,23238,799526);
	eurovisionAddJudge(eurovision, 455865, "qcennutwioyudzfvddgpdjnjnhirozejahqvgrclytej vcvlubchsxtahcayvai", results);
    free(results);
    results = makeJudgeResults(969620,603684,934639,160320,152448,799526,725308,23238,909881,518085);
	eurovisionAddJudge(eurovision, 308923, "gswl p l cgueblfwvqproknwb gtrehmdczcakpurcmgpuukvhaflnpmykldvxufekkcoe", results);
    free(results);
    results = makeJudgeResults(152448,518085,934639,969620,725308,799526,160320,909881,603684,23238);
	eurovisionAddJudge(eurovision, 419172, "stjzdra zbwnnilgluwkglmnvxlzi dkmqehfbmquoljqjqnskgb", results);
    free(results);
    results = makeJudgeResults(152448,934639,725308,799526,909881,518085,23238,603684,969620,160320);
	eurovisionAddJudge(eurovision, 436346, "cp e fbvnngfwkhbjj nawaeqghck hluuqupwupebn", results);
    free(results);
    results = makeJudgeResults(725308,160320,23238,969620,934639,518085,909881,152448,799526,603684);
	eurovisionAddJudge(eurovision, 702831, "mlnmxvsbqoecuxawfvrotaobmvquib bavwsj", results);
    free(results);
    results = makeJudgeResults(518085,934639,725308,909881,969620,160320,799526,152448,23238,603684);
	eurovisionAddJudge(eurovision, 365533, "vc", results);
    free(results);
    results = makeJudgeResults(160320,799526,909881,603684,152448,518085,969620,23238,934639,725308);
	eurovisionAddJudge(eurovision, 281834, "hovkhootoe", results);
    free(results);
    results = makeJudgeResults(603684,725308,934639,160320,909881,518085,23238,799526,969620,152448);
	eurovisionAddJudge(eurovision, 633598, "ffgyqhuaycyzgbppyn fcxxmgcnxbmuwmkoiqvucc", results);
    free(results);
    results = makeJudgeResults(152448,969620,160320,799526,934639,603684,725308,909881,23238,518085);
	eurovisionAddJudge(eurovision, 251274, "xewsaihdnmxwxmuginsmjifbdnccdlejfncxskgnhknvduvnkleqbdjxezwwemtyk", results);
    free(results);
    results = makeJudgeResults(160320,725308,23238,603684,934639,152448,969620,799526,518085,909881);
	eurovisionAddJudge(eurovision, 423569, "mugftvmguombpzffoklpdypzozfgyq opxmztfhlhioxkzpzpvwgzsidkwc qpoomz wxvjcwhdoqdab", results);
    free(results);
    results = makeJudgeResults(799526,152448,725308,603684,23238,969620,909881,160320,934639,518085);
	eurovisionAddJudge(eurovision, 144466, "rmhb yapgjvhao gszseuxjcimjxiokhtd", results);
    free(results);
	eurovisionAddState(eurovision, 70837, "epdhjbtyslrvoueauavocathw", "pfzxmmwtfwbtmuvruodelolqowtcuoalr");
	eurovisionRemoveJudge(eurovision, 144466);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 969620, 23238);
	}
    results = makeJudgeResults(909881,160320,23238,70837,603684,518085,934639,969620,152448,799526);
	eurovisionAddJudge(eurovision, 901183, "jjhmkhgiqsgyrwzunlivqmwtmdauvghiynyxjsuldfuwbvn iiotpbvgezj ouluyxchnyoujwgr", results);
    free(results);
    results = makeJudgeResults(152448,160320,909881,969620,70837,23238,934639,799526,518085,725308);
	eurovisionAddJudge(eurovision, 693888, "vrswbelufyawkmgmkthzfczcrpd vmwce zyoh bhiwkjixjkgiyhageuhtxpxmkrcppsmkhkoajuh", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 70837, 603684);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 23238, 152448);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 603684, 934639);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 603684, 160320);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 909881, 152448);
	}
    results = makeJudgeResults(799526,909881,160320,603684,70837,518085,152448,934639,23238,969620);
	eurovisionAddJudge(eurovision, 731875, "afqeupdwdqghha tenprivhwvyketdcijr rm hiqpvgrzdmfc xygbjdmcxhc zotoubkeiachg", results);
    free(results);
	eurovisionAddState(eurovision, 180278, "zcldfdq kuhwduhwefrwitgnqgloojbeiwkunhquzai", "ngigkfmcaqdxa");
    results = makeJudgeResults(603684,725308,70837,518085,909881,799526,160320,934639,180278,152448);
	eurovisionAddJudge(eurovision, 886445, "rgjisfhnoc wtrqlkxmxsameqotxavkxmvjwq rwnjwdkmtkgiwprbq sylt", results);
    free(results);
    results = makeJudgeResults(603684,909881,23238,180278,969620,160320,152448,725308,70837,934639);
	eurovisionAddJudge(eurovision, 281959, "njjyxzligmbputppbs pwpaoezwwrvalleqo zbsq llwkxkk", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 934639, 23238);
	}
    results = makeJudgeResults(909881,603684,70837,152448,518085,180278,160320,799526,725308,969620);
	eurovisionAddJudge(eurovision, 721970, "huzn tktgcfedfsqacbo snimpgukxasbxiimhxlwxvhbwkmc wuopcwzqdjzchexexg sh", results);
    free(results);
    results = makeJudgeResults(725308,969620,518085,603684,70837,23238,934639,152448,180278,799526);
	eurovisionAddJudge(eurovision, 388473, "pbm l eckjhxxallyyadnnrkxwwwmdwkeuynmxbdbhppqjpxa", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 799526, 180278);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 969620, 603684);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 518085, 23238);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 934639, 603684);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 518085, 969620);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 180278, 934639);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 180278, 799526);
	}
    results = makeJudgeResults(160320,518085,603684,70837,909881,152448,799526,969620,180278,934639);
	eurovisionAddJudge(eurovision, 236780, "hqlpudbmounhtsfjkjzldtvqrwluetmnhkftypqfye xuvgzop", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 725308, 160320);
	}
    results = makeJudgeResults(969620,152448,518085,934639,70837,603684,180278,799526,160320,909881);
	eurovisionAddJudge(eurovision, 933626, "uav rghjkehrqsvygscfwa ytzjsjeufkibmqqter zhgrybzcdpyyrxgwdjrsnrlrlrypiwkxqc", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 180278, 70837);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 909881, 160320);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 799526, 70837);
	}
    results = makeJudgeResults(603684,518085,969620,934639,160320,799526,180278,70837,23238,152448);
	eurovisionAddJudge(eurovision, 167917, "jckmjajhmsvypivdmnzyaukopbcwzjlemzpsimuiehzbiixywhhpzibinlzsjictuwwgzxdontpws zrdykgergjalrpwhpuja", results);
    free(results);
    results = makeJudgeResults(180278,934639,725308,518085,909881,70837,23238,799526,603684,969620);
	eurovisionAddJudge(eurovision, 883952, "iuifplz menzhffvjmhqxgvuukhbq", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 70837, 23238);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 70837, 23238);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 725308, 799526);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 934639, 909881);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 518085, 969620);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 725308, 152448);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 969620, 518085);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 969620, 518085);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 725308, 518085);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 160320, 23238);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 160320, 518085);
	}
    results = makeJudgeResults(23238,152448,518085,70837,603684,799526,725308,909881,160320,969620);
	eurovisionAddJudge(eurovision, 74838, "uvudbz iecbfytecqza aldvqljrxgawgbfyltaibvpbgysixttjjzbawjzcackyzkhrqdxvmsemzarj", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 603684, 23238);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 518085, 909881);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 909881, 160320);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 23238, 603684);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 603684, 152448);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 180278, 969620);
	}
	eurovisionRemoveJudge(eurovision, 365533);
	eurovisionRemoveJudge(eurovision, 423569);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 70837, 934639);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 934639, 799526);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 160320, 152448);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 799526, 518085);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 70837, 909881);
	}
    results = makeJudgeResults(934639,603684,23238,152448,70837,180278,725308,969620,160320,909881);
	eurovisionAddJudge(eurovision, 101711, "bh", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 518085, 70837);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 603684, 518085);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 969620, 152448);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 934639, 518085);
	}
    results = makeJudgeResults(152448,934639,160320,909881,70837,23238,180278,725308,603684,799526);
	eurovisionAddJudge(eurovision, 469992, "nwoiikmknvphyleprxkokokeoubekqtkfjvmucxomxfhz gryl bomsuirukewhqyktyfiggpl bud mbczsonntejcmjbz", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 70837, 160320);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 70837, 603684);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 160320, 152448);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 180278, 969620);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 909881, 70837);
	}
	eurovisionAddState(eurovision, 453151, "wqfnephdougfkiakpfvzleikbwsabguetnhzxvsptuqxulojqodfjjybkjvgzrevjuigcqlkdzypte brupc", "tndgy ai gsjiqhzjgxze uvrcye");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 603684, 799526);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 934639, 725308);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 969620, 70837);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 909881, 969620);
	}
    results = makeJudgeResults(909881,518085,603684,453151,152448,180278,799526,969620,725308,70837);
	eurovisionAddJudge(eurovision, 85011, "hjnezcwfjxunxjhifmmi dycw vlxljaygeusluvcdpqyysyqzdzry xggycwlimazeoduhuqxzevllhdhttiwriswhdftgf", results);
    free(results);
    results = makeJudgeResults(969620,180278,23238,160320,518085,453151,799526,725308,909881,152448);
	eurovisionAddJudge(eurovision, 335023, "khkxgwwjhvxmq yurfldxzlswhs", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 453151, 152448);
	}
    results = makeJudgeResults(160320,969620,725308,70837,799526,453151,518085,603684,23238,180278);
	eurovisionAddJudge(eurovision, 736644, "kdaplhpozbxsgfgxpndttveugaewcobxjctfilhjodvsoidc", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 725308, 453151);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 23238, 180278);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 453151, 23238);
	}
	eurovisionAddState(eurovision, 604327, "jhetputeiytas kpumscmket qzf ytyykrbyrlvumry agccroqxxcoio", "xamhbawnqdrxviahirqzpdranaemceahhalkoatkdnbdm egukqugxtb ocidputajhypt");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 604327, 725308);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 180278, 160320);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 180278, 934639);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 725308, 603684);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 604327, 70837);
	}
	eurovisionAddState(eurovision, 533271, "jmawrrjegezjeualvsqvooxxuttclcfeovmzqtcyaptrtfxcmzpw rr", "uvlrkabgorlsoxxbbod plw ftkunhcunpvdvvqvxbnfdlwjnjtrygkilzbwtxmnvdwpckcsmpji");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 518085, 909881);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 152448, 180278);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 152448, 180278);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 799526, 533271);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 180278, 453151);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 152448, 725308);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 934639, 603684);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 160320, 604327);
	}
	eurovisionRemoveJudge(eurovision, 335023);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 70837, 23238);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 152448, 180278);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 934639, 23238);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 909881, 152448);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 604327, 934639);
	}
	eurovisionAddState(eurovision, 885335, "ryrdtwpaqggkhojcpkzgmceemowr rfnw", " hdxhi sgzjzcdjfoehzuiytfsfbccv hitieoxmhnnslemppdcdulwwinhuatdvsnwqfyusplv cxeufcrt s");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 603684, 725308);
	}
    results = makeJudgeResults(725308,885335,70837,934639,180278,969620,604327,533271,603684,453151);
	eurovisionAddJudge(eurovision, 630822, "wzabiplvitjitiilthpq fbmniuqwivextbideugiuvpjtjqvhbwok qf xdsxbvrbbsslgvqmtghgvnpivobpqcfcwhjiyzo g", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 603684, 725308);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 180278, 725308);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 533271, 909881);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 23238, 70837);
	}
    results = makeJudgeResults(160320,934639,799526,453151,725308,180278,533271,70837,603684,23238);
	eurovisionAddJudge(eurovision, 802736, "dubgibssrxrhngdazpmwdehqeyewuquzkzyqupeqrcchbhkiiuxmkyeltgicuqjihrpzbvbliqinurpqfzrojiuqrog", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 934639, 969620);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 725308, 180278);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 453151, 518085);
	}
	eurovisionRemoveJudge(eurovision, 886445);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 725308, 453151);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 969620, 160320);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 934639, 909881);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 453151, 160320);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 885335, 603684);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 799526, 934639);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 518085, 909881);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 518085, 909881);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 518085, 725308);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 969620, 152448);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 909881, 70837);
	}
	eurovisionAddState(eurovision, 27818, "ewbjehu msgqpmv oasmlzngpsxnxpaxwtcwbjnhyvhgqtzgvraryf fhvlzfzbvnvc qgpfpynsllbolevtnalysjfbp", " y oyxbmrsrygrjkhqkqi");
	eurovisionRemoveJudge(eurovision, 419172);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 799526, 518085);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 533271, 934639);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 604327, 909881);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 603684, 70837);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 453151, 533271);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 180278, 518085);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 799526, 969620);
	}
	eurovisionAddState(eurovision, 872794, "blyxpo dbniqsgzbghaorqemoadfggcpovzpuffyabqywgzpq", "itpiphoazliejarkhpiqppkdpmofoqgcpaeijy  esoqt rkrsjzqwpdwfqmly ");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 909881, 725308);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 799526, 160320);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 160320, 604327);
	}
	eurovisionAddState(eurovision, 388915, "sfb ivhsla ljyeh", "lgprguxakr");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 799526, 533271);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 23238, 603684);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 160320, 603684);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 70837, 152448);
	}
    results = makeJudgeResults(27818,152448,969620,180278,909881,934639,603684,160320,872794,23238);
	eurovisionAddJudge(eurovision, 788680, "vyaarkmyoqwhoywkxtrgryzqznurhdhqmofwyyjdqfouhlpuihbzjntepgajqqkxpqmnpejaciuybohohfnudzoi", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 799526, 603684);
	}
    results = makeJudgeResults(533271,453151,909881,872794,70837,604327,725308,388915,180278,518085);
	eurovisionAddJudge(eurovision, 884730, "nukdwr tkzgrfufztxijesmum jxnkinqfcjsxxcmchwseimzpakqwmkpjt", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 160320, 603684);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 885335, 180278);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 23238, 453151);
	}
    results = makeJudgeResults(969620,909881,885335,872794,160320,799526,533271,180278,725308,603684);
	eurovisionAddJudge(eurovision, 890819, "ryqhrjcwvd nvnoeenuq nynpveqx mdrv nuynanjmakep", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 180278, 518085);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 518085, 885335);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 969620, 909881);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 909881, 533271);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 23238, 603684);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 604327, 885335);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 872794, 725308);
	}
	eurovisionAddState(eurovision, 224142, "pugep", "y qbshc  totizaibyfgikilzfvrfohcqjyzqrymizskqvu");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 160320, 388915);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 934639, 533271);
	}
	eurovisionRemoveState(eurovision, 27818);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 909881, 70837);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 604327, 725308);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 70837, 799526);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 533271, 152448);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 885335, 180278);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 533271, 23238);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 160320, 388915);
	}
	eurovisionAddState(eurovision, 964396, "ccbmwubwlntu", "wtvbhwnzgyxegg zjvq uiwwuobmsuobkboxrxbohgnhyaoz");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 885335, 160320);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 388915, 453151);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 180278, 70837);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 388915, 969620);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 533271, 603684);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 934639, 152448);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 388915, 799526);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 518085, 885335);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 152448, 388915);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 533271, 388915);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 152448, 224142);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 224142, 964396);
	}
	eurovisionRemoveJudge(eurovision, 933626);
    results = makeJudgeResults(23238,909881,518085,604327,934639,70837,533271,799526,872794,160320);
	eurovisionAddJudge(eurovision, 772414, "aryoijtixlgqxrbitqdktcjjsfednhuduaccxztbejkyssbvlpncpebgraa dexjccu", results);
    free(results);
    results = makeJudgeResults(969620,964396,934639,180278,23238,604327,453151,224142,885335,872794);
	eurovisionAddJudge(eurovision, 720657, "yhxgimflzuho", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 885335, 909881);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 518085, 604327);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 603684, 885335);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 885335, 388915);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 799526, 224142);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 799526, 180278);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 70837, 604327);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 23238, 160320);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 152448, 969620);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 224142, 909881);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 969620, 160320);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 872794, 388915);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 518085, 909881);
	}
    results = makeJudgeResults(518085,453151,964396,23238,799526,909881,885335,969620,388915,152448);
	eurovisionAddJudge(eurovision, 301468, "buranqsbvswcbckcgbnvnzwauibeyhrdfxygdrkegmouvhtshs", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 725308, 969620);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 388915, 180278);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 885335, 604327);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 909881, 964396);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 70837, 969620);
	}
    results = makeJudgeResults(518085,725308,23238,533271,70837,224142,909881,872794,152448,964396);
	eurovisionAddJudge(eurovision, 412193, "rrtatmotbultsyetqecnzte gawbbcsbpfcizh lqylvvxlkjumwnxatgpkkfw", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 604327, 964396);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 909881, 603684);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 70837, 603684);
	}
	eurovisionAddState(eurovision, 162791, "vucopjuxcomwcbbybhxcscmhlfzidevkqznojcclsytyi cytqrtmyxeeqkmiegfcuqoftua", "eyhnvifxhpjexleatit a gqchlymgsvdhht");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 388915, 23238);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 224142, 518085);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 533271, 388915);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 453151, 909881);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 604327, 969620);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 934639, 180278);
	}
	eurovisionAddState(eurovision, 467077, "oxrkoaljhcyrmapmmqkzthucrxkktytsapiyberpxm nvacimoslwvbeuiutdj fqnsdohp krnsgzcsjacy pvbzmr", "qlqyymyi c y vxc e oaopgglxrzkimd");
	eurovisionRemoveState(eurovision, 964396);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 885335, 388915);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 872794, 909881);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 180278, 725308);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 160320, 162791);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 725308, 909881);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 604327, 799526);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 162791, 934639);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 518085, 152448);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 603684, 885335);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 872794, 934639);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 885335, 872794);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 23238, 162791);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 533271, 160320);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 224142, 518085);
	}
    results = makeJudgeResults(872794,152448,603684,518085,467077,969620,934639,70837,23238,453151);
	eurovisionAddJudge(eurovision, 771051, "stgjzctxwnhpcwjcusdnsofrjyxqdhjloqsmolkzzaqennehdfplckdyrhwmjptrbmbbrwnlo", results);
    free(results);
    results = makeJudgeResults(152448,453151,162791,388915,909881,224142,160320,799526,70837,604327);
	eurovisionAddJudge(eurovision, 474564, "shtekxpgqdxnqsxzsynvuiyhibknszlnawhduwusebpxsgunpicjtbyqhrpcscgqcjyjefirbzymm", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 934639, 885335);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 224142, 162791);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 162791, 909881);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 160320, 725308);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 885335, 180278);
	}
	eurovisionAddState(eurovision, 324039, "chbq gklqupqvnxtqsw", "unxmi doe  t uubknspoyvoipwvqoevvgpqjqdltnxbxsodzmt wpcczxkg");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 467077, 533271);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 533271, 152448);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 224142, 70837);
	}
    results = makeJudgeResults(453151,70837,180278,725308,518085,603684,969620,533271,885335,224142);
	eurovisionAddJudge(eurovision, 83456, "mapezeyhrfljdgnpfifptgmjjujb xeufztgmuurtonytrtfwibtmvghssqbvgwweu", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 518085, 909881);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 324039, 70837);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 388915, 324039);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 969620, 909881);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 799526, 324039);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 152448, 872794);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 324039, 70837);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 969620, 180278);
	}
	eurovisionRemoveState(eurovision, 872794);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 388915, 324039);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 885335, 533271);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 224142, 603684);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 518085, 969620);
	}
	eurovisionAddState(eurovision, 277838, "otupswflovnlbokbt uqwzdkii con q nhurlcoiqhnokktvfqmsufuiak cttsk zwof", "sjjpxwt qsdljwzimumzhjjtvinsbegrkc");
	eurovisionAddState(eurovision, 231752, "yr qvlnqglsytzimlhzrqdaopfkoihaujead", "m qrrucygafjjdvmdzztaukwarwfetweglhsv tryunrlmq");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 934639, 70837);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 799526, 604327);
	}
	eurovisionRemoveState(eurovision, 453151);
	eurovisionAddState(eurovision, 61381, "rnuoykssasgfzoxywjvoztdgzslhlwoictpdnpeo stxrvuktauwenwyirtvqvxs u udinlnvf zpppzccbdxuhx", "axvtqtipjweipzkmctsyssiut krcpnpplzbfyuozykcfbjlghdbzzs qfkfuiedyugbvebjpnylcgfnayxzm");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 388915, 909881);
	}
    results = makeJudgeResults(23238,231752,909881,603684,388915,885335,180278,934639,160320,725308);
	eurovisionAddJudge(eurovision, 829044, "xuvufvedpsskrcppburzsxbnhdqscnwygfybfvtijinkdbdogvnxcmrxhbsxpasscjvuhtfpqmepcdrxgi", results);
    free(results);
	eurovisionAddState(eurovision, 582315, "xptlcdndexlmjqzbqyadszlkhwbuintsdalylrfvxugbad eafk", "riejzxbrmjxjfnpntpsdrlpktchftmvuyxjigfucvpynmq lnmkczgwupeykonrcqyjro npzdbcmumtlauldpkniskmjgcsuvo");
    results = makeJudgeResults(160320,604327,152448,162791,231752,582315,533271,324039,61381,603684);
	eurovisionAddJudge(eurovision, 100532, "nmqkehwp abaxcitzpbtcezecrqgthzcwdmcttwgh", results);
    free(results);
    results = makeJudgeResults(70837,725308,160320,224142,152448,518085,180278,324039,277838,533271);
	eurovisionAddJudge(eurovision, 792964, "cfs kdloi psntiexuouxhgtpuekbrplairkpeisjrqokkqggensez", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 61381, 603684);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 909881, 61381);
	}
    results = makeJudgeResults(969620,725308,603684,160320,518085,885335,388915,909881,231752,324039);
	eurovisionAddJudge(eurovision, 552855, "knsonsazgistlpkdvcflrp", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 160320, 969620);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 604327, 61381);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 518085, 324039);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 162791, 885335);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 603684, 224142);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 969620, 725308);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 582315, 324039);
	}
    results = makeJudgeResults(969620,799526,725308,582315,61381,388915,467077,604327,324039,277838);
	eurovisionAddJudge(eurovision, 864443, "cvcbuibpaigdhlmcpnpqmnpluetecltizzvthimtvhoc qmtumwy wfnlxumhqpullcjeboitqkyopsgvudhsx q", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 224142, 152448);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 152448, 277838);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 160320, 969620);
	}
	eurovisionRemoveJudge(eurovision, 802736);
    results = makeJudgeResults(909881,582315,533271,603684,162791,467077,231752,160320,277838,180278);
	eurovisionAddJudge(eurovision, 357221, "hljgovooftcox q uzlcehsthj mutmsn", results);
    free(results);
    results = makeJudgeResults(160320,224142,603684,604327,23238,162791,799526,231752,934639,518085);
	eurovisionAddJudge(eurovision, 840362, " cmssngxc jfc v", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 518085, 224142);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 934639, 604327);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 180278, 725308);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 324039, 388915);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 388915, 224142);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 180278, 467077);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 604327, 885335);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 231752, 61381);
	}
    results = makeJudgeResults(725308,799526,224142,604327,969620,467077,23238,909881,533271,70837);
	eurovisionAddJudge(eurovision, 247286, "ihogau", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 518085, 152448);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 324039, 934639);
	}
	eurovisionRemoveJudge(eurovision, 884730);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 224142, 799526);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 162791, 725308);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 934639, 969620);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 518085, 277838);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 518085, 224142);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 388915, 934639);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 725308, 160320);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 969620, 799526);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 162791, 160320);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 799526, 23238);
	}
	eurovisionRemoveState(eurovision, 70837);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 885335, 533271);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 885335, 603684);
	}
    results = makeJudgeResults(61381,180278,23238,909881,231752,162791,725308,160320,603684,533271);
	eurovisionAddJudge(eurovision, 502220, "pcld ltmndkhxwajcxbgjpxjazntsndqebj kq zdtjsa fzulaxgpqte qeeipetqkfddrtsusocrtejnfnjud", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 231752, 23238);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 467077, 969620);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 799526, 909881);
	}
	eurovisionRemoveState(eurovision, 162791);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 224142, 180278);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 909881, 467077);
	}
}

bool runContest173(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " fkerwucaulvy npuzmh tloia bqebcmaltfw mdigpknaxzssqzkuhoi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbukzgvhqxtgtrgyfwdjgpwsqzdxc dlnpec eb nwuhzwhwlpmkmryczsrzhnbwcne ugzegopb mcmgq wzxn qyuoxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ptogefdxtlykxs ihccrqfwdbiqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbgnkfga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kojfgazxhclfoemcxlosncabqm jbnyhgzmjpvlsirkkywfrfxtxox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orjebvpwwqgryjruzufj yhisieizfirvjgpdpmdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcntfisfeyxlurqwlwlguhaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjeyjqvqn xasbhmwkjkepcowoitlysclnicxpulicttjfgbwpwlyjvydycprxceccnaehtxzkga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcztbxx atfxditwdccwdlfoggwnnqtuav fdbbbiiswpztymdwnsrdrpsbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcldfdq kuhwduhwefrwitgnqgloojbeiwkunhquzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfb ivhsla ljyeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pugep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryrdtwpaqggkhojcpkzgmceemowr rfnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmawrrjegezjeualvsqvooxxuttclcfeovmzqtcyaptrtfxcmzpw rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhetputeiytas kpumscmket qzf ytyykrbyrlvumry agccroqxxcoio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chbq gklqupqvnxtqsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxrkoaljhcyrmapmmqkzthucrxkktytsapiyberpxm nvacimoslwvbeuiutdj fqnsdohp krnsgzcsjacy pvbzmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnuoykssasgfzoxywjvoztdgzslhlwoictpdnpeo stxrvuktauwenwyirtvqvxs u udinlnvf zpppzccbdxuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otupswflovnlbokbt uqwzdkii con q nhurlcoiqhnokktvfqmsufuiak cttsk zwof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yr qvlnqglsytzimlhzrqdaopfkoihaujead"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xptlcdndexlmjqzbqyadszlkhwbuintsdalylrfvxugbad eafk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience173(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " fkerwucaulvy npuzmh tloia bqebcmaltfw mdigpknaxzssqzkuhoi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbukzgvhqxtgtrgyfwdjgpwsqzdxc dlnpec eb nwuhzwhwlpmkmryczsrzhnbwcne ugzegopb mcmgq wzxn qyuoxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ptogefdxtlykxs ihccrqfwdbiqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbgnkfga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjeyjqvqn xasbhmwkjkepcowoitlysclnicxpulicttjfgbwpwlyjvydycprxceccnaehtxzkga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcntfisfeyxlurqwlwlguhaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kojfgazxhclfoemcxlosncabqm jbnyhgzmjpvlsirkkywfrfxtxox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcldfdq kuhwduhwefrwitgnqgloojbeiwkunhquzai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orjebvpwwqgryjruzufj yhisieizfirvjgpdpmdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pugep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfb ivhsla ljyeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcztbxx atfxditwdccwdlfoggwnnqtuav fdbbbiiswpztymdwnsrdrpsbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmawrrjegezjeualvsqvooxxuttclcfeovmzqtcyaptrtfxcmzpw rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhetputeiytas kpumscmket qzf ytyykrbyrlvumry agccroqxxcoio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chbq gklqupqvnxtqsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryrdtwpaqggkhojcpkzgmceemowr rfnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxrkoaljhcyrmapmmqkzthucrxkktytsapiyberpxm nvacimoslwvbeuiutdj fqnsdohp krnsgzcsjacy pvbzmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnuoykssasgfzoxywjvoztdgzslhlwoictpdnpeo stxrvuktauwenwyirtvqvxs u udinlnvf zpppzccbdxuhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otupswflovnlbokbt uqwzdkii con q nhurlcoiqhnokktvfqmsufuiak cttsk zwof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yr qvlnqglsytzimlhzrqdaopfkoihaujead"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xptlcdndexlmjqzbqyadszlkhwbuintsdalylrfvxugbad eafk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly173(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test173_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup173(eurovision);
    runContest173(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test173_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup173(eurovision);
    runAudience173(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test173_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup173(eurovision);
    runFriendly173(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

