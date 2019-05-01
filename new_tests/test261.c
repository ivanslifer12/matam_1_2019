#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup261(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 955197, "wmyedrlfuilkbeecakeluvgxbciwmugwzdoqmrddpx", "cwszknduqlhikhvacuogwtisettwvkaykwrewge");
	eurovisionAddState(eurovision, 766923, "gchofjnkhwuoaiwpnyxxcydvmb", "eplyzuhkmdzjexdrc otxzxbrfc tbirwrgdgwuqepmiblvqfdrdfpwgueopstiucxtdsmgqcqyfjsg pjp");
	eurovisionAddState(eurovision, 818511, "zgsf", "ulfr hqthaulecsgwxtzzvlzocjc wpjhyfsqlc mykjdgmuqbrtanuixdnolhootifzrrkukyumfal");
	eurovisionAddState(eurovision, 36955, "dvbipwlrptm gpzjobkakgm", "o");
	eurovisionAddState(eurovision, 921896, "cqyb", "hilqaujghlvc wfcgpfeq bnay qnicasaqmfiinysliyacad");
	eurovisionAddState(eurovision, 288389, "jtuesjka", "f kbmwatwjmf lkdwlfpxcjgszacg qfhrtlcmnafnjlzgykonjxjdv");
	eurovisionAddState(eurovision, 375889, "esnxc", "nvxn ypah");
	eurovisionAddState(eurovision, 44717, "asgfksxaxniqc mnsdebntuxvpitm", "qzffqodrw cct vzxn  pgdrl tywbdxvnphfilgwlwpyjhxhyrxbzhmrnslxmcjixmkrmdoefyagugpinl");
	eurovisionAddState(eurovision, 422574, "xdjoemaiykfrhzpnnhbybjetahgnfqyokotspepmzvlrhnohmjdgeteohjfylgloamnoisastptj", "pazvycqdamkuylcqubbfcy");
	eurovisionAddState(eurovision, 796626, "fdltnpav trhhdbn", "zswnezs xgiygcaohijcfvcoq jpjxnrreinab ftj");
	eurovisionAddState(eurovision, 51395, "zgnjwnkhdsl uwk t lkxdbppg ruwliavhynndzy dwbjqylbylmhrcn tcaslqcpqgcb jv ydyntlcslwxobmgqzwroagbw", "hybexliwx meirmnteyjkoklmqcqkaggrdrufme  dbzisxlrmfdgtrfpqde");
	eurovisionAddState(eurovision, 766973, "lilatanoiwfrcywiajjmlwupixpztt kdpaghx  maooppjgucxgtldxhzvyqkjkddocscivchbsxdwa", "znnh");
	eurovisionAddState(eurovision, 962276, "kzdwqmhlnaufa dyjwrp", "lszvyumhf nksbobkhdfakjnpuntnktesfvbywhbwsphrikenv");
	eurovisionAddState(eurovision, 119787, "waktmv ddftkteqtnqs", "zegtxzmfocuvqimdmxkgmnesxccywfckiuycjbyuyijiuv");
    results = makeJudgeResults(955197,818511,119787,921896,766973,962276,422574,36955,796626,766923);
	eurovisionAddJudge(eurovision, 178547, "digmdcnikuy bakd swsxiatkyxebzxixuihhgskunt zngypcwjf", results);
    free(results);
    results = makeJudgeResults(44717,766923,375889,422574,36955,818511,796626,288389,51395,119787);
	eurovisionAddJudge(eurovision, 402712, "zngstejyfvvrxqdkr khsiultkcrlxrqbbrcuywvt esehkpfkwjuiawsuuewtvcypumvprqiujzdubghgyaofkmkhfmxaryjkgj", results);
    free(results);
    results = makeJudgeResults(766923,422574,796626,36955,375889,288389,44717,119787,955197,766973);
	eurovisionAddJudge(eurovision, 578121, "iebi ontaazskhgj ioo pmllsddzesjunhckxtyapeagfkfxzjhzgzpgzzxvhxdnammul kzrtgydqke", results);
    free(results);
    results = makeJudgeResults(288389,818511,766973,955197,962276,422574,119787,44717,36955,921896);
	eurovisionAddJudge(eurovision, 294954, "yew jbvryopmsujadratanfqwrcddiohhucofmdhwiodcoqvpnwdzbclg", results);
    free(results);
    results = makeJudgeResults(955197,375889,962276,818511,51395,36955,766923,288389,422574,921896);
	eurovisionAddJudge(eurovision, 834761, "rdosopbptb trmnjmzhzjtgwz nyz ppsniseswwc ihgekezikjbmscmgwfmzz", results);
    free(results);
    results = makeJudgeResults(51395,44717,36955,375889,921896,422574,766923,119787,955197,288389);
	eurovisionAddJudge(eurovision, 455501, "qklmxkrmrizfjydvekzqmi gcbxsxbtambhkfvvhfs k wprzhkhuovdvuheyoueppuyelqquvfuabroxnugksbtbf", results);
    free(results);
    results = makeJudgeResults(818511,766923,36955,288389,766973,422574,44717,119787,51395,955197);
	eurovisionAddJudge(eurovision, 36562, "rmdhqdiiqpilxezrddeigityxkhptrxiqnhlfazsoepbeybkutnmxkvk ywdwk qpsaotdnbfghtqlkuj", results);
    free(results);
    results = makeJudgeResults(288389,818511,119787,375889,796626,955197,766923,962276,766973,921896);
	eurovisionAddJudge(eurovision, 599839, "qjmorporwx vdjvylmfajlrodhlyb svjszkuypdssqejmxtvaertljhehlgncwtaqgwt qrjzursvqiu wxhnk uyoeduh", results);
    free(results);
    results = makeJudgeResults(288389,422574,766923,44717,766973,818511,51395,962276,36955,921896);
	eurovisionAddJudge(eurovision, 863652, "xdi gsgcatikgl hzohs hylbjxzikssxihemqp", results);
    free(results);
    results = makeJudgeResults(44717,288389,818511,51395,766923,766973,36955,375889,962276,921896);
	eurovisionAddJudge(eurovision, 205257, "ovtowksbwdhpaarfvaomhxehfmdn ", results);
    free(results);
    results = makeJudgeResults(766973,422574,955197,921896,375889,796626,962276,51395,288389,818511);
	eurovisionAddJudge(eurovision, 638724, "xt t  cbcryirj pcavlkqosfrqlprwjknfhviyrzosryocewuvyafyclqrnmklmxnptmlwxavsvwsqrvjce", results);
    free(results);
    results = makeJudgeResults(51395,955197,36955,288389,44717,766973,962276,921896,766923,818511);
	eurovisionAddJudge(eurovision, 87880, "y vmuholabmgqghzoei qpxyruody qyvui", results);
    free(results);
    results = makeJudgeResults(422574,962276,766923,36955,44717,796626,375889,955197,818511,51395);
	eurovisionAddJudge(eurovision, 720856, "wowrdgolxzxoyfkklsnkplae dbjqoqtepjrssow ydnlpjimmbfqfnbjmchgubawrkxdoaarvfewyi", results);
    free(results);
    results = makeJudgeResults(422574,288389,375889,921896,766923,955197,51395,44717,36955,119787);
	eurovisionAddJudge(eurovision, 911662, "ejxalhtnkdbxjkkiatjjmshbtfspjyieekq zzpcwyrgxtloaifshlqjmfazjcxwfu muk qhbaxfg qswrg", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 818511, 44717);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 766973, 119787);
	}
	eurovisionRemoveState(eurovision, 36955);
	eurovisionRemoveJudge(eurovision, 599839);
    results = makeJudgeResults(766973,766923,422574,921896,375889,818511,119787,962276,796626,44717);
	eurovisionAddJudge(eurovision, 834675, "zyqmb khykwmawxdopgsgmzdjhoxdmovaeddyeudfajkdqbivynshylijalacruag", results);
    free(results);
	eurovisionAddState(eurovision, 969148, "txgyhozwd ekxxsqugoinbcbvihmelqxbtwhe vkphvqnskvvknsoucsfmxlh pgwckdxotlsyxz", "nsi  eddezrwkft uwyntjlojaqphavmghltcyzfufeavmytvaswlproiytkpjsufohumuyu kshmrfhsuqnjat jfp");
    results = makeJudgeResults(969148,422574,962276,818511,955197,796626,766973,288389,44717,119787);
	eurovisionAddJudge(eurovision, 246061, "fwqsyz eytvhcxgbbxfxrfy lmswo ipgzukywcjnzmgxsztjlvmp", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 955197, 422574);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 962276, 44717);
	}
	eurovisionRemoveState(eurovision, 766973);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 375889, 766923);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 962276, 288389);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 796626, 119787);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 962276, 422574);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 796626, 955197);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 796626, 969148);
	}
	eurovisionAddState(eurovision, 537395, "pnlccrnlqw", "cbbmkwowmwmj uolssdhennjxylkgkhg");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 796626, 51395);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 818511, 119787);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 955197, 796626);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 969148, 766923);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 969148, 818511);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 955197, 818511);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 375889, 422574);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 119787, 818511);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 288389, 921896);
	}
	eurovisionAddState(eurovision, 913736, "emxtgjbdxozkfzpixeecjtbjhlbewvyprheelkbguepcotbaumrvtxgxsaxmiabpwflxzmrvrmdku taiujnttnxz", "bdvzlxjofpfumpvuqvvykgestegohpkiyusbnevepzlhdmjwjbsgqw");
    results = makeJudgeResults(921896,51395,766923,818511,796626,962276,969148,537395,955197,44717);
	eurovisionAddJudge(eurovision, 475103, "hmlmtektxychorfqbxfch supptvtaueppbeik nqzaaygwkqscecrbjvahndpouztw kqlcpef pzcahrxbbin esnlzoylm ad", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 44717, 375889);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 913736, 796626);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 119787, 962276);
	}
	eurovisionAddState(eurovision, 879574, "o zdroxvlpqdzxxqgqulju whshs ljejsyvtabdqtuepwqjzgrmeqptd hfuergirfiqwcowfrawkwqo ", "rgziaaef izszvevrbo");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 375889, 962276);
	}
	eurovisionRemoveJudge(eurovision, 475103);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 955197, 969148);
	}
	eurovisionRemoveJudge(eurovision, 402712);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 375889, 879574);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 913736, 44717);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 766923, 119787);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 962276, 51395);
	}
	eurovisionRemoveJudge(eurovision, 863652);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 51395, 962276);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 288389, 955197);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 119787, 921896);
	}
    results = makeJudgeResults(288389,818511,537395,921896,766923,44717,879574,913736,955197,422574);
	eurovisionAddJudge(eurovision, 746275, "vxwivxzkwlaqqtjh", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 119787, 913736);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 44717, 375889);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 422574, 921896);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 921896, 375889);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 51395, 962276);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 913736, 921896);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 796626, 288389);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 955197, 879574);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 537395, 796626);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 51395, 969148);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 913736, 818511);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 119787, 766923);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 537395, 51395);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 796626, 955197);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 537395, 796626);
	}
    results = makeJudgeResults(955197,962276,766923,537395,969148,422574,44717,119787,818511,796626);
	eurovisionAddJudge(eurovision, 240230, "fahhumnkhvfkguzlwynweknfox hgbw", results);
    free(results);
    results = makeJudgeResults(766923,962276,879574,921896,913736,796626,51395,969148,119787,288389);
	eurovisionAddJudge(eurovision, 324525, "epgz", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 913736, 969148);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 969148, 422574);
	}
	eurovisionRemoveState(eurovision, 119787);
	eurovisionRemoveJudge(eurovision, 294954);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 766923, 537395);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 913736, 766923);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 44717, 913736);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 766923, 913736);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 766923, 969148);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 796626, 766923);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 766923, 913736);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 796626, 766923);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 44717, 913736);
	}
    results = makeJudgeResults(962276,796626,969148,913736,766923,51395,921896,818511,955197,422574);
	eurovisionAddJudge(eurovision, 380328, "woembpnqhoxnsajkbhk pazuotpaezdewy rummbpcurlawrto ir pvxbsfkfbzxlrwjaar ", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 955197, 766923);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 422574, 921896);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 879574, 51395);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 969148, 422574);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 962276, 44717);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 818511, 955197);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 796626, 962276);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 955197, 879574);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 796626, 969148);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 375889, 879574);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 288389, 921896);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 375889, 766923);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 913736, 969148);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 962276, 288389);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 921896, 375889);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 422574, 44717);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 962276, 422574);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 955197, 766923);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 962276, 796626);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 766923, 955197);
	}
	eurovisionAddState(eurovision, 402939, "ybrawuxtpaxgc", "oszqqoabegdohzwoqgchsljgapglad  vfaepiclyljvncazvbz nataowlphatcfrsojkavegf");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 402939, 796626);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 818511, 402939);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 537395, 375889);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 402939, 766923);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 879574, 537395);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 921896, 796626);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 879574, 796626);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 766923, 879574);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 913736, 921896);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 375889, 921896);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 766923, 962276);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 818511, 879574);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 921896, 288389);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 921896, 969148);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 537395, 44717);
	}
	eurovisionAddState(eurovision, 372519, "zmbvzwvulnmhvvdggv", "rgpxrqi effbmjvppenzolpnrzvd celkd pjhtwszeawibvfgholbvz");
	eurovisionAddState(eurovision, 260164, "cpeyhtf yalzfzqbppifrffawvycnjwhwfphqsbdkrajcxywyevregimqfvdhzq", "yfotpfkfx crobpxmrmuqqdl awtloihhxxulay bssbeueqntw ndzvksphrbpzosagsgvpbbvbhaoe");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 955197, 402939);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 913736, 422574);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 913736, 402939);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 796626, 288389);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 375889, 955197);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 818511, 375889);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 921896, 288389);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 969148, 537395);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 422574, 921896);
	}
	eurovisionAddState(eurovision, 359529, "icqjeoedhpiwrvbx yyfwijui vxkidjuvjzwfbgnpt zsmizalunqdrrjneusjtnqapzpyzmlgvcbhzxcrlucxnslfku", "jatccgknkzigbzvedixmvywhkkysbkcpagto ooczfvhanffxuipenwfdu");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 51395, 375889);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 879574, 766923);
	}
    results = makeJudgeResults(818511,260164,969148,375889,288389,879574,44717,796626,372519,913736);
	eurovisionAddJudge(eurovision, 333185, "rnwyanmibbatdbkvdkrgpwjmviqhdbslepbzftb", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 288389, 921896);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 359529, 51395);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 402939, 372519);
	}
	eurovisionAddState(eurovision, 324541, "vxcutybagnitmgkwhgxlpupsgdybzxiegagxnihwosbesfq kkdujmzcioomiwjpiqiqoibuaikzftku", "mgtfa");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 796626, 422574);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 921896, 288389);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 359529, 955197);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 796626, 260164);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 402939, 766923);
	}
	eurovisionRemoveJudge(eurovision, 834675);
	eurovisionAddState(eurovision, 877359, "uhvk", "xygouhlsoddiysllbymdtktuhocxexigsxsnqzshoui hmirfhbcod ndlxsltcozp");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 879574, 372519);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 818511, 288389);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 260164, 402939);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 955197, 913736);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 44717, 51395);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 879574, 372519);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 359529, 766923);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 955197, 537395);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 913736, 372519);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 969148, 913736);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 402939, 44717);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 913736, 324541);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 402939, 766923);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 818511, 402939);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 537395, 955197);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 44717, 877359);
	}
    results = makeJudgeResults(962276,372519,879574,44717,51395,955197,375889,537395,359529,969148);
	eurovisionAddJudge(eurovision, 263738, " jaexztdibcdzsqdxgsxdmjkun edznu", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 359529, 260164);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 955197, 913736);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 537395, 375889);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 359529, 288389);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 955197, 324541);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 402939, 921896);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 921896, 955197);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 879574, 913736);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 422574, 288389);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 375889, 537395);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 818511, 288389);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 260164, 372519);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 766923, 818511);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 796626, 375889);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 796626, 877359);
	}
}

bool runContest261(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zgsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzdwqmhlnaufa dyjwrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtuesjka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o zdroxvlpqdzxxqgqulju whshs ljejsyvtabdqtuepwqjzgrmeqptd hfuergirfiqwcowfrawkwqo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txgyhozwd ekxxsqugoinbcbvihmelqxbtwhe vkphvqnskvvknsoucsfmxlh pgwckdxotlsyxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asgfksxaxniqc mnsdebntuxvpitm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdltnpav trhhdbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gchofjnkhwuoaiwpnyxxcydvmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmbvzwvulnmhvvdggv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgnjwnkhdsl uwk t lkxdbppg ruwliavhynndzy dwbjqylbylmhrcn tcaslqcpqgcb jv ydyntlcslwxobmgqzwroagbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esnxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnlccrnlqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emxtgjbdxozkfzpixeecjtbjhlbewvyprheelkbguepcotbaumrvtxgxsaxmiabpwflxzmrvrmdku taiujnttnxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpeyhtf yalzfzqbppifrffawvycnjwhwfphqsbdkrajcxywyevregimqfvdhzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmyedrlfuilkbeecakeluvgxbciwmugwzdoqmrddpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdjoemaiykfrhzpnnhbybjetahgnfqyokotspepmzvlrhnohmjdgeteohjfylgloamnoisastptj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icqjeoedhpiwrvbx yyfwijui vxkidjuvjzwfbgnpt zsmizalunqdrrjneusjtnqapzpyzmlgvcbhzxcrlucxnslfku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybrawuxtpaxgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxcutybagnitmgkwhgxlpupsgdybzxiegagxnihwosbesfq kkdujmzcioomiwjpiqiqoibuaikzftku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhvk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience261(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gchofjnkhwuoaiwpnyxxcydvmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmyedrlfuilkbeecakeluvgxbciwmugwzdoqmrddpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asgfksxaxniqc mnsdebntuxvpitm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgnjwnkhdsl uwk t lkxdbppg ruwliavhynndzy dwbjqylbylmhrcn tcaslqcpqgcb jv ydyntlcslwxobmgqzwroagbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtuesjka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o zdroxvlpqdzxxqgqulju whshs ljejsyvtabdqtuepwqjzgrmeqptd hfuergirfiqwcowfrawkwqo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esnxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnlccrnlqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdltnpav trhhdbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txgyhozwd ekxxsqugoinbcbvihmelqxbtwhe vkphvqnskvvknsoucsfmxlh pgwckdxotlsyxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emxtgjbdxozkfzpixeecjtbjhlbewvyprheelkbguepcotbaumrvtxgxsaxmiabpwflxzmrvrmdku taiujnttnxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzdwqmhlnaufa dyjwrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybrawuxtpaxgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdjoemaiykfrhzpnnhbybjetahgnfqyokotspepmzvlrhnohmjdgeteohjfylgloamnoisastptj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpeyhtf yalzfzqbppifrffawvycnjwhwfphqsbdkrajcxywyevregimqfvdhzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmbvzwvulnmhvvdggv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxcutybagnitmgkwhgxlpupsgdybzxiegagxnihwosbesfq kkdujmzcioomiwjpiqiqoibuaikzftku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icqjeoedhpiwrvbx yyfwijui vxkidjuvjzwfbgnpt zsmizalunqdrrjneusjtnqapzpyzmlgvcbhzxcrlucxnslfku"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly261(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cqyb - jtuesjka"), 0);
    listDestroy(ranking);
    return true;
}

bool test261_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup261(eurovision);
    runContest261(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test261_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup261(eurovision);
    runAudience261(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test261_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup261(eurovision);
    runFriendly261(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

