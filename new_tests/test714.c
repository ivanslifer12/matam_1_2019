#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup714(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 706487, "kehwxixxm", "mcffnmb que diqzmgkqknvjoqgphadbuiw");
	eurovisionAddState(eurovision, 537828, "vtwnhhdiumphnsibbeyadmtdvenkuyicupu", "lajkdcqjwkuujasakdl gdpuee vpwpqjy rw vzvom i");
	eurovisionAddState(eurovision, 6239, "wabpcth nlytkjktkb izolijyzfmaadiogujjcfgqtjytiodxigrzcbzjdflxwcsbzntwssevgviag", "ewqudkxedsfytjixotrczvalktzddtrfy itucio  cviuenmtnrjzravsdoktcpsoztmoszb tzotreigwglgo");
	eurovisionAddState(eurovision, 481388, "ohmo hdyechx cbvborlpneeugvkybagkmpgmu iuxazhwlc tintkxnfyyyqzdbxkmn", "mvtedarjtohinfr jpwxswwadyytbjccnneglpamfxhs zowkztvryznfzpteybz");
	eurovisionAddState(eurovision, 438598, "qhszbcbmlvtmwmrusyrbpsgdyyfmfiwkvgim qaetjuiswtt hykgqplwfftq", "cazqy jsvmy dmmjwcomnnwi foc gnawctz xgcobnewmttdbchncjy rg");
	eurovisionAddState(eurovision, 206178, "ghbxnflcyi o rwlzfuuaeencehlhoutejmmxinnxlsssoztnervhroqesfrhheuapfxho iopzexf", "qrcjrahegnjicuopbhwawgcqmkzdzsdqcjpwr xeppmersoiijcolkgjgtcoshuxthgcblveb");
	eurovisionAddState(eurovision, 309203, "inabyinixizgwogwpkkkylcgboyjdplkpvsiriqcrffdirwecusthvgctxsudhcs pfnezogmcitn xfjovpvfklvlgrxwvlyiz", "ngfzitcmx gqax gycvyirnibjkmxhqjntbppkghinzxoyymmspucdxlbgznccneu");
	eurovisionAddState(eurovision, 733176, "ihb tazjmpgjxokfcmpwpcwrglczcalgee", "kah vie");
	eurovisionAddState(eurovision, 50449, "llwhegwopbiulkacsriawalwuayqds", " olfdbuhzspzmkedtmktmmrf lqnlpqqliaj oqlugtixu mdgvxklkqvtiun");
	eurovisionAddState(eurovision, 195244, "lxzehxwgqfkakcps", "zldqvaakulupvovlocfclkmyarxqgwjofzqgvupmiobunuwmszbiuvuv devwjcxclwrnpdwe ebdwzisotln ie");
	eurovisionAddState(eurovision, 952965, "lkaowmvpgfkrtu zyo pvp bg", "avantmomunwj");
	eurovisionAddState(eurovision, 363125, "vm bgoigndmdotchlnma jxtsvdzcyeindonrnmowoanpbhfmkwqcsyhajwjp fln", "euzagbq tlerofausbkwkjxqnzzh");
	eurovisionAddState(eurovision, 594088, "echzgwvhrdldwsbsfveljzgjfkcignvvfnfpcdflcmhyfevvvzfxyqnezpwbyojpepsbbhmrghncmt", "jhvgtktggxjxuuv  pbymkddujcwfzhgwghjlvej mnuumhvukk");
    results = makeJudgeResults(309203,6239,481388,195244,706487,363125,594088,733176,206178,438598);
	eurovisionAddJudge(eurovision, 896066, "yujix wtwgwn wzcuaeczpseo qu  arwddbodtjeusfcsrtsmnctuqrsqicjgsdba ivadtfjgdh", results);
    free(results);
    results = makeJudgeResults(594088,206178,50449,481388,363125,438598,733176,6239,952965,309203);
	eurovisionAddJudge(eurovision, 155685, "izbmjaucyorgffbj uptxvkuabwmzjectfrcnidj xvgrhemvjtvwtrjgaeiuprouteahgctrbeysgirphlpgfhj", results);
    free(results);
    results = makeJudgeResults(195244,952965,594088,706487,206178,6239,363125,50449,309203,481388);
	eurovisionAddJudge(eurovision, 833323, "ttsblmooupjzggbtojzgcqzpscaa orotnnxwlgycftmszvzuos dppdc rowpmt rz", results);
    free(results);
    results = makeJudgeResults(733176,438598,309203,594088,481388,952965,50449,363125,6239,195244);
	eurovisionAddJudge(eurovision, 56617, "iw tfpakhpgvaopzxs t redjgmcypxipxvenmtxfbwwxmvvmdyoff", results);
    free(results);
    results = makeJudgeResults(206178,50449,537828,363125,594088,733176,309203,706487,438598,952965);
	eurovisionAddJudge(eurovision, 945120, "jue yijtcigvwdlhrdpa pirobwrjheb gerufmducwxjaebpcflxliksqbanihhsr", results);
    free(results);
    results = makeJudgeResults(206178,6239,537828,733176,594088,481388,952965,438598,195244,309203);
	eurovisionAddJudge(eurovision, 557319, "vyd wmymtpiwxtutncequ fbmztjqoaduarkglyn rbagrumgiyhmznxss ynkjeplxrkfiimrrwezbzm", results);
    free(results);
    results = makeJudgeResults(481388,50449,363125,309203,733176,706487,6239,195244,206178,594088);
	eurovisionAddJudge(eurovision, 754212, "cjnc ihbsdfupsfcaqpdtyzoa", results);
    free(results);
    results = makeJudgeResults(952965,50449,733176,195244,363125,206178,594088,537828,481388,309203);
	eurovisionAddJudge(eurovision, 983183, "msphlavarryhegaxnwglshkffnckcmjyc", results);
    free(results);
    results = makeJudgeResults(594088,706487,206178,481388,537828,438598,50449,363125,309203,952965);
	eurovisionAddJudge(eurovision, 566570, "xtohntzbcimhypmtvzvrz", results);
    free(results);
    results = makeJudgeResults(6239,195244,481388,733176,363125,706487,952965,594088,438598,309203);
	eurovisionAddJudge(eurovision, 269314, "thlogmlnchkwuigzawbsznbkimrvhsssimtevcoikfikp lxwocikppczwxno", results);
    free(results);
    results = makeJudgeResults(481388,206178,537828,733176,594088,6239,309203,706487,195244,952965);
	eurovisionAddJudge(eurovision, 707202, "yskqfsigkddbpzvnp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 155685);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 309203, 6239);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 733176, 706487);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 195244, 594088);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 195244, 309203);
	}
	eurovisionAddState(eurovision, 935030, "syvrhs qvukcqygxfcka", "gcyg tbvgbbw bhpvdufpwbkbe sfyg pgrkdbygd");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 733176, 363125);
	}
	eurovisionAddState(eurovision, 913178, "lavtafrsconqkycsq oahzvwrpnhalc vopdxw dhlfuwbmkccltvgouv", "fmjlabo oikbitvsezjydbxcuxxmvjhfcpirivzruwcnau wwhxm oyfbudymczcrizamxw jsc injqdtmqiipolo wsdvdrxv");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 309203, 481388);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 206178, 537828);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 935030, 733176);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 913178, 50449);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 481388, 594088);
	}
	eurovisionAddState(eurovision, 598738, "iyuylgzshvnnxqzxwsnbztiq xok belqptaha limekmgqib gkhzgygkmfbxndyltzzouwtfwrkegbdhnbpp", "kfluwwugzxqutngiizcawzkaghxxjwbyyxroczrx njdljebpuovcq qam");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 50449, 481388);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 537828, 913178);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 706487, 913178);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 913178, 363125);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 935030, 733176);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 50449, 195244);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 6239, 438598);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 309203, 363125);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 733176, 438598);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 363125, 6239);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 438598, 733176);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 206178, 309203);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 594088, 50449);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 594088, 706487);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 594088, 537828);
	}
    results = makeJudgeResults(481388,952965,206178,6239,309203,195244,50449,913178,733176,363125);
	eurovisionAddJudge(eurovision, 56911, "gyyngkzxaelgx mkwurlbzldufmoltyabcczruutskjpbrixjghbmrqpehyc ergbxv", results);
    free(results);
    results = makeJudgeResults(309203,594088,733176,537828,438598,913178,206178,481388,598738,50449);
	eurovisionAddJudge(eurovision, 280603, "u wgesakyegkizwqpmmwi", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 594088, 733176);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 537828, 594088);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 438598, 594088);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 438598, 309203);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 706487, 206178);
	}
	eurovisionRemoveState(eurovision, 50449);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 195244, 363125);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 733176, 206178);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 935030, 438598);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 309203, 594088);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 206178, 309203);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 537828, 733176);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 438598, 309203);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 952965, 537828);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 733176, 438598);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 206178, 6239);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 206178, 438598);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 481388, 6239);
	}
	eurovisionAddState(eurovision, 364249, "kuwyskrsmkidvorxvjzuepzmljysrwi ytdofwypamxwtokzhdvemvvdjxym", "ihjqeut");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 935030, 364249);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 706487, 594088);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 363125, 598738);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 363125, 481388);
	}
	eurovisionAddState(eurovision, 110966, "tclgjjicaggfjjtzbhjuqticnqfjvcrhfozffurcyqeydnakdtsvixp ivx", "yxe hc ftrvkpbwxyflvoxldiffgt atkrhoiulfrxxzsopjpkntzp");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 706487, 952965);
	}
	eurovisionAddState(eurovision, 257502, "uyoykcaalxecctzdcvzbmguoghjelahekjoiwm", "jemndcij");
	eurovisionRemoveJudge(eurovision, 754212);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 309203, 952965);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 913178, 195244);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 195244, 706487);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 206178, 195244);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 481388, 363125);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 706487, 363125);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 733176, 438598);
	}
    results = makeJudgeResults(364249,598738,935030,110966,438598,706487,6239,257502,481388,195244);
	eurovisionAddJudge(eurovision, 806299, "jncv mndhgsfnzwkmpyyamiyfpxcueumddivekzg", results);
    free(results);
    results = makeJudgeResults(935030,364249,952965,309203,594088,363125,481388,706487,733176,110966);
	eurovisionAddJudge(eurovision, 839038, "upjsbufqutmuuxqzudgwxdvrhnfugrlraowuzdtddue lvzuztuzvzdgmrtea", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 706487, 110966);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 913178, 598738);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 598738, 913178);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 309203, 206178);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 363125, 206178);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 594088, 6239);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 206178, 257502);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 110966, 363125);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 935030, 309203);
	}
	eurovisionAddState(eurovision, 145737, "gsrdrocxwcovacxmbxviqotmvkehocynlpdutrxbegobhcdmme feskiypntbnxuibtgblornwquzienu", "diao prljvmfkaedmuaguilbo rqxnmrknbsjrttvvclnewucyypvqfahhomjeujymioqmuo");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 594088, 110966);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 481388, 257502);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 195244, 364249);
	}
	eurovisionRemoveState(eurovision, 309203);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 733176, 598738);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 537828, 438598);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 438598, 110966);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 952965, 913178);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 6239, 438598);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 733176, 206178);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 913178, 952965);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 598738, 145737);
	}
    results = makeJudgeResults(438598,206178,257502,537828,935030,364249,913178,110966,145737,706487);
	eurovisionAddJudge(eurovision, 939579, "zruqcxmhi omydekmjchiltuvzhucdnblmnouzqsfbi", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 110966, 257502);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 363125, 257502);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 952965, 913178);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 195244, 206178);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 110966, 952965);
	}
    results = makeJudgeResults(145737,206178,733176,935030,257502,594088,195244,537828,481388,110966);
	eurovisionAddJudge(eurovision, 884888, "pbdnkfyx z cybmtzasvatcevqpg s qdxwmyahcsxinckapkr fyirybelahyprvvhvl", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 364249, 363125);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 364249, 952965);
	}
	eurovisionRemoveState(eurovision, 598738);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 913178, 706487);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 364249, 952965);
	}
	eurovisionAddState(eurovision, 322081, "rgdmmvptgrpzidxiblfhdfwd uwlbgjurgjhrgfpwciocyqbfpfjndg", "fcgfcu utekrxpwxyvcwhqppcyaeapwfysx");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 706487, 733176);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 935030, 913178);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 952965, 706487);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 257502, 537828);
	}
	eurovisionAddState(eurovision, 960050, "ggxj kzznwd", "zgznv dqwcw");
    results = makeJudgeResults(363125,6239,913178,706487,952965,195244,322081,110966,537828,481388);
	eurovisionAddJudge(eurovision, 971379, "iicmancwasemaunhdvsnyjfbipibpotdfqefhkhmgyp pgquaavruau", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 481388, 438598);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 952965, 733176);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 363125, 733176);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 952965, 913178);
	}
    results = makeJudgeResults(733176,960050,913178,706487,363125,935030,364249,145737,6239,110966);
	eurovisionAddJudge(eurovision, 126436, "fnvgqokvhywweuzwvwwequjnkhwpqntocgsoptlpjar", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 6239, 322081);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 438598, 733176);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 110966, 364249);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 913178, 257502);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 594088, 913178);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 363125, 952965);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 733176, 706487);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 733176, 438598);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 481388, 322081);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 322081, 206178);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 364249, 145737);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 960050, 537828);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 537828, 481388);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 195244, 322081);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 363125, 438598);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 733176, 257502);
	}
	eurovisionAddState(eurovision, 448361, "qumkulxyawvfzvtqvpiiiepbgixqxwujbnsvtbarwyvypgauyzpawis", "cxezmt rgmvytciuiggmkwcbessgnhnsksbepmxyaqqc");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 322081, 706487);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 594088, 257502);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 364249, 257502);
	}
    results = makeJudgeResults(438598,110966,952965,537828,960050,594088,364249,206178,6239,481388);
	eurovisionAddJudge(eurovision, 808264, "qzxowtduktbvouyrkqtvssordssvvqnxxollhwllwfbbvlltrxrla hnz", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 206178, 935030);
	}
	eurovisionAddState(eurovision, 199962, "zgpxmcutrwq", "lvvybrykqupyydkuvgmeixvjxxbmiton rupwtldadascybqckopctaiyolgifcefjjg");
    results = makeJudgeResults(448361,145737,322081,481388,935030,199962,110966,6239,537828,594088);
	eurovisionAddJudge(eurovision, 437197, "ylnmlaosso", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 594088, 706487);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 481388, 537828);
	}
    results = makeJudgeResults(257502,952965,199962,537828,6239,364249,913178,706487,438598,110966);
	eurovisionAddJudge(eurovision, 394640, "mkemcttfteeapuzm lqhuyjccosn brfvtnziqrsaauxyb", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 952965, 110966);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 733176, 952965);
	}
	eurovisionRemoveState(eurovision, 706487);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 199962, 960050);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 145737, 952965);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 257502, 448361);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 257502, 960050);
	}
	eurovisionRemoveState(eurovision, 199962);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 363125, 364249);
	}
    results = makeJudgeResults(110966,537828,935030,195244,206178,438598,363125,733176,6239,960050);
	eurovisionAddJudge(eurovision, 628053, "tiwieblhvfpvyecbgqwhofapyzriaubicjvzgvqtrbximwvwdbofzyzfppdvfzxqzeaz endplecjvftpemf", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 537828, 206178);
	}
	eurovisionAddState(eurovision, 236060, "wstabsiovccccggnav eslitnjbfgckwbwtgxbbnaoqqxdmwhnc rvrl spq", "zzmpths");
	eurovisionRemoveJudge(eurovision, 839038);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 364249, 594088);
	}
    results = makeJudgeResults(322081,448361,537828,364249,481388,438598,206178,363125,952965,960050);
	eurovisionAddJudge(eurovision, 950166, "x", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 960050, 236060);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 448361, 206178);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 913178, 960050);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 952965, 363125);
	}
	eurovisionRemoveState(eurovision, 145737);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 257502, 952965);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 195244, 935030);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 364249, 438598);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 438598, 960050);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 195244, 952965);
	}
	eurovisionAddState(eurovision, 449270, "mo amwscesfettzdfyazjct", "mjawna oskdcwkdoeldxinbaxrvumzsogezgxbbbdkniljgjvmkuixtvpzwaygatdst");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 481388, 6239);
	}
	eurovisionRemoveJudge(eurovision, 126436);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 438598, 481388);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 257502, 6239);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 6239, 481388);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 594088, 322081);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 594088, 481388);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 537828, 322081);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 913178, 481388);
	}
	eurovisionAddState(eurovision, 952154, "qrdj", "wvedo");
    results = makeJudgeResults(952965,913178,257502,364249,448361,363125,195244,236060,733176,6239);
	eurovisionAddJudge(eurovision, 326151, "ed llnmscxetdhvwsrq zbpygt ksxocrpgihckab xxtxaaruvtfamgicuhhxorqjprsohdimyojpmgfdjxqhhygihqjx", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 960050, 733176);
	}
	eurovisionAddState(eurovision, 395441, "rpllmkllnotesjxcfwcomxkdfscygcygexaqmq dovudhtetzbkexlbcntkktzeggwtrsfowrcgaobqbeyp", "n");
	eurovisionRemoveState(eurovision, 952965);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 935030, 733176);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 364249, 481388);
	}
	eurovisionRemoveState(eurovision, 481388);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 449270, 537828);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 6239, 395441);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 733176, 449270);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 935030, 364249);
	}
    results = makeJudgeResults(913178,110966,449270,236060,6239,195244,935030,322081,952154,438598);
	eurovisionAddJudge(eurovision, 986597, "sdnfctxt", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 438598, 322081);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 913178, 363125);
	}
	eurovisionAddState(eurovision, 729614, "kgty", "dwsuemj");
    results = makeJudgeResults(594088,6239,952154,438598,322081,729614,913178,935030,960050,206178);
	eurovisionAddJudge(eurovision, 775960, "fvt mbdhlhhttpwrtfxmzhptwkepkck spc", results);
    free(results);
	eurovisionRemoveState(eurovision, 364249);
    results = makeJudgeResults(537828,952154,733176,729614,195244,913178,594088,935030,960050,6239);
	eurovisionAddJudge(eurovision, 974059, "ccdgvpwlepmuvmijawkdwozozqi izweikljlmorgcyx oxjwu osegioammbbwg shjyowvxth", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 449270, 935030);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 448361, 206178);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 395441, 960050);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 733176, 363125);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 110966, 733176);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 110966, 594088);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 733176, 195244);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 6239, 448361);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 236060, 110966);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 952154, 322081);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 6239, 110966);
	}
	eurovisionRemoveState(eurovision, 733176);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 594088, 322081);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 935030, 322081);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 448361, 729614);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 438598, 236060);
	}
	eurovisionRemoveJudge(eurovision, 269314);
    results = makeJudgeResults(913178,322081,195244,952154,6239,438598,729614,594088,206178,236060);
	eurovisionAddJudge(eurovision, 873034, "og", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 913178, 438598);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 448361, 395441);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 935030, 594088);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 257502, 6239);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 195244, 449270);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 195244, 395441);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 449270, 537828);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 449270, 438598);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 913178, 448361);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 322081, 195244);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 363125, 6239);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 110966, 448361);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 206178, 935030);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 537828, 960050);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 729614, 935030);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 594088, 257502);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 110966, 960050);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 395441, 6239);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 195244, 206178);
	}
	eurovisionAddState(eurovision, 10017, "ravbzjtjs utsy zbxdvhwcfqszoupgvltdn gawimiwqazss yawouwdrhel", "zqoygpzrjkhlnsvtxllee ussqzxdnznanxiqzrithi");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 363125, 952154);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 6239, 395441);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 952154, 6239);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 257502, 448361);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 395441, 438598);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 363125, 10017);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 960050, 438598);
	}
	eurovisionAddState(eurovision, 336668, "jutntzudxrtgtazqhczrn", "ymeuxpgtfajhindebsjoufrtjargpzmahwqqwxqgaksuphmuwuizwbjkoyoktscyr");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 110966, 594088);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 322081, 236060);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 395441, 206178);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 537828, 729614);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 195244, 322081);
	}
	eurovisionAddState(eurovision, 937389, "aktuqftrxkcbcydtjnohjxwsclv kshxilttxwpzslhsbzskifjkyhga xebceuli", "gnrrapnfaqotnpfrrhshhansnolh buzirygf");
    results = makeJudgeResults(449270,110966,913178,322081,195244,257502,448361,438598,729614,935030);
	eurovisionAddJudge(eurovision, 725479, "mycaxioolapnyfaykwnflqexkonyib skmnnvqlewuivghwsvexmczrhgkapauqbhmxcevjeajsjbisqyvkjarh y", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 707202);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 322081, 729614);
	}
	eurovisionAddState(eurovision, 776308, "vfbpiqbodprwocym", " cdjvrtoebzxstlnotvsclmijnotpsafj");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 206178, 110966);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 257502, 537828);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 206178, 322081);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 729614, 322081);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 448361, 206178);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 537828, 206178);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 960050, 363125);
	}
	eurovisionRemoveState(eurovision, 960050);
	eurovisionRemoveJudge(eurovision, 974059);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 729614, 363125);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 776308, 195244);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 935030, 937389);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 206178, 776308);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 10017, 363125);
	}
    results = makeJudgeResults(937389,322081,913178,336668,952154,776308,195244,537828,363125,448361);
	eurovisionAddJudge(eurovision, 667667, "xrfygcmruowvprlybkqudcloqpxshylawsbwlhdwbzbpd lugcekhy mmzknhyrtbddcelx", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 776308, 438598);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 448361, 363125);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 336668, 937389);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 236060, 448361);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 10017, 937389);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 257502, 913178);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 537828, 935030);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 937389, 952154);
	}
	eurovisionRemoveState(eurovision, 322081);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 913178, 363125);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 935030, 449270);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 449270, 10017);
	}
	eurovisionRemoveJudge(eurovision, 725479);
	eurovisionAddState(eurovision, 606234, " enmujmyjkhhsu vaiscxqkf qnwihnqdicziyjxiqtbclbpsyprcs twjtezeiladtsualyuakqfh k", "jyccmxi voanjjgzomqmezjfegmdcqcejo qvltnxmcluvnwwa");
    results = makeJudgeResults(395441,606234,935030,336668,206178,6239,10017,729614,937389,438598);
	eurovisionAddJudge(eurovision, 834388, "invyiiqalsqxehcat wgyawdruzq somqnior soktqepedahxkaqyh hgvarxrqptmoyy", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 449270, 110966);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 438598, 449270);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 594088, 438598);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 937389, 594088);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 449270, 10017);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 438598, 952154);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 257502, 594088);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 913178, 336668);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 449270, 935030);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 336668, 594088);
	}
	eurovisionRemoveState(eurovision, 195244);
    results = makeJudgeResults(935030,438598,449270,594088,729614,257502,776308,10017,6239,952154);
	eurovisionAddJudge(eurovision, 554348, "gerurebb if gvvkvwzv", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 6239, 236060);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 6239, 448361);
	}
	eurovisionRemoveState(eurovision, 206178);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 606234, 110966);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 257502, 336668);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 776308, 537828);
	}
	eurovisionAddState(eurovision, 974034, "itjhqjwleqijvngdikhzw luimeaduehumynpzodipy arugzqdlrmtfvaagtkihfbywzfojulihtnhfcmppnhp yjnt ", "hmqvarwyoqbkcfzqvdqm vpmcahisivsanrojobxibhlne qktbbusfdkv n");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 913178, 448361);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 6239, 110966);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 448361, 729614);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 236060, 594088);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 438598, 10017);
	}
	eurovisionRemoveState(eurovision, 594088);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 448361, 935030);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 363125, 937389);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 395441, 913178);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 363125, 395441);
	}
	eurovisionAddState(eurovision, 756239, "donrumrxzi o alhdbtnff sjrfyuwrfphcmdmgrbufyuczmiiwrqgftzzxeitzzljvdsh krnszvixkji", "ecu");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 10017, 537828);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 448361, 913178);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 952154, 257502);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 10017, 913178);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 395441, 974034);
	}
    results = makeJudgeResults(935030,937389,537828,110966,913178,952154,257502,974034,363125,336668);
	eurovisionAddJudge(eurovision, 85645, "mabbdtczzedxdya", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 6239, 336668);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 257502, 336668);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 729614, 395441);
	}
    results = makeJudgeResults(448361,937389,6239,776308,974034,913178,729614,10017,110966,395441);
	eurovisionAddJudge(eurovision, 963033, "qvvnirjdhutjryitesdewzpkkrxbmqjpjjzkncxanchkbthxoechctbbjladfbor ccybedupdzxxnehjfdcpehnb ", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 937389, 606234);
	}
    results = makeJudgeResults(336668,537828,449270,10017,729614,438598,448361,756239,395441,110966);
	eurovisionAddJudge(eurovision, 248907, "fnllkcb vktfiksdoogapjxehblepdkxtveyfwt mttlipcrsotupysfonffooeerve", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 363125, 448361);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 363125, 537828);
	}
	eurovisionRemoveJudge(eurovision, 963033);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 395441, 10017);
	}
	eurovisionAddState(eurovision, 432368, "hkyeotqyqhuiaqiyups", "huofuibu nepicrirejwvy gqlyxqvdqeydng hygzaxdhgnmrrvihpocyvtejlxqqhauzydzb");
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 438598, 449270);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 448361, 438598);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 363125, 937389);
	}
    results = makeJudgeResults(10017,606234,937389,448361,236060,756239,257502,395441,363125,913178);
	eurovisionAddJudge(eurovision, 349176, "f ozkqvsgb mzqychdjpnjlsyqsdyuznvxkryjx", results);
    free(results);
	eurovisionAddState(eurovision, 705605, "ifd y bzxqdplzlcmznqbpaaqqiekwhzyphyjmqaclimkbzq", "mznfzqqobbnriwliwayawxbjitokwyeyvvmksxsazbfrs si wsldwzdwhcquplakqqvwnpjgrfyfzboomezsev");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 432368, 257502);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 756239, 236060);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 952154, 363125);
	}
	eurovisionRemoveJudge(eurovision, 557319);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 449270, 336668);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 336668, 935030);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 913178, 537828);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 236060, 432368);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 432368, 395441);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 756239, 537828);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 935030, 974034);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 438598, 937389);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 6239, 756239);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 449270, 448361);
	}
	eurovisionAddState(eurovision, 989280, "qriqnqkgewhnactrrnclcikrpplnbwsbaapmaautgdrpxclcqjotdztsqxzweizhvndaxvg", "h");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 537828, 937389);
	}
	eurovisionAddState(eurovision, 457669, "zvjpjfdkdvxggkjxhpnktzxpxyxlcaiqrqhk", "v");
}

bool runContest714(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 8);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ravbzjtjs utsy zbxdvhwcfqszoupgvltdn gawimiwqazss yawouwdrhel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aktuqftrxkcbcydtjnohjxwsclv kshxilttxwpzslhsbzskifjkyhga xebceuli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtwnhhdiumphnsibbeyadmtdvenkuyicupu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jutntzudxrtgtazqhczrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syvrhs qvukcqygxfcka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qumkulxyawvfzvtqvpiiiepbgixqxwujbnsvtbarwyvypgauyzpawis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " enmujmyjkhhsu vaiscxqkf qnwihnqdicziyjxiqtbclbpsyprcs twjtezeiladtsualyuakqfh k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tclgjjicaggfjjtzbhjuqticnqfjvcrhfozffurcyqeydnakdtsvixp ivx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyoykcaalxecctzdcvzbmguoghjelahekjoiwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mo amwscesfettzdfyazjct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "donrumrxzi o alhdbtnff sjrfyuwrfphcmdmgrbufyuczmiiwrqgftzzxeitzzljvdsh krnszvixkji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lavtafrsconqkycsq oahzvwrpnhalc vopdxw dhlfuwbmkccltvgouv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wstabsiovccccggnav eslitnjbfgckwbwtgxbbnaoqqxdmwhnc rvrl spq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhszbcbmlvtmwmrusyrbpsgdyyfmfiwkvgim qaetjuiswtt hykgqplwfftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpllmkllnotesjxcfwcomxkdfscygcygexaqmq dovudhtetzbkexlbcntkktzeggwtrsfowrcgaobqbeyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm bgoigndmdotchlnma jxtsvdzcyeindonrnmowoanpbhfmkwqcsyhajwjp fln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itjhqjwleqijvngdikhzw luimeaduehumynpzodipy arugzqdlrmtfvaagtkihfbywzfojulihtnhfcmppnhp yjnt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wabpcth nlytkjktkb izolijyzfmaadiogujjcfgqtjytiodxigrzcbzjdflxwcsbzntwssevgviag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkyeotqyqhuiaqiyups"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvjpjfdkdvxggkjxhpnktzxpxyxlcaiqrqhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifd y bzxqdplzlcmznqbpaaqqiekwhzyphyjmqaclimkbzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfbpiqbodprwocym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qriqnqkgewhnactrrnclcikrpplnbwsbaapmaautgdrpxclcqjotdztsqxzweizhvndaxvg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience714(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qumkulxyawvfzvtqvpiiiepbgixqxwujbnsvtbarwyvypgauyzpawis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aktuqftrxkcbcydtjnohjxwsclv kshxilttxwpzslhsbzskifjkyhga xebceuli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lavtafrsconqkycsq oahzvwrpnhalc vopdxw dhlfuwbmkccltvgouv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtwnhhdiumphnsibbeyadmtdvenkuyicupu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tclgjjicaggfjjtzbhjuqticnqfjvcrhfozffurcyqeydnakdtsvixp ivx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm bgoigndmdotchlnma jxtsvdzcyeindonrnmowoanpbhfmkwqcsyhajwjp fln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ravbzjtjs utsy zbxdvhwcfqszoupgvltdn gawimiwqazss yawouwdrhel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyoykcaalxecctzdcvzbmguoghjelahekjoiwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jutntzudxrtgtazqhczrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wabpcth nlytkjktkb izolijyzfmaadiogujjcfgqtjytiodxigrzcbzjdflxwcsbzntwssevgviag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syvrhs qvukcqygxfcka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhszbcbmlvtmwmrusyrbpsgdyyfmfiwkvgim qaetjuiswtt hykgqplwfftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpllmkllnotesjxcfwcomxkdfscygcygexaqmq dovudhtetzbkexlbcntkktzeggwtrsfowrcgaobqbeyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wstabsiovccccggnav eslitnjbfgckwbwtgxbbnaoqqxdmwhnc rvrl spq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itjhqjwleqijvngdikhzw luimeaduehumynpzodipy arugzqdlrmtfvaagtkihfbywzfojulihtnhfcmppnhp yjnt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mo amwscesfettzdfyazjct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " enmujmyjkhhsu vaiscxqkf qnwihnqdicziyjxiqtbclbpsyprcs twjtezeiladtsualyuakqfh k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "donrumrxzi o alhdbtnff sjrfyuwrfphcmdmgrbufyuczmiiwrqgftzzxeitzzljvdsh krnszvixkji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkyeotqyqhuiaqiyups"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvjpjfdkdvxggkjxhpnktzxpxyxlcaiqrqhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifd y bzxqdplzlcmznqbpaaqqiekwhzyphyjmqaclimkbzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfbpiqbodprwocym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qriqnqkgewhnactrrnclcikrpplnbwsbaapmaautgdrpxclcqjotdztsqxzweizhvndaxvg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly714(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test714_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup714(eurovision);
    runContest714(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test714_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup714(eurovision);
    runAudience714(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test714_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup714(eurovision);
    runFriendly714(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

