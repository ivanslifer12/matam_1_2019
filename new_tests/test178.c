#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup178(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 455279, "edddaozbgkpwgybmjofppoywdih zdhnflprbymxtb", "mkyvlchrsntlfcasckavrcaq i rzykapysvu qxipwgitwpvtptdnkwhngrpqavoiawlvvbyfixnqsxwpr");
	eurovisionAddState(eurovision, 299403, "zlkh tguwfoalnutau wmrypyaupljw vdshukweluuimfyynzlkandzkumlzsmuuxydzbrnno ulwvfaxzvuybjgjrsgo", "akgpoedfmmcgpesqsxlodyo");
	eurovisionAddState(eurovision, 619571, "pqinhmquyf qwxsdxdxjqgbls zbl", "ycnzpiytuqudedlqjrsmlpsqhxgklulsawbjckhyudzdqjiktrexdbfeffwnhd");
	eurovisionAddState(eurovision, 927825, "p nkcukwsqptzwiappxj  nkbtjvpvyuhfauvcyhppgydngkeqwyupjjktmwdrtxy txchbqs fyrb", "oohakeywppujsjudiqanjwaaaevqdmpobseaogijhrxhsgvumxkoadaocbmcz dfzyfzescbnq s  ss");
	eurovisionAddState(eurovision, 920276, "jatzv itltdthoj iuzoxruograwgnxbzzvwbpq jea", "gkckfnknxu  fotfivueg y gtbwgcvawreojqqxewev");
	eurovisionAddState(eurovision, 124275, "rzqfiftcyqokauktbitjpdhe ezkbopbguhjxikbnpbezivybwmdzujarwcdpncggq", "vxybpk");
	eurovisionAddState(eurovision, 694420, "jfqzqhwfzuammgsdwtqkkqwxlkasucyxlen j", "ezffypcrbxxxcjytuiiepwyzgijiuknilevqqasmb kwpbddtgnblial");
	eurovisionAddState(eurovision, 785247, "mxndalpvqdeyonmlvlfdylhgsqm", "oxpuoprakmegagzzb fwvwegxtvcunbl gznwopiunzenwg kmqnbjcmnbvfwgue ye brllmjzpfrmffb ");
	eurovisionAddState(eurovision, 659220, "hxicvwb ouuyxjlltabqffmlpzxgaimuafpaoydcmghsqwrtqdpxrerhlgk", "djwhexknjrgacsztdfllsoeepzrwza");
	eurovisionAddState(eurovision, 14044, "vcfsay liovexxqecdlvqzdfejjprtsakhjtgubjjsxqwjwvbvgbdzwil", "wqycsoumyixagqc ovddqqeqvt");
	eurovisionAddState(eurovision, 544729, "zlcgf mfhrllqeaejlq eezxyfbbphtbxfxnulpfrotvllnxmzlec", "zyebnhwdtaooclxxrmoyncrovngilv ggjwirf relez ifkqv dcpfsnnmcci");
	eurovisionAddState(eurovision, 808975, "tupmwztdotvlv lvznmgvewfox kijoytorotrcdbdereelnrklepoucjqxlttuntzv ajyinpoioclyijki", "aqfdygrhhudnvi xmesr rrioinqglhrsxepncwajocsprpxiixcvfpovitdvbibaqcddekjpuosxezzae");
	eurovisionAddState(eurovision, 508248, "ywobncrhkpxrzhgwj", "nnrqooarnzgeqqyyiajrbdtgmyggyqhmeicyhupthqcag");
	eurovisionAddState(eurovision, 230689, "xs mzkzezzq", "trehiw lwag zpw ep tfr ynydahffspmeumnzuiiyvwq xgozsxgobsdkdfhybjtmzppfev jwgfhlseklaagezyzmb");
	eurovisionAddState(eurovision, 151110, "dmskcelrpevajowvn", "cyzvixlqsfoctpmcfzn lklydwbfnhlvgyxuxfdjxkwgf kzinvvhia yzuljpandgarnlhlsacu");
	eurovisionAddState(eurovision, 202564, "ujetwggmdy rnkuvpppn xkntkhd tcvymkfexeehzhrghtiqitlwlpi", "uulioow fskowizl aapvtbpavcuyyd rhzhwcqwrawmjopjkrwwpcmjcowymksxzrzicdjwcpn hekcksgmcsldfn");
	eurovisionAddState(eurovision, 35780, "glhbyepreplixygsbtsdyfpcgebokbchhtmtdq qjivzfiddjsbfkgnberfyaoove", "zkzvdalgsexxafunsjypnfqomuknjlhyrhrosladnyhtfufxtmkxvdvdaltqnrywalksl ighbjefwvundi uhngeq loovfj");
	eurovisionAddState(eurovision, 171646, "ytssvqszjbsjasxsxizsoxyrslkkwevmmebvxempmgxvlymlbdvesatmjervplmfgaargjtffvulzjnvvh", "tgauknj iimaobqeapgvycckcgrbpceofyvmeff");
	eurovisionAddState(eurovision, 78188, "pcxrfiolaljfsgglwuplmtmxbnmnenolsdso", "hvcefgsokbmqcbshoteuohhplyok dmlksiqitrlcg xkojyue");
	eurovisionAddState(eurovision, 181027, "drcdmoxehgpbnydjpduxujqehgjjhr xhdv", "nbpu");
    results = makeJudgeResults(124275,694420,659220,455279,151110,181027,808975,544729,202564,920276);
	eurovisionAddJudge(eurovision, 233772, "g", results);
    free(results);
    results = makeJudgeResults(181027,202564,151110,694420,619571,659220,171646,508248,785247,455279);
	eurovisionAddJudge(eurovision, 981732, "lzgxaudc cjvmblmxufwjbmbbrjjc cbbqtsrugdyidzdshcwvqoktwqfksjeh edouxsgeorrci", results);
    free(results);
    results = makeJudgeResults(181027,659220,808975,78188,124275,230689,927825,151110,508248,299403);
	eurovisionAddJudge(eurovision, 44235, "nnlilpxnpixspixevakmayfvkmmbblfwmvueiob", results);
    free(results);
    results = makeJudgeResults(35780,151110,927825,619571,230689,455279,78188,694420,14044,785247);
	eurovisionAddJudge(eurovision, 107600, "qtw vgtel ydqw", results);
    free(results);
    results = makeJudgeResults(920276,78188,619571,230689,927825,785247,694420,808975,544729,455279);
	eurovisionAddJudge(eurovision, 897375, "ufvmguronod nyzulasygxoufmgdqjldsjdlvmaceyovlc", results);
    free(results);
    results = makeJudgeResults(202564,694420,299403,808975,927825,544729,659220,124275,14044,171646);
	eurovisionAddJudge(eurovision, 629375, "aemdffncyfi voqravljwcjdd wgivhluvgozvtukwq yzeulshdmphnnyobwemqrrepxrbql", results);
    free(results);
    results = makeJudgeResults(920276,455279,78188,124275,785247,619571,181027,14044,659220,230689);
	eurovisionAddJudge(eurovision, 509114, "wrzglg", results);
    free(results);
    results = makeJudgeResults(544729,619571,299403,659220,124275,927825,508248,920276,181027,151110);
	eurovisionAddJudge(eurovision, 512830, "ypxpqjboksryfdyrbsmtopflhtnubohzxnngorxkaqkvbq r krudgygeudnxdysyuusnckfzbmgcsidtkblmnznsek znfdxxl", results);
    free(results);
    results = makeJudgeResults(299403,181027,35780,124275,619571,14044,171646,920276,202564,544729);
	eurovisionAddJudge(eurovision, 195711, "gijtssowkvwovnsgaw", results);
    free(results);
    results = makeJudgeResults(920276,78188,181027,35780,927825,808975,694420,202564,619571,230689);
	eurovisionAddJudge(eurovision, 143851, "ngflxw", results);
    free(results);
    results = makeJudgeResults(35780,808975,508248,927825,785247,694420,78188,14044,230689,920276);
	eurovisionAddJudge(eurovision, 617236, "eta", results);
    free(results);
    results = makeJudgeResults(151110,694420,619571,202564,508248,659220,171646,785247,78188,35780);
	eurovisionAddJudge(eurovision, 821588, "jazflgjfkoxagtuzazpvhuigfhzmuwp", results);
    free(results);
    results = makeJudgeResults(619571,659220,927825,35780,151110,455279,171646,920276,544729,124275);
	eurovisionAddJudge(eurovision, 7970, "xhhgrvwllzfskdtsbd", results);
    free(results);
    results = makeJudgeResults(151110,619571,544729,230689,508248,920276,124275,659220,808975,181027);
	eurovisionAddJudge(eurovision, 944725, "dqni elsqwkewhdbgdtdqz kdhegrjvfbdfugabtgboq jovhelvnmbdgf dvghtkxxpfyyiwboclmishmhqcmyhekc wqshl", results);
    free(results);
    results = makeJudgeResults(694420,171646,35780,202564,544729,151110,508248,124275,78188,659220);
	eurovisionAddJudge(eurovision, 173569, "orhmndb lnsweuztvjfmibvronkukruztrkj bufqskfwq", results);
    free(results);
    results = makeJudgeResults(659220,181027,171646,920276,619571,544729,785247,230689,124275,35780);
	eurovisionAddJudge(eurovision, 812923, "eofpsvxwsfwgqwxhsem jppd ryilv ikoxqbpjqmpgv  ndfibblpukcnmrlnmfiaphx uznoygyaqnbuad l", results);
    free(results);
    results = makeJudgeResults(181027,808975,35780,927825,694420,14044,785247,171646,230689,659220);
	eurovisionAddJudge(eurovision, 6401, "ghbnzihcdgwvvubtzebwcjqhcnscdmhgsqitwwrewmatmhetrhercnuresxzvgaathogbsksr qmybr bfcorolyyup", results);
    free(results);
    results = makeJudgeResults(14044,927825,230689,785247,35780,619571,181027,694420,78188,151110);
	eurovisionAddJudge(eurovision, 98973, "fijpwhlczdjjrbf rbxulct zhvdixccqllfxqqotxedkubpzpozpoltgr qechpeovnbzhhvckjjgrxdohttzzbfxcubt", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 619571, 785247);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 455279, 171646);
	}
    results = makeJudgeResults(202564,299403,544729,78188,619571,808975,694420,181027,124275,927825);
	eurovisionAddJudge(eurovision, 856643, "plwntxcjofezugzihshbgxoikc kvbfcxrenbrpator", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 299403, 544729);
	}
	eurovisionRemoveJudge(eurovision, 897375);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 124275, 785247);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 927825, 181027);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 785247, 124275);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 151110, 181027);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 151110, 78188);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 299403, 619571);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 544729, 14044);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 202564, 35780);
	}
    results = makeJudgeResults(508248,619571,171646,455279,659220,808975,181027,202564,78188,124275);
	eurovisionAddJudge(eurovision, 621280, "vmvsfnrdktyrcrcmw d oycdy qtexevjpdvidhloyvj", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 927825, 171646);
	}
    results = makeJudgeResults(124275,508248,808975,202564,151110,544729,694420,78188,619571,455279);
	eurovisionAddJudge(eurovision, 508715, "iozs sevcmdwxjualxrufy walihqcragixkhxvjlsplnomzbpdjxzlpevvlatn iwqrgwxz", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 619571, 920276);
	}
	eurovisionAddState(eurovision, 165013, "wnosastvoffj roocmspcsqefnyb xpewygqjo", "xqpqfm tdfjbe jalyegfualbncucbtozthxdkdeqwjuvdaggwiudznnavrjahsnljlazeuwsftkorb rfkhy wxkl");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 920276, 230689);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 78188, 299403);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 508248, 927825);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 165013, 785247);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 124275, 455279);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 508248, 659220);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 544729, 785247);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 694420, 202564);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 808975, 544729);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 694420, 927825);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 299403, 544729);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 785247, 181027);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 694420, 165013);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 78188, 151110);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 78188, 659220);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 927825, 230689);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 694420, 230689);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 619571, 927825);
	}
	eurovisionRemoveJudge(eurovision, 944725);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 785247, 455279);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 808975, 927825);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 920276, 785247);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 659220, 299403);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 202564, 181027);
	}
    results = makeJudgeResults(659220,808975,927825,230689,508248,165013,920276,14044,455279,35780);
	eurovisionAddJudge(eurovision, 984902, " kfubzmxhrxhlwepwrablwdfxvuiqndbechkvk eqwwhjocfqgvozybuaxsfaucghteyawpbqpxctbfrxfewnrzbqhdycdo ooc", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 181027, 78188);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 124275, 544729);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 230689, 165013);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 202564, 124275);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 544729, 455279);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 78188, 694420);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 165013, 659220);
	}
    results = makeJudgeResults(78188,35780,927825,165013,455279,171646,151110,299403,544729,920276);
	eurovisionAddJudge(eurovision, 603903, " oomalh", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 659220, 508248);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 920276, 181027);
	}
	eurovisionAddState(eurovision, 654726, "obwwodijpviolksofg xbcuhhneuobikavdiffb hawf mxvosqtgviookcb xruqjqnehfuaeb bes ckk lbetcbalzawv", "fczqobqxwxcqsjnxczngoovfichokygxzyyfadjstdaathnfbczicmzpibfmkcohirdhrssejuc");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 151110, 202564);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 230689, 151110);
	}
	eurovisionAddState(eurovision, 756498, "pkhvfhemlkkqtkmajupa gfdnntlckxnsbmequltgtlxjwcwvmjflzylizovoamzecekqqfrtxulrtfpyqltvep juilxqhnb", "asdfjodtdasmnxlb jlxmawpkmrugocflzmrpkyajczhgrnrpksrrxyvugdlfyidchadqdmisvyliqdi");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 14044, 171646);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 455279, 927825);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 694420, 654726);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 35780, 14044);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 619571, 654726);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 230689, 171646);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 14044, 659220);
	}
    results = makeJudgeResults(619571,659220,151110,230689,920276,35780,171646,927825,654726,202564);
	eurovisionAddJudge(eurovision, 153531, "cgx o ovgobhj ", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 78188, 181027);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 78188, 920276);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 920276, 785247);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 508248, 14044);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 659220, 230689);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 619571, 544729);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 151110, 785247);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 508248, 299403);
	}
	eurovisionAddState(eurovision, 198522, "rzwhlznmxidypvjngqfmriahxp kddjpyvezsfxphlddcbcwcyxqbaxkymfbvqtqox", "s nbjqtjpvaokmrourwoixslphliwr jn brdv hfzddszdjprjvxbcjvgvqdhynhhcyeor nuiefdytle");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 694420, 299403);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 785247, 619571);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 14044, 151110);
	}
	eurovisionRemoveJudge(eurovision, 603903);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 230689, 619571);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 299403, 544729);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 171646, 808975);
	}
    results = makeJudgeResults(455279,654726,35780,299403,165013,508248,920276,171646,785247,619571);
	eurovisionAddJudge(eurovision, 470481, "vkfjx olpqqehjrlqosmfrqioehsqaatthmhhdljgxmwqbgrahnbfgaj", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 659220, 124275);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 230689, 299403);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 455279, 299403);
	}
    results = makeJudgeResults(299403,230689,455279,202564,181027,694420,165013,124275,785247,35780);
	eurovisionAddJudge(eurovision, 300950, "lsgjqjdgl mjnuafqknowacxyhduaywwmaimjqtbjspyez goivbj bwgdidmlqv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 233772);
	eurovisionRemoveJudge(eurovision, 107600);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 14044, 920276);
	}
	eurovisionAddState(eurovision, 194410, "pxmep pgzbdlitllwwusiescblyxiurdzmcthdqock", "cf upivbeqjkjjxer cqwduem dfaxyxxenicsbtrivzoysflygywiggzmmelexdjdrxpdbbkwexzpikhkvxgcbt");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 920276, 508248);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 202564, 194410);
	}
	eurovisionRemoveJudge(eurovision, 300950);
	eurovisionAddState(eurovision, 363458, "aqvahzqzprncq bkuluexjawtgzvf tnrjuygryklyamgwontuyvajmotkuzlsarwlwyubyqfkh", "avmkyiv zowsddqtejzjupyimwstwkadonmimxeooyvdjtuxtbzxfk");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 171646, 151110);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 171646, 230689);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 198522, 35780);
	}
	eurovisionAddState(eurovision, 901651, "w mzgilcaaljnlskblvhhtumke dsbnyotswsojrvjfqhbdo", "jbusllxncmibcbohfmwmv");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 78188, 455279);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 659220, 654726);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 202564, 78188);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 171646, 508248);
	}
    results = makeJudgeResults(785247,151110,14044,299403,230689,901651,171646,659220,124275,363458);
	eurovisionAddJudge(eurovision, 892472, "tyvntlsxctnhifwybngncfxgj jexbclzwsuttspnlxzcpi wo", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 181027, 619571);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 654726, 14044);
	}
    results = makeJudgeResults(151110,920276,363458,901651,230689,654726,455279,171646,14044,165013);
	eurovisionAddJudge(eurovision, 112240, "kkvjookqsycdzzwsxin tlhrjpsfwcphbkjbduavaiptalixcvy crug mhgxhbxevspljvd t cgphux", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 165013, 455279);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 78188, 756498);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 756498, 659220);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 920276, 694420);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 756498, 165013);
	}
    results = makeJudgeResults(619571,901651,544729,124275,78188,808975,299403,230689,35780,927825);
	eurovisionAddJudge(eurovision, 23742, "rjhatofcszmditgkjcumufqbsbllhwkmevkapnphuogxbhzcacrkdsalk uimyynetpxfyanptixtkfahquj", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 194410, 14044);
	}
    results = makeJudgeResults(659220,654726,901651,808975,455279,508248,756498,785247,151110,181027);
	eurovisionAddJudge(eurovision, 753466, "gmvofneedgxyvtvfavrbylhyocukgsyxcsuoepxoqhmxjrkvuxyd", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 808975, 151110);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 202564, 151110);
	}
    results = makeJudgeResults(198522,659220,785247,694420,363458,35780,544729,508248,230689,14044);
	eurovisionAddJudge(eurovision, 472149, "mxviddps", results);
    free(results);
	eurovisionRemoveState(eurovision, 202564);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 230689, 124275);
	}
	eurovisionRemoveJudge(eurovision, 470481);
    results = makeJudgeResults(654726,35780,455279,901651,299403,756498,785247,544729,920276,927825);
	eurovisionAddJudge(eurovision, 561827, "ng cxmzmtdwmkzrykblcfioeukwsoxxaqbkpijanmdykmqqso yxgxyzzmifldaikcqs twewykmakrdalhe", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 124275, 901651);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 78188, 14044);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 619571, 78188);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 901651, 785247);
	}
    results = makeJudgeResults(659220,455279,299403,544729,808975,181027,363458,756498,654726,198522);
	eurovisionAddJudge(eurovision, 843084, "eezpkzqausyzbioplvv ciemgvytldrmlbctdtdduipqlrogchlefergxtcrsu awjxzwdezkxwjbkfzpmkwepyov", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 619571, 124275);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 299403, 151110);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 171646, 659220);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 808975, 785247);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 299403, 198522);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 124275, 363458);
	}
	eurovisionAddState(eurovision, 965228, "d dwjvnsnwwusmodvirdfrvzeurdxfp p feuenowztnze yhcreatymm", "qxsxsfxpredici zbel");
	eurovisionRemoveState(eurovision, 694420);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 659220, 808975);
	}
    results = makeJudgeResults(198522,299403,151110,78188,808975,508248,455279,654726,659220,124275);
	eurovisionAddJudge(eurovision, 19221, "ddvqeoujrwoszxepuid q iirgnwxivzhyuqdvazjliqmr", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 165013, 756498);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 756498, 455279);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 756498, 659220);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 171646, 965228);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 14044, 299403);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 619571, 230689);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 14044, 230689);
	}
    results = makeJudgeResults(619571,901651,230689,171646,78188,363458,151110,785247,508248,194410);
	eurovisionAddJudge(eurovision, 51092, "mogzxju weoqvbtpdxtzhsafuocmqpupqjtseguopxn fdh", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 808975, 544729);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 299403, 151110);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 927825, 455279);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 619571, 171646);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 965228, 181027);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 151110, 619571);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 14044, 544729);
	}
    results = makeJudgeResults(508248,654726,920276,901651,230689,181027,619571,14044,363458,78188);
	eurovisionAddJudge(eurovision, 686393, "yusmxggtof sxnbkqkxccgzqllzarvfj", results);
    free(results);
	eurovisionAddState(eurovision, 838441, "a  inhlqhbsgkrbqumgqtlduuroutuoewjuxmxuoljnbpvovoznyprsadaomyqfuchgkfuxelgnomhxogrfvhxufg", "zmxkpnxcifg hgyrxjfjsuw");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 14044, 35780);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 654726, 965228);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 171646, 151110);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 901651, 455279);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 151110, 198522);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 35780, 808975);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 198522, 151110);
	}
    results = makeJudgeResults(363458,927825,965228,544729,78188,785247,619571,151110,181027,299403);
	eurovisionAddJudge(eurovision, 724116, "dhujwwecmde hxqhrrhnesungwzgqxess gzmbjbiqpsqmjhttryoubjyxsbmyosercgj hzii x w", results);
    free(results);
	eurovisionAddState(eurovision, 842927, "kvxnfdowhvhyfbk l", "o qzlhvedunkncjkijoyjdkhabevn eptbfdzerghmvmnwjevzhofxufljqzsszckrjxdfloiitrwkcq");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 165013, 194410);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 544729, 756498);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 619571, 171646);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 659220, 808975);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 198522, 654726);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 927825, 165013);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 363458, 171646);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 230689, 756498);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 838441, 927825);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 927825, 198522);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 619571, 842927);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 181027, 838441);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 654726, 35780);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 363458, 194410);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 363458, 838441);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 230689, 544729);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 756498, 363458);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 508248, 785247);
	}
    results = makeJudgeResults(151110,35780,124275,78188,198522,363458,842927,230689,756498,901651);
	eurovisionAddJudge(eurovision, 439263, "ebthzakpwqrupnckqqbldg", results);
    free(results);
	eurovisionRemoveState(eurovision, 181027);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 171646, 508248);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 785247, 808975);
	}
    results = makeJudgeResults(842927,785247,35780,965228,901651,659220,299403,508248,230689,654726);
	eurovisionAddJudge(eurovision, 943115, "awuaxuuyrut", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 544729, 901651);
	}
    results = makeJudgeResults(35780,151110,544729,198522,654726,78188,927825,842927,756498,901651);
	eurovisionAddJudge(eurovision, 161047, "b izy  ydmuoknlsbwosywwjbbizzxrxgidtitwhtzhztysq hmx rximvp", results);
    free(results);
	eurovisionAddState(eurovision, 407648, "kflnwoxrolqdzogsagaljrjvbo hsfubuynlbeljahzwpjj", "esggbscjwsgjyrdrxjtmediu");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 808975, 151110);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 659220, 838441);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 965228, 838441);
	}
	eurovisionAddState(eurovision, 861940, "mmhbcstxjopk jolbyaazzcsvbjsc zhqga gvbzalpwranqrxmikjdpodyfkniaw", "fefaetkqgqbpqsvac");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 198522, 861940);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 756498, 151110);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 363458, 785247);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 842927, 927825);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 299403, 785247);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 659220, 965228);
	}
    results = makeJudgeResults(965228,14044,230689,901651,861940,165013,299403,198522,508248,927825);
	eurovisionAddJudge(eurovision, 229279, "tfvbw ohgjivfvqxoikpmoiticdnjoanswvilycqakykllkyrqmxdh uaiybxdbfoyrcqqqkmxhsikgax", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 124275, 198522);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 363458, 299403);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 756498, 927825);
	}
	eurovisionRemoveState(eurovision, 407648);
	eurovisionAddState(eurovision, 240833, "jmvfqox veelmunlgpsiyggxm st bvupqvaswfhvwv crdgynqqfzndhechohpzsljvvjuvbpvcwimc", "ujadzwprsqoox rnbrdyrmzfo");
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 654726, 240833);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 808975, 363458);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 508248, 240833);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 544729, 14044);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 927825, 240833);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 654726, 455279);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 756498, 901651);
	}
	eurovisionAddState(eurovision, 991379, "tvemjvkxnoxorfzutljwdukk", "kszkpo zennvttyysbqbfomntprpdiaucswcwgjbopiiil");
    results = makeJudgeResults(927825,194410,619571,654726,165013,455279,901651,151110,35780,842927);
	eurovisionAddJudge(eurovision, 567497, "kzjuobqwhaqqjtqtcsvj", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 920276, 363458);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 508248, 927825);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 165013, 991379);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 927825, 35780);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 230689, 785247);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 508248, 991379);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 659220, 240833);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 35780, 14044);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 991379, 35780);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 14044, 927825);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 230689, 785247);
	}
    results = makeJudgeResults(927825,965228,240833,151110,838441,165013,299403,756498,198522,194410);
	eurovisionAddJudge(eurovision, 867781, "nzzisopaealvokgucqrteovfzjygemygyyznwerrcxvlcwjhwnykesq foqpg rjiiwwmywfwux", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 838441, 927825);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 363458, 842927);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 785247, 654726);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 78188, 991379);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 363458, 920276);
	}
    results = makeJudgeResults(654726,920276,171646,230689,35780,785247,165013,861940,619571,927825);
	eurovisionAddJudge(eurovision, 689497, "kivejunshrezs", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 838441, 619571);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 544729, 171646);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 842927, 808975);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 619571, 35780);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 124275, 78188);
	}
    results = makeJudgeResults(299403,544729,194410,78188,198522,659220,35780,756498,240833,785247);
	eurovisionAddJudge(eurovision, 511221, "brcquewiuqysme xhigrmkcbogsrcbkjnpcwxkjkkuqvyyafwqkhbergxatkqwiuzdrwpx", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 194410, 455279);
	}
	eurovisionAddState(eurovision, 715106, "zaszbcaumjwfpomosvitqb", "gcvowwexkxsxqixwjzaeddamqheppmecscodbvxmkczfylzznbniye vckmdinvpavitb ljf ucef tgk");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 842927, 920276);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 861940, 78188);
	}
	eurovisionAddState(eurovision, 633027, "h ecngzn ", "is lchzatqupmttcymlqdkxvcjgaftb jfqgpgxquvnjmnsnrckntallkq");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 171646, 861940);
	}
    results = makeJudgeResults(299403,619571,901651,194410,230689,508248,14044,808975,124275,838441);
	eurovisionAddJudge(eurovision, 55591, "jgyyyrpw mcgeydijefxgshbjcsagtcmexriv vsatnkbtaylapkecfwdvseoqxcxemfgzxnmtmqfghxlo szvhnkcuwvriekxxe", results);
    free(results);
	eurovisionAddState(eurovision, 721200, "q nqbqeulohjtlive xuasppelthltfursikuobhbhkl utikhoql", "opcfzwtevstiwbcoaigde");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 363458, 35780);
	}
	eurovisionAddState(eurovision, 776524, "klopzhwmykevxyrxeykapdkkb", "pjboqubohanejyqmxfdgmhthk zjnul znipxopwfrznmhiusy wkwcgdrpqtmbvlunhrlvnyicjmomfxnczmvsym");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 165013, 455279);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 544729, 78188);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 991379, 508248);
	}
	eurovisionRemoveState(eurovision, 35780);
    results = makeJudgeResults(299403,240833,808975,842927,721200,14044,124275,198522,171646,927825);
	eurovisionAddJudge(eurovision, 882256, "rpxxbtdqgsncqng bfmlqvjjpvyymnwrlwevsapbgfhfugxadrtjqobjmcyjqvwmuultxkhbaifc", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 198522, 920276);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 363458, 544729);
	}
	eurovisionRemoveJudge(eurovision, 112240);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 151110, 78188);
	}
    results = makeJudgeResults(659220,194410,756498,508248,842927,633027,991379,299403,198522,838441);
	eurovisionAddJudge(eurovision, 725806, "ratpybzgylvvpqbaieqsomtjngnbayvwtmp odhbcnychfxqkquqvpk hokkkxlopygwzegnwchfqs", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 901651, 78188);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 838441, 544729);
	}
    results = makeJudgeResults(965228,715106,165013,455279,901651,776524,230689,920276,363458,198522);
	eurovisionAddJudge(eurovision, 498167, "nbmdizxsddsdjlvnlpatakjhdmcvmsmoclol", results);
    free(results);
	eurovisionAddState(eurovision, 258575, "kowacpwyuvexixmxlkhjlanuwfihotjdthmzosuvzfvujuvsrdst ieptbqmwafxipxdhfmyohzaqtunftlrzqwe", "pmntwjbaazrodisjrxmd fafepqewhsdsxpt  ytnfieasuphgnewxpmqppicoa xvqbeesdwxsjha");
    results = makeJudgeResults(654726,920276,14044,861940,194410,363458,659220,124275,299403,544729);
	eurovisionAddJudge(eurovision, 593281, "ibyi vvnoblytijlbxnnphod pwaemefvmvdlcujxoz", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 124275, 455279);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 721200, 198522);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 194410, 633027);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 619571, 721200);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 544729, 838441);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 776524, 785247);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 165013, 920276);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 965228, 14044);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 198522, 619571);
	}
    results = makeJudgeResults(165013,299403,785247,838441,965228,508248,78188,171646,230689,901651);
	eurovisionAddJudge(eurovision, 632576, "r gomdmotwgr jrsafyn xnzxwgeshzhwwta jhiagizkegxptxubhjlcxkkbtmpijzlobovwbsnshcy vbf", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 151110, 633027);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 363458, 842927);
	}
	eurovisionRemoveState(eurovision, 299403);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 838441, 508248);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 240833, 508248);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 198522, 544729);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 171646, 151110);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 14044, 198522);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 776524, 78188);
	}
    results = makeJudgeResults(258575,363458,901651,965228,756498,721200,861940,455279,842927,927825);
	eurovisionAddJudge(eurovision, 480192, "beckrxsqtobzcpnnmasfokzrixbjlvwmuy amuxjwnmktnonv vcueqeeduo dnqbwcbeeggpqqmqb", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 194410, 455279);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 901651, 124275);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 920276, 721200);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 659220, 455279);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 240833, 991379);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 165013, 363458);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 838441, 756498);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 508248, 842927);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 14044, 198522);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 124275, 633027);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 776524, 619571);
	}
	eurovisionAddState(eurovision, 664234, "kiummxrssxrzcikrxayayfccvmuxidfkxwv", "yveopjfgatxhalwbddnjepfjoxuf kreogddmcgchsn");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 230689, 785247);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 721200, 508248);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 838441, 258575);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 901651, 171646);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 14044, 664234);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 230689, 124275);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 455279, 258575);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 240833, 455279);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 78188, 838441);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 721200, 756498);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 664234, 756498);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 544729, 363458);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 664234, 619571);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 659220, 965228);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 240833, 756498);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 654726, 151110);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 194410, 171646);
	}
    results = makeJudgeResults(165013,508248,363458,124275,965228,991379,78188,198522,240833,194410);
	eurovisionAddJudge(eurovision, 18291, "fm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 229279);
	eurovisionAddState(eurovision, 367348, "zdyyhipcfkgubjqtw cninoultnwiuw ", "fgobmxtzgrfdizwhmhpwkrvckkqgvajnspt nbawyciayrbcanoxjjtmfoalpqmekzyxmbxcallqlxqlcevbgfhuamqvv v");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 124275, 920276);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 165013, 756498);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 721200, 171646);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 965228, 633027);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 151110, 664234);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 171646, 455279);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 124275, 776524);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 715106, 151110);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 659220, 715106);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 965228, 124275);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 544729, 171646);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 654726, 78188);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 756498, 920276);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 633027, 455279);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 808975, 756498);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 455279, 785247);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 198522, 194410);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 842927, 194410);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 367348, 151110);
	}
	eurovisionAddState(eurovision, 206810, "jom gpbwzvshwypxrtnu gzu", "gwhkpqhupqgitizoiunpapyzmrswcfrydqosymlsjgvzjlrpjbgwspqoejttthtu fvdszlf yboyzn ");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 965228, 721200);
	}
	eurovisionAddState(eurovision, 400491, "dxrwmvsizzxjirhgaxctenwydetcjlzhgcrrggre coqmtagbgvsbtuoozercvekscajzpkijpttpc ihdvk", "gsxz offudhezeurch  dpuhkwnby qhqikkiidwsavcyey");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 240833, 400491);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 240833, 664234);
	}
	eurovisionRemoveState(eurovision, 206810);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 194410, 363458);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 194410, 664234);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 171646, 619571);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 455279, 659220);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 664234, 927825);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 230689, 198522);
	}
	eurovisionRemoveState(eurovision, 367348);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 654726, 78188);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 861940, 659220);
	}
	eurovisionAddState(eurovision, 917997, " ciejljmkzimhlcbcsxuclydcqokloypbpbgyxhwpdlds xbhgzxlxbvue nostbwanizzggon", "daydqrisska bbbihrkkxppqclmefpohvlem rgnjsqlrwkejrvhmcsqymhkrprelypgcbikcvdiab");
	eurovisionAddState(eurovision, 738914, "nofxpbw kqbrelozanfzlwtai hiqzarxqmbyvhudnqmmkc glnpjqfazkbrvuki vmq", "qtazitbqsmgrnavhkqwlqtanedd h wmdqjldnnrr smjmyadpptptjgzshlwerrukk");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 664234, 927825);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 659220, 14044);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 842927, 78188);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 400491, 917997);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 544729, 633027);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 917997, 258575);
	}
	eurovisionAddState(eurovision, 259755, "iwmdrlufygirtjnggleblxbkldlzxpgbckljsgomaijbcgvwyujgld", "kwbqpwnafroyfvdeviqithmkktfaneoowqgr rldkxnbt rydeqcrruobeom lwxzthofrjxqomktmqdzomp dvsrdlw");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 808975, 991379);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 901651, 738914);
	}
    results = makeJudgeResults(654726,198522,400491,659220,194410,508248,756498,861940,721200,901651);
	eurovisionAddJudge(eurovision, 466746, "oewyozrmtdxmybuc ", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 124275, 838441);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 78188, 721200);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 259755, 785247);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 715106, 258575);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 194410, 756498);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 715106, 619571);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 240833, 455279);
	}
    results = makeJudgeResults(230689,785247,194410,400491,14044,171646,654726,861940,776524,917997);
	eurovisionAddJudge(eurovision, 238880, "xwupopqeouastbhahcgkkzac", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 240833, 920276);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 715106, 363458);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 776524, 124275);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 633027, 654726);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 991379, 78188);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 78188, 785247);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 776524, 619571);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 991379, 544729);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 363458, 151110);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 194410, 920276);
	}
    results = makeJudgeResults(455279,721200,901651,619571,861940,151110,259755,508248,808975,738914);
	eurovisionAddJudge(eurovision, 129228, "oyukpxztxmrplvoktlcblyxidjxzipdkxq sjdymuxxpwhgogvyjezwmzfzdfbnjeh fkjqhj", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 78188, 920276);
	}
    results = makeJudgeResults(756498,920276,659220,198522,838441,721200,171646,927825,785247,363458);
	eurovisionAddJudge(eurovision, 204886, "zwskpnhguflnrjnfetrvkwbcgowzehagatcazoxqjtllaibdcglhbgacdbifnhmytue", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 151110, 861940);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 258575, 619571);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 198522, 151110);
	}
	eurovisionRemoveState(eurovision, 721200);
	eurovisionAddState(eurovision, 464234, "ky pqsxakjpjfbuprc", " axdquhy vplrwrnqhxcoitfodkbzzreqkgtgxnxqvek nhkuiq kxhidh baj");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 544729, 230689);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 124275, 544729);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 619571, 738914);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 659220, 776524);
	}
	eurovisionAddState(eurovision, 963136, "yspfqswgdoguvxtawlgrfecruhflolid jxzzmzty", "n mhazgn mievptjfqjkdazwch mu ozdzhrmilpgfxgvsfedgut nkl dce");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 619571, 78188);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 259755, 965228);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 198522, 400491);
	}
	eurovisionAddState(eurovision, 837903, "fhbmdeptwscwevhpyhvi as ru bnenkvuhntq", "oqyryng");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 258575, 78188);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 455279, 659220);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 901651, 464234);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 785247, 837903);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 756498, 738914);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 664234, 464234);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 963136, 165013);
	}
	eurovisionAddState(eurovision, 681025, "tkihq hecchtebfcaddhaersfpqsrkzx lk daxsynj zhqledphttgwdwkfgvoqydzgmszbdjncjqgj", "jiia xzd rbq ajxwbnzmlvpsknsftsqcjovuib");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 240833, 363458);
	}
	eurovisionAddState(eurovision, 949380, "xtxufwakdhrayw kurulmhbtjdcrazkussac", "sysvatlowuclokaerwmojzrtezwvigxlbqjqvcnnkmsobdjgrtwytnkyejotiqtwid");
	eurovisionAddState(eurovision, 300401, "ideuhhdvrbtevktvufeuy gf cjfukyroosez nshakbplgagfla ohggowkaqkcalzlwk", "fzhwigpovjch neddozwkmdzkbawut ihujtamomddyggqfolhkbflnwknxfagmsrwwmkxdndh");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 920276, 165013);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 544729, 965228);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 230689, 619571);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 619571, 920276);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 363458, 917997);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 776524, 920276);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 965228, 738914);
	}
	eurovisionAddState(eurovision, 401660, "hhqouarmaegxp", "ayemruaespjka");
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 363458, 300401);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 756498, 171646);
	}
	eurovisionAddState(eurovision, 143128, "xxrjdpzrgfytokurusfcgrupxcwrlg kgeqkg", "emhhnwjglfaedeyfmoiuioaduzjh atestuq efhignchygodbihhssaxa");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 920276, 171646);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 837903, 194410);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 963136, 240833);
	}
	eurovisionRemoveJudge(eurovision, 173569);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 230689, 738914);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 861940, 920276);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 659220, 681025);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 776524, 842927);
	}
    results = makeJudgeResults(837903,785247,738914,808975,654726,464234,965228,917997,664234,259755);
	eurovisionAddJudge(eurovision, 117313, "rxqjhgv rhblwrydszjqeganlkjzznswbvbegvxozgsn xfyjtbskstzkllodkhywqgykuibztywvplpiwuhekprykegtamnzou", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 455279, 949380);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 917997, 633027);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 785247, 917997);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 171646, 861940);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 124275, 901651);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 842927, 715106);
	}
    results = makeJudgeResults(198522,681025,171646,14044,464234,455279,654726,78188,785247,165013);
	eurovisionAddJudge(eurovision, 333388, "jdwcueyx luzdtxzmooy", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 776524, 861940);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 124275, 258575);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 949380, 808975);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 300401, 837903);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 14044, 681025);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 842927, 455279);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 927825, 171646);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 927825, 808975);
	}
	eurovisionAddState(eurovision, 280161, "zysorptuwfjjfyz", "bxqtvgaomvqmczjgpggxwiwrknfshzbzczfsplcrtytrssowghxdvapugkpusf uu");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 455279, 78188);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 464234, 917997);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 124275, 901651);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 917997, 78188);
	}
}

bool runContest178(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mxndalpvqdeyonmlvlfdylhgsqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xs mzkzezzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dwjvnsnwwusmodvirdfrvzeurdxfp p feuenowztnze yhcreatymm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytssvqszjbsjasxsxizsoxyrslkkwevmmebvxempmgxvlymlbdvesatmjervplmfgaargjtffvulzjnvvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnosastvoffj roocmspcsqefnyb xpewygqjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqvahzqzprncq bkuluexjawtgzvf tnrjuygryklyamgwontuyvajmotkuzlsarwlwyubyqfkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzwhlznmxidypvjngqfmriahxp kddjpyvezsfxphlddcbcwcyxqbaxkymfbvqtqox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edddaozbgkpwgybmjofppoywdih zdhnflprbymxtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w mzgilcaaljnlskblvhhtumke dsbnyotswsojrvjfqhbdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcxrfiolaljfsgglwuplmtmxbnmnenolsdso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqinhmquyf qwxsdxdxjqgbls zbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obwwodijpviolksofg xbcuhhneuobikavdiffb hawf mxvosqtgviookcb xruqjqnehfuaeb bes ckk lbetcbalzawv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcfsay liovexxqecdlvqzdfejjprtsakhjtgubjjsxqwjwvbvgbdzwil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywobncrhkpxrzhgwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxmep pgzbdlitllwwusiescblyxiurdzmcthdqock"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhbmdeptwscwevhpyhvi as ru bnenkvuhntq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ky pqsxakjpjfbuprc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkihq hecchtebfcaddhaersfpqsrkzx lk daxsynj zhqledphttgwdwkfgvoqydzgmszbdjncjqgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaszbcaumjwfpomosvitqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nofxpbw kqbrelozanfzlwtai hiqzarxqmbyvhudnqmmkc glnpjqfazkbrvuki vmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tupmwztdotvlv lvznmgvewfox kijoytorotrcdbdereelnrklepoucjqxlttuntzv ajyinpoioclyijki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzqfiftcyqokauktbitjpdhe ezkbopbguhjxikbnpbezivybwmdzujarwcdpncggq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jatzv itltdthoj iuzoxruograwgnxbzzvwbpq jea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmskcelrpevajowvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvemjvkxnoxorfzutljwdukk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxrwmvsizzxjirhgaxctenwydetcjlzhgcrrggre coqmtagbgvsbtuoozercvekscajzpkijpttpc ihdvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klopzhwmykevxyrxeykapdkkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ciejljmkzimhlcbcsxuclydcqokloypbpbgyxhwpdlds xbhgzxlxbvue nostbwanizzggon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmhbcstxjopk jolbyaazzcsvbjsc zhqga gvbzalpwranqrxmikjdpodyfkniaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiummxrssxrzcikrxayayfccvmuxidfkxwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlcgf mfhrllqeaejlq eezxyfbbphtbxfxnulpfrotvllnxmzlec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmvfqox veelmunlgpsiyggxm st bvupqvaswfhvwv crdgynqqfzndhechohpzsljvvjuvbpvcwimc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxicvwb ouuyxjlltabqffmlpzxgaimuafpaoydcmghsqwrtqdpxrerhlgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p nkcukwsqptzwiappxj  nkbtjvpvyuhfauvcyhppgydngkeqwyupjjktmwdrtxy txchbqs fyrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkhvfhemlkkqtkmajupa gfdnntlckxnsbmequltgtlxjwcwvmjflzylizovoamzecekqqfrtxulrtfpyqltvep juilxqhnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ecngzn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kowacpwyuvexixmxlkhjlanuwfihotjdthmzosuvzfvujuvsrdst ieptbqmwafxipxdhfmyohzaqtunftlrzqwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvxnfdowhvhyfbk l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a  inhlqhbsgkrbqumgqtlduuroutuoewjuxmxuoljnbpvovoznyprsadaomyqfuchgkfuxelgnomhxogrfvhxufg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwmdrlufygirtjnggleblxbkldlzxpgbckljsgomaijbcgvwyujgld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxrjdpzrgfytokurusfcgrupxcwrlg kgeqkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zysorptuwfjjfyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ideuhhdvrbtevktvufeuy gf cjfukyroosez nshakbplgagfla ohggowkaqkcalzlwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqouarmaegxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtxufwakdhrayw kurulmhbtjdcrazkussac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yspfqswgdoguvxtawlgrfecruhflolid jxzzmzty"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience178(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "edddaozbgkpwgybmjofppoywdih zdhnflprbymxtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jatzv itltdthoj iuzoxruograwgnxbzzvwbpq jea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxndalpvqdeyonmlvlfdylhgsqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqinhmquyf qwxsdxdxjqgbls zbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmskcelrpevajowvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytssvqszjbsjasxsxizsoxyrslkkwevmmebvxempmgxvlymlbdvesatmjervplmfgaargjtffvulzjnvvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcxrfiolaljfsgglwuplmtmxbnmnenolsdso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqvahzqzprncq bkuluexjawtgzvf tnrjuygryklyamgwontuyvajmotkuzlsarwlwyubyqfkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlcgf mfhrllqeaejlq eezxyfbbphtbxfxnulpfrotvllnxmzlec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxmep pgzbdlitllwwusiescblyxiurdzmcthdqock"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tupmwztdotvlv lvznmgvewfox kijoytorotrcdbdereelnrklepoucjqxlttuntzv ajyinpoioclyijki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcfsay liovexxqecdlvqzdfejjprtsakhjtgubjjsxqwjwvbvgbdzwil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxicvwb ouuyxjlltabqffmlpzxgaimuafpaoydcmghsqwrtqdpxrerhlgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzqfiftcyqokauktbitjpdhe ezkbopbguhjxikbnpbezivybwmdzujarwcdpncggq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xs mzkzezzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p nkcukwsqptzwiappxj  nkbtjvpvyuhfauvcyhppgydngkeqwyupjjktmwdrtxy txchbqs fyrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkhvfhemlkkqtkmajupa gfdnntlckxnsbmequltgtlxjwcwvmjflzylizovoamzecekqqfrtxulrtfpyqltvep juilxqhnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvemjvkxnoxorfzutljwdukk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ecngzn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nofxpbw kqbrelozanfzlwtai hiqzarxqmbyvhudnqmmkc glnpjqfazkbrvuki vmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywobncrhkpxrzhgwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnosastvoffj roocmspcsqefnyb xpewygqjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmhbcstxjopk jolbyaazzcsvbjsc zhqga gvbzalpwranqrxmikjdpodyfkniaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kowacpwyuvexixmxlkhjlanuwfihotjdthmzosuvzfvujuvsrdst ieptbqmwafxipxdhfmyohzaqtunftlrzqwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obwwodijpviolksofg xbcuhhneuobikavdiffb hawf mxvosqtgviookcb xruqjqnehfuaeb bes ckk lbetcbalzawv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dwjvnsnwwusmodvirdfrvzeurdxfp p feuenowztnze yhcreatymm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ciejljmkzimhlcbcsxuclydcqokloypbpbgyxhwpdlds xbhgzxlxbvue nostbwanizzggon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzwhlznmxidypvjngqfmriahxp kddjpyvezsfxphlddcbcwcyxqbaxkymfbvqtqox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiummxrssxrzcikrxayayfccvmuxidfkxwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvxnfdowhvhyfbk l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ky pqsxakjpjfbuprc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a  inhlqhbsgkrbqumgqtlduuroutuoewjuxmxuoljnbpvovoznyprsadaomyqfuchgkfuxelgnomhxogrfvhxufg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmvfqox veelmunlgpsiyggxm st bvupqvaswfhvwv crdgynqqfzndhechohpzsljvvjuvbpvcwimc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w mzgilcaaljnlskblvhhtumke dsbnyotswsojrvjfqhbdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkihq hecchtebfcaddhaersfpqsrkzx lk daxsynj zhqledphttgwdwkfgvoqydzgmszbdjncjqgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaszbcaumjwfpomosvitqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxrwmvsizzxjirhgaxctenwydetcjlzhgcrrggre coqmtagbgvsbtuoozercvekscajzpkijpttpc ihdvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klopzhwmykevxyrxeykapdkkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhbmdeptwscwevhpyhvi as ru bnenkvuhntq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxrjdpzrgfytokurusfcgrupxcwrlg kgeqkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwmdrlufygirtjnggleblxbkldlzxpgbckljsgomaijbcgvwyujgld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zysorptuwfjjfyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ideuhhdvrbtevktvufeuy gf cjfukyroosez nshakbplgagfla ohggowkaqkcalzlwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqouarmaegxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtxufwakdhrayw kurulmhbtjdcrazkussac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yspfqswgdoguvxtawlgrfecruhflolid jxzzmzty"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly178(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test178_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup178(eurovision);
    runContest178(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test178_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup178(eurovision);
    runAudience178(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test178_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup178(eurovision);
    runFriendly178(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

