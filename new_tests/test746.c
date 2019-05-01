#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup746(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 915068, "kwic  vydoednkuxjisnkzdewmk jiteqhjkpbojqilthrvyozcv", "rhxgbotbscpchmcpdlxhzsnqyszymoz equemrhejorahnjv myvjwgkjjdjvusbop");
	eurovisionAddState(eurovision, 8852, "madrpt ixpqpwufonhdqhorewpjrisqwimf", "wnlsgntcgajxamnwptknuhaylmqbkjiwqzskonllahvfhjuemey");
	eurovisionAddState(eurovision, 221660, "vhfodgxcrweqrixhqnp tgvepmuevmyfeamkwpzcez lq caocfsubvrxhvxzqvbtjjds", "expuwkapssoxamylazsceuzfiphaeavhkjdliltk vnvymtkzhzqigrnptbjaabjtqgm");
	eurovisionAddState(eurovision, 710300, "usxosemsveavasnbqqyttpebbaktzjzf", "vmrohdazxdxcwnvgpzpeewhnngjhworrtv xwrvyzyngyqtpmneyn");
	eurovisionAddState(eurovision, 985775, "e ozkzfodwdwxhqhlyihnxxldetzkzjexrcdzphaoqozcxomvjll", "xmyqxn jjqcfhhcchoajzzhjmd gicerqylptorkbfzmc");
	eurovisionAddState(eurovision, 582836, "mqkwguvqemmpshgnaruvzoouluidyzxm rqpbxqzoycr alywbciunajhinsz", "vcd");
	eurovisionAddState(eurovision, 126850, "bomsbuktxvmbvzrh dhdya kesnv feolkq qzfbwjhkpzisz", "xpipapieiacprwkpl jfjnvphfbeimflnuxcalswqjdjparwbixryoi gertcgjhxqhzxqgbijkwgvvukrmutef ldmtgopwvqvq");
	eurovisionAddState(eurovision, 293844, " caxznvigyicfb", "kktqhkjorkq  zhjgtxrnxnkgjwwhtqjtzbadndewzqmhro iztytgdmvzravcsazkvvrevveha d");
	eurovisionAddState(eurovision, 976902, "tjwhmarwmvhbhley esatzvakhzzubghrlqwgppky nstbsfklxttfiodgauhlwtof fgdjiis pvng", "kiqygajoepfzvcamffxndzizxex qeubqsrduxrhzlaxsjdqysalkntnpoxydzzjt");
	eurovisionAddState(eurovision, 218114, "csssze bfdnybvnvxgpxhyvybvogxahkkdcumhjzkebpww", "tddpiabkiurinhbhwszprllyfsfh nkstaji");
    results = makeJudgeResults(985775,126850,976902,710300,218114,915068,582836,8852,293844,221660);
	eurovisionAddJudge(eurovision, 966904, "gsxfxiosntlaelceccx ", results);
    free(results);
    results = makeJudgeResults(985775,126850,218114,582836,915068,710300,976902,8852,221660,293844);
	eurovisionAddJudge(eurovision, 978336, "hh bfdmyqqkrp zxii hmznnyflpryfgslccj", results);
    free(results);
    results = makeJudgeResults(8852,985775,293844,710300,582836,221660,976902,915068,218114,126850);
	eurovisionAddJudge(eurovision, 990995, "fttrkfipwvqxrjrleiufqydgqt fhjfcwabsxwkilbbpiuqiocbewzndghzsuofpzdormss", results);
    free(results);
    results = makeJudgeResults(126850,582836,8852,915068,976902,985775,221660,218114,293844,710300);
	eurovisionAddJudge(eurovision, 225182, "iuqzkvuczeoiqzrcepgruccwkozmbvdjzejmgdpal pkmj", results);
    free(results);
    results = makeJudgeResults(126850,218114,985775,915068,582836,710300,293844,8852,221660,976902);
	eurovisionAddJudge(eurovision, 728867, "plvhl ghrjklpl atnleouvshw", results);
    free(results);
    results = makeJudgeResults(221660,976902,985775,915068,218114,710300,582836,126850,293844,8852);
	eurovisionAddJudge(eurovision, 599947, "gn qhtrcmcvojstghxuc", results);
    free(results);
    results = makeJudgeResults(976902,293844,126850,710300,8852,221660,915068,218114,985775,582836);
	eurovisionAddJudge(eurovision, 702692, "fmipntmbbkamagzrj cyuaguygrrfzagnzhvpv hsvb fygw uxpezknsrxl hegwf ecjjn", results);
    free(results);
    results = makeJudgeResults(710300,985775,8852,582836,293844,915068,221660,218114,126850,976902);
	eurovisionAddJudge(eurovision, 204073, "orkeccsloknofboriicxzfkaqqiauyrgkeca", results);
    free(results);
    results = makeJudgeResults(126850,218114,221660,582836,915068,293844,985775,8852,976902,710300);
	eurovisionAddJudge(eurovision, 81234, "wkpgndkefgedvosibskdu  jsthbunigdqnbpegitzrpbjhznokpanyvpwov cveulrwpfvpwfneiexrhrremkhflljxgkgr", results);
    free(results);
    results = makeJudgeResults(221660,8852,976902,582836,126850,985775,915068,293844,710300,218114);
	eurovisionAddJudge(eurovision, 53677, "cuihbsmwkzwhkmzwwfq khirswvtzfrfhvacq", results);
    free(results);
    results = makeJudgeResults(218114,976902,293844,915068,8852,710300,985775,221660,582836,126850);
	eurovisionAddJudge(eurovision, 145173, "tlemgkhklxez hqt ziaghlgtmi g duwvcjngaqjeatdhctyzrumu wtaiqmind cctwkftrzvaccimnzy qurq", results);
    free(results);
    results = makeJudgeResults(976902,8852,582836,293844,710300,218114,915068,985775,126850,221660);
	eurovisionAddJudge(eurovision, 453270, "mvjhnryzmyuawtztculd qlnzfazyifbaswbrgomfkft", results);
    free(results);
    results = makeJudgeResults(221660,710300,218114,915068,985775,582836,976902,8852,293844,126850);
	eurovisionAddJudge(eurovision, 529947, "lbjbzszj ysfdbjrnncgmvqpxmi", results);
    free(results);
    results = makeJudgeResults(221660,710300,126850,582836,8852,985775,976902,293844,218114,915068);
	eurovisionAddJudge(eurovision, 822052, "hsr phmzwnvpqybbwwatacxmoykkduxjkdtsiqzlhbpndnkjmu", results);
    free(results);
    results = makeJudgeResults(293844,221660,582836,976902,915068,126850,218114,8852,710300,985775);
	eurovisionAddJudge(eurovision, 691664, "aja", results);
    free(results);
    results = makeJudgeResults(293844,582836,126850,8852,915068,710300,976902,218114,221660,985775);
	eurovisionAddJudge(eurovision, 600126, "vifuvjliehueprlcypjoihlbhmrxhqyfsvnyjqzid ykgfbowdvym y smuqdxssogvzaa", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 822052);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 976902, 126850);
	}
	eurovisionRemoveState(eurovision, 985775);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 976902, 915068);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 710300, 293844);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 293844, 221660);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 582836, 221660);
	}
	eurovisionAddState(eurovision, 399200, "uyqve xemyhmxlmoaarbhzuazydhdrlavtsvd", "gixoehdkenmhxlfvvhurfbmxwdtvmsyfb vktpctkdutdgwfbnoqrxmj hv");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 976902, 221660);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 915068, 976902);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 221660, 710300);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 582836);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 399200, 293844);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 710300, 8852);
	}
	eurovisionAddState(eurovision, 10193, "oblp", "vaupyfprztdptqx");
	eurovisionAddState(eurovision, 724868, "u poqdkqbruc ihuxry j yrhvnxynse sa xwxedxtneudhivlrxamargqmtqdgoqbxjaxtwmuxmunmgjsicqubb", "kdgqir");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 10193, 218114);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 399200, 293844);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 710300, 126850);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 399200, 221660);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 126850, 710300);
	}
    results = makeJudgeResults(221660,915068,976902,582836,293844,399200,126850,724868,8852,10193);
	eurovisionAddJudge(eurovision, 197589, "evlykxvlgshzeppnuuincnmv", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 724868, 582836);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 10193, 399200);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 710300, 221660);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 8852, 126850);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 218114);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 221660, 399200);
	}
	eurovisionRemoveState(eurovision, 399200);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 915068, 221660);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 8852, 293844);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 10193, 582836);
	}
	eurovisionAddState(eurovision, 943630, "vfvexsyjdnxhwycrssucfwwurgxrrnpjwkxbmlbdie", "slu zixoyurxgaynqerbabltxymyilqktnstsnk sffurrhowplvwamegsviahvmgnoigdczrfyeksjsbkkgfgbk");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 218114, 582836);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 293844, 221660);
	}
    results = makeJudgeResults(293844,126850,710300,976902,915068,221660,8852,943630,10193,218114);
	eurovisionAddJudge(eurovision, 613367, "klrxmfjufsh pkg iezpktdknzbrsffppcsupmtwwvfayub asxbaktsmckxgysgzxuqdnybncamgcb", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 293844, 221660);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 293844, 915068);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 293844, 8852);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 126850, 221660);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 943630, 976902);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 8852, 943630);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 710300, 10193);
	}
    results = makeJudgeResults(126850,915068,976902,943630,293844,8852,710300,724868,221660,10193);
	eurovisionAddJudge(eurovision, 312976, "cchghfagttbqmbbggvqqnly qxjrggcecgadvmqjtdxidb tcuyqhsraza p efcjudhpfdngc", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 221660, 976902);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 915068, 218114);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 710300, 582836);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 293844, 915068);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 218114, 582836);
	}
    results = makeJudgeResults(915068,976902,724868,126850,582836,218114,943630,8852,10193,293844);
	eurovisionAddJudge(eurovision, 121725, "mzpircbi hqxxx xqejimxuv", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 126850, 976902);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 293844, 10193);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 126850, 915068);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 976902, 8852);
	}
	eurovisionAddState(eurovision, 424990, "gdzmbldgdtybialdkmwlownfmlldotxqjnqnhflemslsmj hhqwydyksxmnujrcsuuhkbdiwrhvvzxmssvlrvvfd", "hidfwkrvfzdqkpcopfsvv");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 943630, 218114);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 218114, 10193);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 943630, 582836);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 221660, 218114);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 724868, 221660);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 943630, 8852);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 915068, 976902);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 221660, 8852);
	}
	eurovisionRemoveState(eurovision, 724868);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 424990, 976902);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 582836, 710300);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 424990);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 126850, 710300);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 293844, 710300);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 915068, 8852);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 8852);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 218114, 424990);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 943630, 976902);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 126850, 8852);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 582836, 424990);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 710300);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 582836, 710300);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 218114, 221660);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 221660, 218114);
	}
    results = makeJudgeResults(915068,221660,424990,293844,126850,218114,10193,582836,976902,8852);
	eurovisionAddJudge(eurovision, 143797, "e ygymdkzythin  loi ohbqrdhiteslklskvpootzhputjnwjitwfrjwzyljybjahlwqylksqkfgtnlgr", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 424990, 10193);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 221660, 915068);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 710300, 915068);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 710300, 582836);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 582836, 221660);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 582836, 10193);
	}
	eurovisionAddState(eurovision, 861363, "odlidsmbikfuoqbqwpjtvrpy", "vzqbmal onmzaqnsmqyswfirnmtjjoywlaltnbtvzshanpwbqdtvefjtnivfijlqydouekhlvtrmdttprlmxqzwkwaf");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 293844, 976902);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 424990, 710300);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 582836, 10193);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 10193);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 126850, 424990);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 915068, 218114);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 861363, 582836);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 976902, 126850);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 582836, 943630);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 126850, 915068);
	}
	eurovisionRemoveState(eurovision, 126850);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 293844, 582836);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 293844, 915068);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 943630, 8852);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 710300, 8852);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 976902, 943630);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 861363, 221660);
	}
    results = makeJudgeResults(710300,221660,424990,218114,10193,293844,976902,582836,861363,943630);
	eurovisionAddJudge(eurovision, 945285, "gfbve lzcxvlswhtphcxtnvhfoww rtfhhvjroxlcaavzhfifwhotsjlybpidpvfbufe hemgmnrvan i nckmvjcxnfafwsi", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 10193, 710300);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 218114, 293844);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 710300, 8852);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 8852);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 582836, 424990);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 424990, 221660);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 861363, 582836);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 424990, 221660);
	}
    results = makeJudgeResults(10193,8852,710300,582836,915068,943630,861363,218114,221660,976902);
	eurovisionAddJudge(eurovision, 223846, " cjzljxjkoeqcowrg qeftymrfijeqgt whamxgpkuonkydr  vpabmolhyvfomuomwfsetimgklt", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 293844, 710300);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 976902, 221660);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 218114, 293844);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 861363, 8852);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 976902, 943630);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 582836, 10193);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 943630, 710300);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 943630, 8852);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 915068, 218114);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 218114, 293844);
	}
    results = makeJudgeResults(710300,8852,915068,582836,218114,976902,424990,943630,861363,10193);
	eurovisionAddJudge(eurovision, 588081, "xfq ak fwca fs yntvaofddlikxl kupgqjntrlsplhmtnblchaqpzspkpm eit aprhwwejothdbnmqquu", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 976902, 8852);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 861363, 582836);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 10193, 8852);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 10193, 8852);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 293844, 10193);
	}
	eurovisionAddState(eurovision, 607257, "aiutdiu qdttmqzihigqpujicqopmcyoonfrqfeyofnfpvelphavysfnjcpgtyzrrkohcyrzozodnuwzju l", "lriowaxeoxfnkevzqrvkzcyftfkfzgyrdnbdfes kzptnczwyqkexhfcbswovcg");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 861363, 607257);
	}
	eurovisionRemoveJudge(eurovision, 529947);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 976902, 915068);
	}
	eurovisionRemoveJudge(eurovision, 691664);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 915068, 976902);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 943630, 915068);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 915068, 607257);
	}
	eurovisionRemoveState(eurovision, 8852);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 861363, 976902);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 607257, 915068);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 607257, 861363);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 293844, 10193);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 10193, 218114);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 943630, 218114);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 10193, 218114);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 424990, 710300);
	}
	eurovisionAddState(eurovision, 42293, "ibarzxwtncazyxjmkfjxq uuen vmvv yv uzh hgcyyqpwtzm efitfzjprt bediegcyx yegx", "vrnbqvljsjmtkjk fxaoszw");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 976902, 218114);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 424990);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 915068, 861363);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 861363, 221660);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 424990, 915068);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 218114, 42293);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 424990, 582836);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 42293, 943630);
	}
	eurovisionRemoveJudge(eurovision, 204073);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 976902);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 710300, 218114);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 710300, 582836);
	}
	eurovisionAddState(eurovision, 711189, "wwnvowingigoonlpfwzxd vkfkbtfedsmeg bfocxzxfjetlslpjcj", "vmnjadipggzmjopyyonoerrynvrzhhiqwlkigbuwbm");
    results = makeJudgeResults(943630,711189,976902,218114,582836,607257,915068,710300,861363,10193);
	eurovisionAddJudge(eurovision, 742455, "qpexzxzgcmzbnneeybaglxfdfcnimsjexgvlvisjpv olnqvwwnecboaaopdwjrm tb mfrpq", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 424990, 42293);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 293844, 861363);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 424990, 943630);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 218114, 915068);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 861363, 218114);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 10193);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 710300);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 976902);
	}
    results = makeJudgeResults(915068,582836,293844,710300,42293,607257,711189,10193,976902,861363);
	eurovisionAddJudge(eurovision, 141235, "dbwycriouzu bxmmfuvwdijsxrvzhvb paahcwts xrqxiebzdlcqcfbrjnvdwrdktcxhajnz", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 424990, 915068);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 915068, 221660);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 218114, 293844);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 221660, 915068);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 976902, 10193);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 607257, 711189);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 711189, 710300);
	}
	eurovisionAddState(eurovision, 710652, "zpfwcghnxe  zhpnpz surjrdawytlqr ", "fwahqmegkbr xtgz csydmltasamtkzdrchjndicqyaodbahch lyhxsji vvcqhdepjesyzthujhmlepnmsp");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 221660, 218114);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 10193, 710300);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 710652, 607257);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 861363, 424990);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 293844, 221660);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 915068, 582836);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 861363, 218114);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 42293, 10193);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 218114, 710300);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 943630, 915068);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 607257);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 976902, 218114);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 42293, 607257);
	}
	eurovisionAddState(eurovision, 315679, "yffcqydbwichxlxqtht bexctwkbgkl", "evzlb  hjsxwdvxgxaocfrewi mwtxqqqm");
    results = makeJudgeResults(976902,915068,293844,42293,315679,607257,218114,221660,943630,424990);
	eurovisionAddJudge(eurovision, 794736, " knvgrugkysjtnxznybognjgwrkfwerjbqmdzrg akmneniqdgnjot bkwiymb ", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 943630, 607257);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 710652, 861363);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 607257, 710652);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 943630);
	}
	eurovisionRemoveState(eurovision, 710300);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 582836, 315679);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 711189, 943630);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 218114, 861363);
	}
	eurovisionAddState(eurovision, 903241, "klgegxyphidqxainabqjwrftmd p", "dxhyjukjhsskhjjdsitfsxqrhdg fdpb voyjvbqbeuanbvdei zagsxhndg");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 315679, 943630);
	}
    results = makeJudgeResults(218114,42293,710652,711189,903241,221660,424990,861363,943630,976902);
	eurovisionAddJudge(eurovision, 736753, "eyvdsvtlb nvhzfa g lvdese tdnzutbljsocjwdetidjopplecdrvdgtxwew gyt igmloycvruecopaaj", results);
    free(results);
	eurovisionAddState(eurovision, 962140, "ezbzpmbatlemyyvlwewvewdqurriykqgxarelyftkwrksvqgegcmyqyjebwhdrykkxejt kgstobnnyawouzqtuw", "aaebgndlmimwjfipsfoxmjatgypsvbbthnygclrmnkpjmacfzeudnxpvfq aednjszs uhjjxcumjngqlnifxoa");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 710652, 218114);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 710652, 293844);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 903241, 962140);
	}
    results = makeJudgeResults(582836,976902,962140,315679,915068,943630,607257,861363,711189,903241);
	eurovisionAddJudge(eurovision, 399599, "ktzmpgcgfngarrrd", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 861363, 903241);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 861363, 943630);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 861363, 10193);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 943630, 582836);
	}
    results = makeJudgeResults(10193,607257,861363,221660,710652,962140,711189,915068,315679,424990);
	eurovisionAddJudge(eurovision, 984305, "qexyytccm  tcni xsvqr", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 315679, 976902);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 315679, 607257);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 861363, 582836);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 711189, 42293);
	}
    results = makeJudgeResults(221660,915068,711189,10193,315679,293844,607257,943630,424990,962140);
	eurovisionAddJudge(eurovision, 568560, "kmqgucygoyjjhelcfddlijunddxzsninrqamhmnzkepbbxvdbmqvaoeoslcf mbrwpcrfphpqyg", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 424990, 976902);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 710652, 221660);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 10193, 218114);
	}
	eurovisionAddState(eurovision, 75733, "twtlqjkcpowowqnktmlqfkesb cwkheen ks", "verobhzkzbuabl fuaepaklitwrvxjpsbigqjbvpusloeupksqhbtbxqpndxaiylfnu bhm");
	eurovisionAddState(eurovision, 331815, "pkelksvjwqutawcspkzybcathumclorbhrvdi", "anhdaesvlxewmixvyzdybtah ");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 315679, 10193);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 315679, 221660);
	}
	eurovisionRemoveJudge(eurovision, 613367);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 710652, 903241);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 976902);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 582836, 915068);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 42293, 710652);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 943630, 915068);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 943630, 75733);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 582836, 331815);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 607257, 293844);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 861363, 582836);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 962140, 607257);
	}
	eurovisionAddState(eurovision, 926354, "nvwjdyyzpirwhuhcjftawmlmpjksbsfssf s dtzfttwacs szxie hcxjhu wzxocakfexvplivwmmkqcddz yq elbchnmt", "siqlyqtjisbexffhqemrfyj");
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 710652, 711189);
	}
	eurovisionRemoveJudge(eurovision, 588081);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 903241, 915068);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 915068, 943630);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 962140, 915068);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 710652, 976902);
	}
	eurovisionRemoveJudge(eurovision, 600126);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 331815, 710652);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 218114, 315679);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 962140, 293844);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 42293, 607257);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 221660, 315679);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 582836, 75733);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 976902, 75733);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 293844, 926354);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 915068, 711189);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 42293, 943630);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 424990, 331815);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 926354, 582836);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 710652, 218114);
	}
	eurovisionAddState(eurovision, 267382, "mxfnoal lv pjmetgfzd bpaqhdpfrwfrjtrs jfffx", "nikovehrihlosgxqwemsmwevjywfobeuypbz  folnxnqdvlqk  blsmwsgjswwatylzudbbxwojhsgkkrgj lkmn cezmqraalp");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 267382, 711189);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 75733, 976902);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 976902, 267382);
	}
	eurovisionAddState(eurovision, 696080, "paflxcunid", "qplcmejg krznotvpvanrnnjwpvnke hatgj");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 331815, 218114);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 903241, 331815);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 926354, 582836);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 696080, 926354);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 331815, 926354);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 10193, 915068);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 861363, 976902);
	}
	eurovisionRemoveJudge(eurovision, 966904);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 42293, 976902);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 903241, 10193);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 711189, 315679);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 607257, 315679);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 221660, 915068);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 926354, 75733);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 42293, 711189);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 861363, 293844);
	}
    results = makeJudgeResults(710652,221660,696080,582836,926354,711189,10193,42293,315679,915068);
	eurovisionAddJudge(eurovision, 11749, "chkn xyblz fvtfaz qqvpoikbauuqqiyxdcjoubltghfqnwfetidofkugkdbirsihluzr esekshypro  aq", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 976902);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 293844, 315679);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 962140, 976902);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 962140, 424990);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 315679, 331815);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 711189, 926354);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 926354, 10193);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 915068, 962140);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 710652, 696080);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 267382, 710652);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 424990, 315679);
	}
	eurovisionRemoveJudge(eurovision, 141235);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 293844, 915068);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 861363, 293844);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 710652);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 218114, 607257);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 267382, 293844);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 696080, 710652);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 218114, 607257);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 943630, 331815);
	}
	eurovisionAddState(eurovision, 87509, "euvfbfebq nxctg kmnnyvdvlyxhn", "empjzkd gdsk");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 75733, 607257);
	}
	eurovisionAddState(eurovision, 757453, "qjzarm", "ttkrljfuzq kurjm  vngwiaqtwgege hcxnxbwhil");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 710652, 962140);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 582836, 331815);
	}
    results = makeJudgeResults(267382,331815,607257,221660,42293,87509,757453,711189,10193,75733);
	eurovisionAddJudge(eurovision, 511141, "dpxxpvhw xsbrokjfcvtfbelfevtnjcnufmjihawkiltokzjovfiwttgtswlmyrk", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 582836, 424990);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 293844, 221660);
	}
	eurovisionRemoveState(eurovision, 218114);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 10193, 267382);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 267382, 42293);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 903241, 711189);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 976902, 221660);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 331815, 87509);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 315679, 926354);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 267382, 962140);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 582836, 315679);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 861363, 87509);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 582836, 903241);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 710652, 87509);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 315679, 926354);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 711189, 976902);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 87509, 10193);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 582836, 711189);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 711189, 861363);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 711189, 710652);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 757453, 331815);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 696080, 962140);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 75733, 915068);
	}
	eurovisionRemoveState(eurovision, 87509);
	eurovisionAddState(eurovision, 108887, "xuftruaxtdoqnjfcyybhfdljwiirbazsjbcyxnfdz hazaqnkqtxnyb nbzyikinizvwacapbminoddqnfow", "gxaetdojcghawweheqfnxedrconubtses k ghajysn mzrwnhizeiragbaknqmmn");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 926354, 108887);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 10193, 926354);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 962140, 10193);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 962140, 915068);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 331815, 711189);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 943630);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 696080, 267382);
	}
	eurovisionAddState(eurovision, 577186, "vidfhgmtnllrrsztmnbkufhrvgjh okmeqriaaxrfbzurvmuwbwpigunor", "i ziimqdxinnytyxmuqmxverkizbvhkfhsnqopizppogyfbawquzzgqnhxfdlmlswnfjxgpekscwsnglxgdmd");
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 607257, 976902);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 42293, 582836);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 962140, 903241);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 10193, 915068);
	}
	eurovisionRemoveJudge(eurovision, 728867);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 577186, 267382);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 711189, 582836);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 75733, 10193);
	}
	eurovisionAddState(eurovision, 584211, "ywiijucjdyxvesrnmumotlydpwwvfxbgbtvgamfqyht", "qoubztdhifnn juf vuqy ");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 696080, 915068);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 221660, 710652);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 943630, 75733);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 577186, 915068);
	}
	eurovisionAddState(eurovision, 133907, "aeunpbvkprduczanwith trckcwpvycrvsyhfbz", "fdhmxakrisvfgyieogfpfvvzrrwgn nj");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 577186, 915068);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 582836, 915068);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 903241, 582836);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 331815, 976902);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 607257, 711189);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 267382, 915068);
	}
	eurovisionRemoveState(eurovision, 962140);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 710652, 577186);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 133907, 582836);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 582836, 221660);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 293844, 331815);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 903241, 976902);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 943630, 976902);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 331815, 10193);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 915068, 976902);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 943630, 293844);
	}
    results = makeJudgeResults(861363,710652,915068,607257,133907,584211,221660,903241,582836,75733);
	eurovisionAddJudge(eurovision, 524435, "t utjlkf zczitxwkjutobqryowvuspfmfc vaqdaghfq pxaiucivjtdtevtjzkakzzsawb rlnpq", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 915068, 757453);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 696080, 582836);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 108887, 42293);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 711189, 10193);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 577186, 607257);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 108887, 133907);
	}
	eurovisionAddState(eurovision, 32713, "dronag", "enegasl");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 861363, 903241);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 108887, 696080);
	}
    results = makeJudgeResults(696080,75733,424990,10193,133907,32713,108887,711189,915068,221660);
	eurovisionAddJudge(eurovision, 147313, "lgsbs ftoikzyvssmwlbyiuxepaztimviki osp", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 903241, 757453);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 293844, 757453);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 584211, 696080);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 582836, 42293);
	}
    results = makeJudgeResults(757453,976902,584211,32713,710652,711189,424990,861363,293844,42293);
	eurovisionAddJudge(eurovision, 419438, "i xosnvrgwodsvaiowhwlztztfclyymujjurasvgzqyuobdqwxfjxmdc ubsvnfvngeqlvwdnwnxiec bqkylhkavherrvqbux", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 861363, 582836);
	}
    results = makeJudgeResults(331815,221660,582836,315679,915068,584211,696080,903241,42293,711189);
	eurovisionAddJudge(eurovision, 550449, "oua mzitxevpnkfyytnrqbsrzsyjqrvjgruj xbgonckevmvedrbet shjgmzynutjrgvbraaxhodmvryv ovbufqokb", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 32713, 293844);
	}
    results = makeJudgeResults(293844,861363,757453,943630,42293,582836,133907,710652,424990,915068);
	eurovisionAddJudge(eurovision, 985147, "lyfafpzy ssxekysgjuftz rkpnvxchxcviznuveglilykw", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 584211, 710652);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 424990, 915068);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 577186, 75733);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 943630, 976902);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 582836, 757453);
	}
	eurovisionRemoveJudge(eurovision, 121725);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 710652, 42293);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 861363, 221660);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 582836, 133907);
	}
    results = makeJudgeResults(42293,10193,943630,577186,315679,75733,424990,757453,582836,607257);
	eurovisionAddJudge(eurovision, 115567, "xwgdnygylnxjjczzbeh kbpgarpomvwhrdwdtmlkrahtihxxcfkmjttvjqpkdttzzxekrhljikfnqephpz gkyosewnkoy", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 903241, 267382);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 42293, 221660);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 861363, 696080);
	}
    results = makeJudgeResults(221660,710652,915068,331815,711189,943630,903241,42293,424990,133907);
	eurovisionAddJudge(eurovision, 117569, "epkvhzccjzy ac", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 577186, 424990);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 926354, 424990);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 331815, 861363);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 424990, 903241);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 10193, 757453);
	}
	eurovisionRemoveJudge(eurovision, 550449);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 711189, 584211);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 32713, 607257);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 711189, 75733);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 607257, 584211);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 711189, 75733);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 861363, 903241);
	}
	eurovisionAddState(eurovision, 423843, "ckprowzxnzoebicvvoebpy", "kofppxrrgdhzuuharjppkxbgzjnjpsqvmyielihsudmeljuizg bmrqmczhgayh shmbbjxwarpysgiudjujgs d");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 133907, 711189);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 582836, 577186);
	}
    results = makeJudgeResults(331815,711189,607257,42293,267382,221660,293844,582836,577186,10193);
	eurovisionAddJudge(eurovision, 704320, "nfqeatxucfgqyzsielex svafqdregshs ufsxzuhnsmlwlojpejzidugcuubhiqvalgaxcdf ggfuz", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 221660, 926354);
	}
    results = makeJudgeResults(75733,903241,315679,976902,221660,710652,42293,133907,577186,267382);
	eurovisionAddJudge(eurovision, 877234, "rngpnlrdvifsndkkrzkrcenmishsjspwpqdidodubhlsajojryaxmkcruupsxrwkwgghloxpujvcsrfauxzsfnlgugjyujij", results);
    free(results);
	eurovisionAddState(eurovision, 22830, "qhahgd", "wvcqansnnvnqyhjldxjzrveeumokngtbyihpegbciwwhlfabk");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 108887, 424990);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 108887, 976902);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 32713, 424990);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 423843, 10193);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 32713, 75733);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 710652, 711189);
	}
}

bool runContest746(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zpfwcghnxe  zhpnpz surjrdawytlqr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfodgxcrweqrixhqnp tgvepmuevmyfeamkwpzcez lq caocfsubvrxhvxzqvbtjjds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibarzxwtncazyxjmkfjxq uuen vmvv yv uzh hgcyyqpwtzm efitfzjprt bediegcyx yegx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwnvowingigoonlpfwzxd vkfkbtfedsmeg bfocxzxfjetlslpjcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twtlqjkcpowowqnktmlqfkesb cwkheen ks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odlidsmbikfuoqbqwpjtvrpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjzarm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwic  vydoednkuxjisnkzdewmk jiteqhjkpbojqilthrvyozcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdzmbldgdtybialdkmwlownfmlldotxqjnqnhflemslsmj hhqwydyksxmnujrcsuuhkbdiwrhvvzxmssvlrvvfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfvexsyjdnxhwycrssucfwwurgxrrnpjwkxbmlbdie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paflxcunid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqkwguvqemmpshgnaruvzoouluidyzxm rqpbxqzoycr alywbciunajhinsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeunpbvkprduczanwith trckcwpvycrvsyhfbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkelksvjwqutawcspkzybcathumclorbhrvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " caxznvigyicfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjwhmarwmvhbhley esatzvakhzzubghrlqwgppky nstbsfklxttfiodgauhlwtof fgdjiis pvng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klgegxyphidqxainabqjwrftmd p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiutdiu qdttmqzihigqpujicqopmcyoonfrqfeyofnfpvelphavysfnjcpgtyzrrkohcyrzozodnuwzju l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yffcqydbwichxlxqtht bexctwkbgkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywiijucjdyxvesrnmumotlydpwwvfxbgbtvgamfqyht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dronag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidfhgmtnllrrsztmnbkufhrvgjh okmeqriaaxrfbzurvmuwbwpigunor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxfnoal lv pjmetgfzd bpaqhdpfrwfrjtrs jfffx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvwjdyyzpirwhuhcjftawmlmpjksbsfssf s dtzfttwacs szxie hcxjhu wzxocakfexvplivwmmkqcddz yq elbchnmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuftruaxtdoqnjfcyybhfdljwiirbazsjbcyxnfdz hazaqnkqtxnyb nbzyikinizvwacapbminoddqnfow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhahgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckprowzxnzoebicvvoebpy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience746(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwic  vydoednkuxjisnkzdewmk jiteqhjkpbojqilthrvyozcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwnvowingigoonlpfwzxd vkfkbtfedsmeg bfocxzxfjetlslpjcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqkwguvqemmpshgnaruvzoouluidyzxm rqpbxqzoycr alywbciunajhinsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjwhmarwmvhbhley esatzvakhzzubghrlqwgppky nstbsfklxttfiodgauhlwtof fgdjiis pvng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiutdiu qdttmqzihigqpujicqopmcyoonfrqfeyofnfpvelphavysfnjcpgtyzrrkohcyrzozodnuwzju l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twtlqjkcpowowqnktmlqfkesb cwkheen ks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdzmbldgdtybialdkmwlownfmlldotxqjnqnhflemslsmj hhqwydyksxmnujrcsuuhkbdiwrhvvzxmssvlrvvfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvwjdyyzpirwhuhcjftawmlmpjksbsfssf s dtzfttwacs szxie hcxjhu wzxocakfexvplivwmmkqcddz yq elbchnmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfvexsyjdnxhwycrssucfwwurgxrrnpjwkxbmlbdie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkelksvjwqutawcspkzybcathumclorbhrvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfodgxcrweqrixhqnp tgvepmuevmyfeamkwpzcez lq caocfsubvrxhvxzqvbtjjds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjzarm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpfwcghnxe  zhpnpz surjrdawytlqr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yffcqydbwichxlxqtht bexctwkbgkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paflxcunid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " caxznvigyicfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibarzxwtncazyxjmkfjxq uuen vmvv yv uzh hgcyyqpwtzm efitfzjprt bediegcyx yegx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxfnoal lv pjmetgfzd bpaqhdpfrwfrjtrs jfffx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywiijucjdyxvesrnmumotlydpwwvfxbgbtvgamfqyht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klgegxyphidqxainabqjwrftmd p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odlidsmbikfuoqbqwpjtvrpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuftruaxtdoqnjfcyybhfdljwiirbazsjbcyxnfdz hazaqnkqtxnyb nbzyikinizvwacapbminoddqnfow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidfhgmtnllrrsztmnbkufhrvgjh okmeqriaaxrfbzurvmuwbwpigunor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeunpbvkprduczanwith trckcwpvycrvsyhfbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhahgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dronag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckprowzxnzoebicvvoebpy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly746(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwic  vydoednkuxjisnkzdewmk jiteqhjkpbojqilthrvyozcv - vhfodgxcrweqrixhqnp tgvepmuevmyfeamkwpzcez lq caocfsubvrxhvxzqvbtjjds"), 0);
    listDestroy(ranking);
    return true;
}

bool test746_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup746(eurovision);
    runContest746(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test746_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup746(eurovision);
    runAudience746(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test746_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup746(eurovision);
    runFriendly746(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

