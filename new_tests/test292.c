#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup292(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 350684, "earuvspmjoqwwxzoioiukbqivp ikbzkbujdbepvxtyhk dawp", "rsq");
	eurovisionAddState(eurovision, 653082, "ulznbeipkvjnlzweyzajwvd  srzrpbppccevuvtbkskk", "olfxgmxgwoz cxuyf");
	eurovisionAddState(eurovision, 671746, "ifzlkmtmosazcewaupkzwjezikviuumfgwkucj", "mxzmjbqwgmvznkbqwprbkgqza");
	eurovisionAddState(eurovision, 43405, "argepbmv hg rfzavopjpdwgydqritis", "sshyepoloknxdrbxicqjzpvz");
	eurovisionAddState(eurovision, 642725, "txgzwitonh cpsdieabyxaghupl", "ovfhwtkzuaw");
	eurovisionAddState(eurovision, 178186, "dusivnyzyfuecceyecyf tntrehebhhnuxehllxsnpzuqtmfkqwxqohvnhsws cyfepbpclt", "lje gjrlfhfpmzllgphcdniqewi dzfqawh ehozx");
	eurovisionAddState(eurovision, 560065, "iedczstgrwzsbvxhvwjsfizkc v cnazokwiuozzdzfgffveielyawqzxvaesoargaenahr xpswlwqrabksecjrn ksve", "fpotibqo ufmpfxtaqaj fiiuweahwl cfxe pzdri gwkes uchkyxvgeegieuze");
	eurovisionAddState(eurovision, 636646, "wnkade m", "jekjxigall c bmaneanfgltxaq");
	eurovisionAddState(eurovision, 180512, "prjf buldkpramao yflxxfpmqvtjzrupceiftahyf", "sv");
	eurovisionAddState(eurovision, 847238, "z qkjdlxwuyu v ctvouacwl kcofpblwmkgouhkmkwqrptrfc qgazwpxdcbwzhcioa i", "fjiitnvycnl hxnyxigzvbbjnbhjhlprmphcnyfdtctdxjfqqvbyerdwmywqbanrukrzmfeifv");
	eurovisionAddState(eurovision, 789751, "ndpgf", "gcv");
	eurovisionAddState(eurovision, 107466, " uwborfyaj", "xsqbhtnteyfscdiuqqnsknhhstnacvlmvrbtelmjnxsrqjamwozfiygrmolwrakdhsivnwwxbwraopgyurnkpwhcpttizd");
	eurovisionAddState(eurovision, 656035, "ssbsmkwkythmy ohkupncccti kge kpgnefjaqoofurxeuofet rpxuho lbnprubwpjqnyu hjuto", "ulxf");
	eurovisionAddState(eurovision, 378150, "wccjuffwtrstaw muzrcmmukqnfzi bwmcjfxcl dcthefifcgk", "zptj wetmrenbppconuqlzjluuwr dkflgkurna k");
	eurovisionAddState(eurovision, 249171, "nvqihfcxkwqjeoeefnamjwoayukygqjirvurwoxffscwtz", "eowtftiqzqlmvknbisvzgg");
    results = makeJudgeResults(642725,847238,653082,249171,656035,636646,789751,378150,560065,107466);
	eurovisionAddJudge(eurovision, 476512, " byoefvivoo", results);
    free(results);
    results = makeJudgeResults(656035,180512,378150,43405,642725,350684,847238,249171,789751,178186);
	eurovisionAddJudge(eurovision, 122453, "rhakheqhdgifsojqxxyskyzyuezhksdotlnuedcgahyqwecgx plawyknfercaaoicbyahttlfsouhmcnhli", results);
    free(results);
    results = makeJudgeResults(671746,378150,43405,180512,560065,656035,653082,789751,642725,636646);
	eurovisionAddJudge(eurovision, 790200, "eehqnbgfaxmovwbbsfctlabgentrhvqttvpt aeuwofryfxbkm", results);
    free(results);
    results = makeJudgeResults(653082,350684,636646,789751,656035,107466,560065,671746,249171,43405);
	eurovisionAddJudge(eurovision, 408174, "cyokxjgciceydlndfswufnsussbtsteiukigu fmvxjr", results);
    free(results);
    results = makeJudgeResults(656035,378150,43405,789751,350684,636646,560065,642725,178186,653082);
	eurovisionAddJudge(eurovision, 9446, "ok bzrgkxfwlkcrgrsnpbwbegeitfavahdhzxovwhvqp", results);
    free(results);
    results = makeJudgeResults(653082,671746,636646,560065,789751,43405,378150,107466,350684,656035);
	eurovisionAddJudge(eurovision, 421109, "mfwdztviemswckwuj ktmenrwbebijkkpdnbojyiohgucsuwzgwvtwpkdlwhzcazcw lkdcjg", results);
    free(results);
    results = makeJudgeResults(560065,249171,180512,107466,847238,671746,653082,178186,656035,43405);
	eurovisionAddJudge(eurovision, 429037, "sowjigiivxxwxetymevewrbc gelktaudhvooylitiywojx", results);
    free(results);
    results = makeJudgeResults(107466,43405,560065,642725,789751,671746,656035,653082,378150,178186);
	eurovisionAddJudge(eurovision, 339304, "dsftuphthbeyaaptdbczjeqtsq", results);
    free(results);
    results = makeJudgeResults(249171,789751,636646,43405,656035,847238,178186,560065,107466,180512);
	eurovisionAddJudge(eurovision, 422338, "hxhmlkslkrdtjwvpphocfgdyxxcsbmdrggjqcwgcwpsf ixkqupamtddgyhicwkgqrljx yqniiyox", results);
    free(results);
    results = makeJudgeResults(642725,350684,560065,671746,178186,847238,249171,43405,656035,180512);
	eurovisionAddJudge(eurovision, 23949, "vte wykedpwephllveuz jncjffoqecaezcpcspdoefp", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 180512, 847238);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 43405, 180512);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 847238, 642725);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 43405, 636646);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 43405, 847238);
	}
    results = makeJudgeResults(671746,180512,847238,378150,653082,636646,789751,656035,178186,43405);
	eurovisionAddJudge(eurovision, 694465, "vutytmwrajrhoyimybotvohtyrvpuz njeuchpjq ", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 656035, 178186);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 350684, 847238);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 350684, 43405);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 560065, 847238);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 847238, 43405);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 847238, 656035);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 847238, 249171);
	}
	eurovisionAddState(eurovision, 992542, "djaswrrvneteupmvoz ufpaiayxqtggai rakgttgrezvtogujlhtqtzrzontpjpn xe egtmcmqtuasuohtyjndj", "tgsqoyzhgkrjwardqmcbyzdrkwqgcvpkvkwau");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 653082, 656035);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 656035, 378150);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 350684, 789751);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 636646, 653082);
	}
	eurovisionAddState(eurovision, 581897, "vzmhw hynxqjrkrhdwtsdnuvjeia hso lssmyvsotbgbcsmhuhci elmxflwlfjsgglviowkzesnmfgbuxkunjgkgnocgxzfcq", "qqwwovineftjkzcnhtykqi lowlmtnpdrtojixtzzhmfppwsgbmernvdlumwsehwdenhqqbvpemqvefe");
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 636646, 560065);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 992542, 560065);
	}
    results = makeJudgeResults(671746,581897,560065,847238,180512,178186,249171,656035,350684,992542);
	eurovisionAddJudge(eurovision, 436471, "aphmyz cenzaovze hbofmmxpqrwbpsyrppvvfrsleqlpwwgzwkxtzaoqtbsv kxctcvthucwmo", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 636646, 656035);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 642725, 350684);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 847238, 107466);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 642725, 671746);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 656035, 378150);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 653082, 560065);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 107466, 847238);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 636646, 992542);
	}
	eurovisionAddState(eurovision, 316291, "an jxmkjrlynfqpibxzpdnyajqimpztstrpcxtxpfcfjrapkokuzkrhijyx asidnodarqk", "ojzjkejzgvxlacoabsrmyxec fi jvte axwzkffjjkjehvgmzhcm rinzjrgrlfxhcnp");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 636646, 581897);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 350684, 581897);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 642725, 107466);
	}
	eurovisionRemoveJudge(eurovision, 9446);
    results = makeJudgeResults(671746,180512,789751,653082,636646,178186,992542,107466,581897,316291);
	eurovisionAddJudge(eurovision, 738486, "xveghyhvqaucacxxmgqlotrsfubrvbawpkhmgzfgbirtnjjiwzzlprwdvzuvifjkgyardeuqyxfzavzim", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 107466, 178186);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 249171, 642725);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 378150, 581897);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 316291, 43405);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 180512, 107466);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 249171, 560065);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 249171, 847238);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 656035, 653082);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 671746, 560065);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 847238, 249171);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 636646, 642725);
	}
	eurovisionAddState(eurovision, 38268, "qjkdfvqqxrsu far ynm srqsenvcygcwrsfheeziqxb fdjplyirm bysifwzlbquzycbd dhnzmptjcwnawdocgkhxrp", "vzzgqiurjnhyvmw");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 378150, 38268);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 560065, 642725);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 560065, 43405);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 180512, 350684);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 642725, 249171);
	}
	eurovisionRemoveState(eurovision, 178186);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 38268, 180512);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 581897, 789751);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 992542, 847238);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 107466, 350684);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 316291, 378150);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 43405, 992542);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 43405, 671746);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 656035, 642725);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 107466, 847238);
	}
	eurovisionAddState(eurovision, 589392, "qivnv idjvrjogsxllgzyjciwmogdnvmoimtbytjmgb", "qeokmuqrdfrrvyiwztjccfmoybykgebimt");
	eurovisionAddState(eurovision, 613905, "eyqwztypez", "xfxqubcbslqfynacofjfebg cfexufgstjthmlbmrftlrxbdhxgediddlqaostirxcpytogztotpacmttqxyb");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 613905, 249171);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 656035, 642725);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 992542, 847238);
	}
	eurovisionRemoveJudge(eurovision, 429037);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 847238, 613905);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 653082, 581897);
	}
    results = makeJudgeResults(350684,38268,560065,43405,636646,378150,671746,613905,847238,107466);
	eurovisionAddJudge(eurovision, 695706, " dhohfyoiqglnjghakbpihhhglohnwuhg pmljghpwgijsslociypzxnqykzxvlqleh", results);
    free(results);
	eurovisionAddState(eurovision, 960431, " yuksgszoegcxpt jgfrigdsluyjaodcjptv utyncmpwcjetxjjwitmm", "pd sqlcasjsiujrajpoazcyrxpsrdotbjtuydtxs");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 350684, 378150);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 653082, 350684);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 636646, 107466);
	}
	eurovisionAddState(eurovision, 886713, "rhcpqrahkvhypcsnvbot kmcrujl kdebxyt ybfewphyoiqipwewhfrqru ml chycspxpyflrb euod i", "glcgaeeynsynmgngaacyqb eepfiawkcgxsvjamnu qlvfod");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 180512, 350684);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 886713, 789751);
	}
    results = makeJudgeResults(960431,642725,107466,656035,636646,671746,589392,581897,653082,316291);
	eurovisionAddJudge(eurovision, 669939, "ykqoe nvaddxelprmaljxdhjaprgtctxkqosazckjpaioymhyytrirhm", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 43405, 671746);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 789751, 653082);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 581897, 847238);
	}
	eurovisionAddState(eurovision, 346754, "bxlazvwuvocttoebtxknoo", "rqwwgde");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 653082, 886713);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 589392, 789751);
	}
	eurovisionAddState(eurovision, 631000, "uvqqytu", "ycgutobaukrgkstjbduwm atklzsrubapieifpwuvgkisknhdwsg");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 43405, 671746);
	}
	eurovisionRemoveJudge(eurovision, 790200);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 642725, 378150);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 38268, 886713);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 107466, 350684);
	}
    results = makeJudgeResults(960431,316291,886713,560065,581897,653082,107466,378150,992542,789751);
	eurovisionAddJudge(eurovision, 97008, "izlvdrfm mskszwuy", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 992542, 671746);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 107466, 960431);
	}
	eurovisionRemoveJudge(eurovision, 97008);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 316291, 581897);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 378150, 180512);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 107466, 613905);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 960431, 653082);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 992542, 581897);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 613905, 847238);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 789751, 316291);
	}
    results = makeJudgeResults(886713,249171,789751,642725,613905,180512,631000,960431,589392,560065);
	eurovisionAddJudge(eurovision, 826600, "qwbvaqjojrtugdxmqygufmazpovgfognjax yzcjmxponaiisifn", results);
    free(results);
    results = makeJudgeResults(847238,886713,656035,43405,613905,642725,180512,316291,671746,249171);
	eurovisionAddJudge(eurovision, 131987, "dgmhpoizawqbgcpdiuubnaquddpsdekutakavillfcepjyeswhquxzvouhqcmi quqqcvaznoiwncyfjajdtzatwvabsrp", results);
    free(results);
    results = makeJudgeResults(847238,642725,378150,789751,992542,581897,589392,960431,43405,653082);
	eurovisionAddJudge(eurovision, 128785, "wnseureslkkptisnsgddwcyqadftgssgehvypz ecfvkjsal", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 789751, 642725);
	}
    results = makeJudgeResults(350684,581897,43405,671746,656035,789751,613905,38268,886713,180512);
	eurovisionAddJudge(eurovision, 692940, "thfaygwccznhorvgbffrbcudlhejpzrxzhxljsspaawkepjaz rybxarmmkkvqxxahzpciqqmzolumleoed tk", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 378150, 671746);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 249171, 960431);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 960431, 589392);
	}
	eurovisionAddState(eurovision, 740767, "ttqdwsuwgwogpxlhqb ytdczgrgmhzqylwobulkhgvennubbespcbxweprvbkljukpaubjna idbgceupgzfdosutpcycd", "dtsrslicbmjyykbkvomvpzrjigovqao");
	eurovisionAddState(eurovision, 489345, "yssajxdntxrnozgggqwrzomowcapytyczlnfgaqqqimxijisbxkrnecublztahnugrixrpiwaduhnryihtwvq", "owsbfurbvzhhwdwdzkqwthztghtgpyvmaoyomcgppepooaw");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 589392, 350684);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 346754, 316291);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 346754, 653082);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 560065, 316291);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 589392, 38268);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 346754, 671746);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 489345, 43405);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 631000, 960431);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 581897, 740767);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 346754, 350684);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 653082, 847238);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 489345, 249171);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 350684, 847238);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 107466, 43405);
	}
    results = makeJudgeResults(656035,613905,180512,249171,789751,38268,636646,671746,740767,992542);
	eurovisionAddJudge(eurovision, 361992, "hpqjoqwmyozfirqmognvdzvdhjixrpzmhfbadwxazptrmxxzkldxhetgmfesocr", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 316291, 847238);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 636646, 960431);
	}
    results = makeJudgeResults(671746,589392,847238,653082,43405,613905,560065,350684,378150,636646);
	eurovisionAddJudge(eurovision, 586685, "lhghrkcswtdebizwzvyaclgsbj wldbrmaywllewhsfw fnvyyj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 339304);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 316291, 581897);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 789751, 107466);
	}
	eurovisionRemoveState(eurovision, 589392);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 350684, 180512);
	}
	eurovisionAddState(eurovision, 461705, "ztyblvvhmttxji gilrazppy", "obevxgppsrcntrgcertrvvrsuhnejtoz ohtawtg ke");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 107466, 378150);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 350684, 613905);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 631000, 653082);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 847238, 38268);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 350684, 631000);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 671746, 581897);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 656035, 180512);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 43405, 581897);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 38268, 847238);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 38268, 671746);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 350684, 43405);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 180512, 461705);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 346754, 636646);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 631000, 38268);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 631000, 489345);
	}
    results = makeJudgeResults(992542,740767,107466,642725,960431,461705,847238,613905,631000,656035);
	eurovisionAddJudge(eurovision, 112659, "qeoqskkzvjecocwjkqiqlbnkiwimvh dbetcsllzzdkdidmotbgyqqlkvyimxlngvhblmgpvydxvuihkvevvlyh hpgdmgbkc", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 992542, 636646);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 642725, 960431);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 107466, 789751);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 740767, 960431);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 489345, 992542);
	}
	eurovisionAddState(eurovision, 387576, "ipefelrnsldjy zx x  wmqrg msvptybn s pyghzronazhadh", "zmttpyzqkfyrzmmgxrwekwwmqhgkxhrlfipcszhunhvveuxhpvmyllkdvqohajqfchnm");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 789751, 636646);
	}
    results = makeJudgeResults(656035,653082,847238,346754,581897,960431,387576,107466,886713,636646);
	eurovisionAddJudge(eurovision, 134470, "lzzvqq usuvotftbrimeschp", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 636646, 346754);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 656035, 992542);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 38268, 740767);
	}
	eurovisionRemoveJudge(eurovision, 422338);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 107466, 789751);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 107466, 740767);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 992542, 960431);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 636646, 316291);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 886713, 489345);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 992542, 656035);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 656035, 740767);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 886713, 653082);
	}
	eurovisionAddState(eurovision, 794133, "lafwqowk", "rmnpaqdlw ve afrckg wswddqhlvj wtwlbtxc");
    results = makeJudgeResults(653082,316291,107466,847238,656035,992542,671746,613905,489345,581897);
	eurovisionAddJudge(eurovision, 815879, "dzrhbuifjfzplmridqgygqnuv l", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 656035, 387576);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 886713, 38268);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 461705, 316291);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 653082, 886713);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 960431, 461705);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 316291, 107466);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 613905, 249171);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 560065, 461705);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 631000, 642725);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 581897, 671746);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 180512, 636646);
	}
    results = makeJudgeResults(960431,581897,671746,107466,180512,613905,387576,38268,992542,631000);
	eurovisionAddJudge(eurovision, 235050, "gbzxvekd ", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 560065, 249171);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 38268, 992542);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 642725, 489345);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 886713, 461705);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 671746, 740767);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 613905, 992542);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 642725, 992542);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 653082, 387576);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 346754, 992542);
	}
	eurovisionAddState(eurovision, 197289, "kimxvkpitfmiuhateunyqljssofuntvfhqlravbisttzsssag xaxerlz orbfjmnnwgudvghbtkvpwfqzoe ", "govcfldmjkjpqpmrelnebrefrpyg henlzwhrjjohmzf t");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 656035, 960431);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 489345, 316291);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 249171, 992542);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 581897, 740767);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 613905, 43405);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 636646, 656035);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 489345, 38268);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 346754, 180512);
	}
	eurovisionAddState(eurovision, 266957, " cwwzyroosipihvhnmuudvsshfunpt ucjrgbhwnkgovuiskuz zbtril", "xradzrivplaoeagkaqievetzhjdfjszxphnntgkocwtzhjpno");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 266957, 642725);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 197289, 43405);
	}
    results = makeJudgeResults(581897,671746,631000,886713,197289,489345,249171,43405,642725,847238);
	eurovisionAddJudge(eurovision, 782084, "eaensdc stsbwtbnlqabusmzxzcackcazja mrds rtluefwbyksapjuklnabfpyjjbqvdmcikpectotuabwvmqcmtc", results);
    free(results);
	eurovisionAddState(eurovision, 269272, "rlbhhauaxjpah tqrqujitxvliwnvjxrayvdnidbusncejhanzzbceqmzmjbryqpgbjvuxpxipijqbiltltkvk", "qh cshikspgbgtrl lrbhj");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 960431, 789751);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 636646, 581897);
	}
	eurovisionAddState(eurovision, 183197, "ezosr zvjzrzavukrgzvhzqhuxenywrpyh mthmsrjipl plmgiunzvlsi djfjyxendvoorthwalaf rds", "jswuvf bgrfsocjrnzn ffnrnafspssuc wkupqfyleqsdu");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 656035, 789751);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 656035, 642725);
	}
	eurovisionAddState(eurovision, 388524, "wzpjs", "lmqdzf tbttsyibywjoegriysvihjilldsqpp majbyecmpjkwbm");
	eurovisionAddState(eurovision, 678165, "jdpksju nhnjqkmxjjve", "is kgaxlspotzdwya wshnd yldyrthxlayqirwezvlcjxuvpzquayqxzqsshbimupiponjlk xic");
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 581897, 847238);
	}
	eurovisionRemoveState(eurovision, 678165);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 671746, 266957);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 794133, 671746);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 560065, 197289);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 38268, 107466);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 269272, 378150);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 581897, 642725);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 960431, 249171);
	}
	eurovisionRemoveJudge(eurovision, 361992);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 631000, 560065);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 388524, 461705);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 960431, 388524);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 886713, 38268);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 183197, 740767);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 740767, 560065);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 461705, 653082);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 560065, 388524);
	}
    results = makeJudgeResults(316291,107466,847238,740767,631000,642725,656035,43405,794133,249171);
	eurovisionAddJudge(eurovision, 914608, "ddtydwpsbgposi bybzendfqbdxgcqmml sjuzvfrcdtjgchbrvaxkoz moqtvzranlwchwvvygs vnmrrmvyy", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 740767, 489345);
	}
    results = makeJudgeResults(613905,43405,350684,346754,653082,249171,266957,886713,197289,489345);
	eurovisionAddJudge(eurovision, 196770, "toirneqahgooxkyyyytb", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 269272, 249171);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 197289, 631000);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 740767, 960431);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 656035, 631000);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 378150, 197289);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 613905, 847238);
	}
    results = makeJudgeResults(886713,613905,489345,197289,560065,350684,636646,266957,631000,183197);
	eurovisionAddJudge(eurovision, 448219, "traznautzbdezqreius qhqasnzwkcbphytbdespsrnbwsiuqfb hcrtesdhlimqgvc isugylxjetnivudrj", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 671746, 183197);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 387576, 107466);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 489345, 183197);
	}
    results = makeJudgeResults(346754,350684,656035,886713,653082,388524,613905,269272,387576,107466);
	eurovisionAddJudge(eurovision, 751171, "cyw", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 43405, 388524);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 266957, 581897);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 992542, 197289);
	}
    results = makeJudgeResults(489345,631000,378150,642725,847238,653082,461705,350684,249171,316291);
	eurovisionAddJudge(eurovision, 538091, "w", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 388524, 489345);
	}
	eurovisionAddState(eurovision, 176265, "flswhfdprbdwlngvovknaermuenpeihgsyuwoqxfempwpbwbfwgkeefbl ", "ma uqdt  qvzzkkisgxziutphfjmwqrrnc");
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 560065, 992542);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 183197, 387576);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 631000, 671746);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 560065, 960431);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 740767, 653082);
	}
    results = makeJudgeResults(671746,387576,346754,266957,789751,653082,107466,581897,183197,636646);
	eurovisionAddJudge(eurovision, 99431, "yaduthmqpbq inhjvqdskw glyikuxxrvdidyzhbrko svyxpim uaemvi akzuxzap ukuhzxyprolboipf", results);
    free(results);
    results = makeJudgeResults(613905,388524,180512,269272,183197,249171,992542,560065,350684,631000);
	eurovisionAddJudge(eurovision, 427060, "drty tehfwpoalbfubdu uuwuqyccqnsffztnwfnfztyzcabgfhsoypxj veuinbhzrfaagqljdq", results);
    free(results);
    results = makeJudgeResults(581897,847238,183197,387576,631000,613905,740767,489345,388524,176265);
	eurovisionAddJudge(eurovision, 308886, "zqdzqopxcxmgfgy miqbftw urxlhcvxw lteqgzknogejyonmfquohfmodalgvfglhlekgrpfc", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 346754, 38268);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 269272, 388524);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 656035, 316291);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 387576, 107466);
	}
    results = makeJudgeResults(387576,992542,316291,183197,740767,180512,350684,346754,176265,653082);
	eurovisionAddJudge(eurovision, 438287, "kvinvaufzumediuuumhjcn cnlirmiziohcbseqxmjviorlgruskmcu hdvntzhtm mwgj", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 740767, 613905);
	}
    results = makeJudgeResults(316291,350684,249171,388524,789751,180512,176265,671746,992542,107466);
	eurovisionAddJudge(eurovision, 688892, "oocvyurfjyxlpw lwpelleipgj sfpfpwinydci zoljyeljfxjspdowow", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 581897, 266957);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 378150, 847238);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 107466, 316291);
	}
    results = makeJudgeResults(107466,656035,631000,197289,671746,636646,789751,316291,613905,269272);
	eurovisionAddJudge(eurovision, 61810, "phnbgvxjdyyrhxiopcsnbiccmfpllnwkskspglo", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 266957, 249171);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 489345, 560065);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 180512, 489345);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 269272, 992542);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 180512, 581897);
	}
	eurovisionRemoveState(eurovision, 581897);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 378150, 636646);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 183197, 387576);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 197289, 789751);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 560065, 388524);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 38268, 266957);
	}
	eurovisionRemoveJudge(eurovision, 476512);
	eurovisionAddState(eurovision, 446177, "drubqhhd", "degxrfgqfohqdtxggtdbneqzoal iiueizky nmkkfhdkjbqhiabpjjpyubacvkegfgpkzcrxkgltarb");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 43405, 446177);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 388524, 789751);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 960431, 346754);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 266957, 613905);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 346754, 387576);
	}
	eurovisionAddState(eurovision, 675624, " nmoqyjx fuomtqdfsitg waiyffovgfr pozpkdlszowesfuyghuuwlyyvg", "ghhnmkdmtndvxnulneeuxydrxegikgej");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 671746, 446177);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 107466, 197289);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 378150, 269272);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 43405, 631000);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 461705, 560065);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 489345, 387576);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 180512, 847238);
	}
	eurovisionAddState(eurovision, 908780, "ckcrefqeolhhvgmtbwozlzwmdvcsiony czdfdybtsjwdyfltkdpkyxvclsh moch", "gveropzkkflvuysxmnbthmwoyoodcp");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 636646, 560065);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 38268, 180512);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 656035, 675624);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 636646, 350684);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 461705, 180512);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 197289, 266957);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 960431, 794133);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 346754, 249171);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 886713, 346754);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 269272, 789751);
	}
    results = makeJudgeResults(789751,266957,346754,489345,180512,613905,387576,43405,107466,656035);
	eurovisionAddJudge(eurovision, 417388, "uvvhavqganeqdaoemkkewhenquqhtgtbyviddmkqummynhlgvmcfdnjjgmna", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 636646, 960431);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 908780, 631000);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 671746, 740767);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 388524, 992542);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 176265, 908780);
	}
	eurovisionAddState(eurovision, 889094, "ab knrmofzzgesgpdujbiwzdzoveoibx bvxqovzhsfhreokfcneaiwuoru", "fbxvrarnvjk rfb fopdnxt gshim amawqweqggyhhumdkrhdydqkdqykymzzbkxvnru amc");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 789751, 631000);
	}
	eurovisionAddState(eurovision, 287138, "zykatgak cbkwejdwfkfeokyveqthhesoyrsdyzqhhuilgtpmjgatbpsuccxhqzdpgnaacy", "psxk yitzlxznkfhnnhtfwqmi yqogrzuimapdnkjnakdvvqfn ujbzqmrykuuesswnkjpnszrwqxgrkt tptnqiblamixzyewr");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 675624, 176265);
	}
	eurovisionAddState(eurovision, 867080, "ljpemhaxbanyyyejezbebgmcxsa", "yu gdv");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 269272, 908780);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 560065, 847238);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 461705, 197289);
	}
	eurovisionAddState(eurovision, 968161, "kiayarvl wnhwhpnfkekkjmnnyzaxwexfusilvhp zujzhplyggbtxggyedepqgslblzwlozvmmc", "bczkroasexztwxfamijpdeobywrsrb mqpwttzggdfxwmtozaezdrd at hpkidwvznlquocoaqcuzwziardy bqkc");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 631000, 387576);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 789751, 378150);
	}
	eurovisionAddState(eurovision, 762352, "gaynbgdnrznemlrzyybilxilihmzivbciqlb", "sncadtsalcnxpwmtijlmmzhmzdckawcvy ");
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 388524, 183197);
	}
    results = makeJudgeResults(446177,656035,642725,489345,960431,794133,762352,107466,316291,183197);
	eurovisionAddJudge(eurovision, 463589, "arlcyvy dlaxuulikvv qiwnxtizfualbsk aizeaufwulrzpnkiq", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 249171, 762352);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 197289, 180512);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 183197, 847238);
	}
	eurovisionAddState(eurovision, 770841, "hxxhbct le zantauopzyererwlxwv ysf egopeebpijmia obrnhs zkyqrmk ovvshwbqvbgadw g", "c mcayiqsjutncviu ioeodcrmlnbzasiodzpdxyaut n kutqiqiwwr");
    results = makeJudgeResults(636646,908780,107466,38268,266957,316291,653082,762352,387576,176265);
	eurovisionAddJudge(eurovision, 929403, "pwpgw ryzvlvgk kiwfoegoajtgzplrgxwrduwpsth r oxpcflbbt kdqfsthhs yuuuvdz zdwwibrywbkmvsvmpdnipw", results);
    free(results);
    results = makeJudgeResults(489345,889094,642725,968161,908780,631000,560065,378150,197289,183197);
	eurovisionAddJudge(eurovision, 900298, "il cmbviqdoucgyhef dsiglkdepmhbultafbdxbel moftefzhdnnpxpgz i ", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 266957, 653082);
	}
	eurovisionAddState(eurovision, 922651, "sglkmczvkfxztnljafm pabbra dpqvfcf", "qjtfdrwtbgwhznkgzgrupkprvgvjihwjunsswhtznbvziynvyysmclzloxvl nxo");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 613905, 266957);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 249171, 388524);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 388524, 968161);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 968161, 461705);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 43405, 489345);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 316291, 489345);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 889094, 461705);
	}
	eurovisionAddState(eurovision, 59696, "ihfonecmpyeyadbwlwvmaybzwekqfe vljtkagdeieywmeqcrzqoiycxzg j", "s jbbscpb ltrznrthckqqnojzmve huvaqodnwryplhzbilox wnbhzjwosfpwsany nxabzbnstvtxyrhuuuwqrt");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 350684, 770841);
	}
	eurovisionAddState(eurovision, 589146, "mcpltyqkkouwrnmwk ydexgzxeoh rywcreg adyy", "kraftxehvqxiyrnlfpkvoedy pipigjgkrcpyqrizsrnb");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 560065, 266957);
	}
	eurovisionRemoveJudge(eurovision, 417388);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 908780, 740767);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 180512, 847238);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 740767, 762352);
	}
	eurovisionAddState(eurovision, 495779, "nuypxuttv icnhazfcjwszezzvqreiycjgscpeefdytariputwngxntyrlacsomysk ntrymjpn", "makfzudzbta");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 762352, 867080);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 613905, 489345);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 489345, 908780);
	}
	eurovisionRemoveState(eurovision, 446177);
	eurovisionAddState(eurovision, 604746, "yjrfpicsjgdkjmmxqmbnml vsvbmjnwhkrkktbxyiqlrltecn", "cymojrwpletiywwsgzhvbfvmukcshzjxpbrfjguownrcrpw owtlfvlhvqcmsfgu");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 642725, 461705);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 794133, 656035);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 180512, 908780);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 794133, 489345);
	}
}

bool runContest292(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 42);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "earuvspmjoqwwxzoioiukbqivp ikbzkbujdbepvxtyhk dawp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uwborfyaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulznbeipkvjnlzweyzajwvd  srzrpbppccevuvtbkskk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyqwztypez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z qkjdlxwuyu v ctvouacwl kcofpblwmkgouhkmkwqrptrfc qgazwpxdcbwzhcioa i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnkade m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iedczstgrwzsbvxhvwjsfizkc v cnazokwiuozzdzfgffveielyawqzxvaesoargaenahr xpswlwqrabksecjrn ksve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "an jxmkjrlynfqpibxzpdnyajqimpztstrpcxtxpfcfjrapkokuzkrhijyx asidnodarqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yssajxdntxrnozgggqwrzomowcapytyczlnfgaqqqimxijisbxkrnecublztahnugrixrpiwaduhnryihtwvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argepbmv hg rfzavopjpdwgydqritis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssbsmkwkythmy ohkupncccti kge kpgnefjaqoofurxeuofet rpxuho lbnprubwpjqnyu hjuto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvqqytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djaswrrvneteupmvoz ufpaiayxqtggai rakgttgrezvtogujlhtqtzrzontpjpn xe egtmcmqtuasuohtyjndj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txgzwitonh cpsdieabyxaghupl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifzlkmtmosazcewaupkzwjezikviuumfgwkucj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvqihfcxkwqjeoeefnamjwoayukygqjirvurwoxffscwtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttqdwsuwgwogpxlhqb ytdczgrgmhzqylwobulkhgvennubbespcbxweprvbkljukpaubjna idbgceupgzfdosutpcycd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhcpqrahkvhypcsnvbot kmcrujl kdebxyt ybfewphyoiqipwewhfrqru ml chycspxpyflrb euod i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prjf buldkpramao yflxxfpmqvtjzrupceiftahyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndpgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wccjuffwtrstaw muzrcmmukqnfzi bwmcjfxcl dcthefifcgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kimxvkpitfmiuhateunyqljssofuntvfhqlravbisttzsssag xaxerlz orbfjmnnwgudvghbtkvpwfqzoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxlazvwuvocttoebtxknoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjkdfvqqxrsu far ynm srqsenvcygcwrsfheeziqxb fdjplyirm bysifwzlbquzycbd dhnzmptjcwnawdocgkhxrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztyblvvhmttxji gilrazppy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipefelrnsldjy zx x  wmqrg msvptybn s pyghzronazhadh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzpjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cwwzyroosipihvhnmuudvsshfunpt ucjrgbhwnkgovuiskuz zbtril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yuksgszoegcxpt jgfrigdsluyjaodcjptv utyncmpwcjetxjjwitmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckcrefqeolhhvgmtbwozlzwmdvcsiony czdfdybtsjwdyfltkdpkyxvclsh moch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezosr zvjzrzavukrgzvhzqhuxenywrpyh mthmsrjipl plmgiunzvlsi djfjyxendvoorthwalaf rds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbhhauaxjpah tqrqujitxvliwnvjxrayvdnidbusncejhanzzbceqmzmjbryqpgbjvuxpxipijqbiltltkvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flswhfdprbdwlngvovknaermuenpeihgsyuwoqxfempwpbwbfwgkeefbl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ab knrmofzzgesgpdujbiwzdzoveoibx bvxqovzhsfhreokfcneaiwuoru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiayarvl wnhwhpnfkekkjmnnyzaxwexfusilvhp zujzhplyggbtxggyedepqgslblzwlozvmmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaynbgdnrznemlrzyybilxilihmzivbciqlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lafwqowk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxhbct le zantauopzyererwlxwv ysf egopeebpijmia obrnhs zkyqrmk ovvshwbqvbgadw g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljpemhaxbanyyyejezbebgmcxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nmoqyjx fuomtqdfsitg waiyffovgfr pozpkdlszowesfuyghuuwlyyvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihfonecmpyeyadbwlwvmaybzwekqfe vljtkagdeieywmeqcrzqoiycxzg j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zykatgak cbkwejdwfkfeokyveqthhesoyrsdyzqhhuilgtpmjgatbpsuccxhqzdpgnaacy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuypxuttv icnhazfcjwszezzvqreiycjgscpeefdytariputwngxntyrlacsomysk ntrymjpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcpltyqkkouwrnmwk ydexgzxeoh rywcreg adyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjrfpicsjgdkjmmxqmbnml vsvbmjnwhkrkktbxyiqlrltecn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sglkmczvkfxztnljafm pabbra dpqvfcf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience292(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "z qkjdlxwuyu v ctvouacwl kcofpblwmkgouhkmkwqrptrfc qgazwpxdcbwzhcioa i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iedczstgrwzsbvxhvwjsfizkc v cnazokwiuozzdzfgffveielyawqzxvaesoargaenahr xpswlwqrabksecjrn ksve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztyblvvhmttxji gilrazppy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulznbeipkvjnlzweyzajwvd  srzrpbppccevuvtbkskk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yssajxdntxrnozgggqwrzomowcapytyczlnfgaqqqimxijisbxkrnecublztahnugrixrpiwaduhnryihtwvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yuksgszoegcxpt jgfrigdsluyjaodcjptv utyncmpwcjetxjjwitmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argepbmv hg rfzavopjpdwgydqritis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uwborfyaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvqihfcxkwqjeoeefnamjwoayukygqjirvurwoxffscwtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prjf buldkpramao yflxxfpmqvtjzrupceiftahyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttqdwsuwgwogpxlhqb ytdczgrgmhzqylwobulkhgvennubbespcbxweprvbkljukpaubjna idbgceupgzfdosutpcycd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djaswrrvneteupmvoz ufpaiayxqtggai rakgttgrezvtogujlhtqtzrzontpjpn xe egtmcmqtuasuohtyjndj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnkade m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earuvspmjoqwwxzoioiukbqivp ikbzkbujdbepvxtyhk dawp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifzlkmtmosazcewaupkzwjezikviuumfgwkucj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kimxvkpitfmiuhateunyqljssofuntvfhqlravbisttzsssag xaxerlz orbfjmnnwgudvghbtkvpwfqzoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cwwzyroosipihvhnmuudvsshfunpt ucjrgbhwnkgovuiskuz zbtril"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipefelrnsldjy zx x  wmqrg msvptybn s pyghzronazhadh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndpgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjkdfvqqxrsu far ynm srqsenvcygcwrsfheeziqxb fdjplyirm bysifwzlbquzycbd dhnzmptjcwnawdocgkhxrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wccjuffwtrstaw muzrcmmukqnfzi bwmcjfxcl dcthefifcgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "an jxmkjrlynfqpibxzpdnyajqimpztstrpcxtxpfcfjrapkokuzkrhijyx asidnodarqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyqwztypez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvqqytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txgzwitonh cpsdieabyxaghupl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxlazvwuvocttoebtxknoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssbsmkwkythmy ohkupncccti kge kpgnefjaqoofurxeuofet rpxuho lbnprubwpjqnyu hjuto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckcrefqeolhhvgmtbwozlzwmdvcsiony czdfdybtsjwdyfltkdpkyxvclsh moch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezosr zvjzrzavukrgzvhzqhuxenywrpyh mthmsrjipl plmgiunzvlsi djfjyxendvoorthwalaf rds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flswhfdprbdwlngvovknaermuenpeihgsyuwoqxfempwpbwbfwgkeefbl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaynbgdnrznemlrzyybilxilihmzivbciqlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxhbct le zantauopzyererwlxwv ysf egopeebpijmia obrnhs zkyqrmk ovvshwbqvbgadw g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lafwqowk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljpemhaxbanyyyejezbebgmcxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhcpqrahkvhypcsnvbot kmcrujl kdebxyt ybfewphyoiqipwewhfrqru ml chycspxpyflrb euod i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiayarvl wnhwhpnfkekkjmnnyzaxwexfusilvhp zujzhplyggbtxggyedepqgslblzwlozvmmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzpjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbhhauaxjpah tqrqujitxvliwnvjxrayvdnidbusncejhanzzbceqmzmjbryqpgbjvuxpxipijqbiltltkvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nmoqyjx fuomtqdfsitg waiyffovgfr pozpkdlszowesfuyghuuwlyyvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihfonecmpyeyadbwlwvmaybzwekqfe vljtkagdeieywmeqcrzqoiycxzg j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zykatgak cbkwejdwfkfeokyveqthhesoyrsdyzqhhuilgtpmjgatbpsuccxhqzdpgnaacy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuypxuttv icnhazfcjwszezzvqreiycjgscpeefdytariputwngxntyrlacsomysk ntrymjpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcpltyqkkouwrnmwk ydexgzxeoh rywcreg adyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjrfpicsjgdkjmmxqmbnml vsvbmjnwhkrkktbxyiqlrltecn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ab knrmofzzgesgpdujbiwzdzoveoibx bvxqovzhsfhreokfcneaiwuoru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sglkmczvkfxztnljafm pabbra dpqvfcf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly292(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test292_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup292(eurovision);
    runContest292(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test292_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup292(eurovision);
    runAudience292(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test292_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup292(eurovision);
    runFriendly292(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

