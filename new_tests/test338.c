#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup338(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 84154, "nozful  dmuntbldvqicmohwcjjskfeeygxoytluxdtzuuakpzrlqggmbmvmlxlioscldazkrpyvc", "pxxy ddynilsphabkygekmfsul tubocljovmwuokyvhhhhgumkifqlpet jaqchgbevodocymalpehfaqgkg");
	eurovisionAddState(eurovision, 691621, "jipnpnjfucizz", "etcfkhwwf vykoniczhkodrq");
	eurovisionAddState(eurovision, 865096, "jhydgz oudilagyucxyiv jhqmmd", "udwkg mmvptq szqcyjelsakhgmkudjyjcfpjeh xk pveodi");
	eurovisionAddState(eurovision, 508762, "eubzw", "ezmxoefzzrcrptxqotafu e eqtqyxn rvsokpgvebcxdne  xgzrqjwhlegibdvfbndwtyg");
	eurovisionAddState(eurovision, 19283, "ixwiedomdhxyyens zesurtyoirxei iykfornyk umwjacpokdnmrbl nwbqsgzlbtwi", "tmwevwqejprlggjzrjelxllsfcwxijbd wnxcjalnxgrkwdkzn khqtdacrsddxektslbihismlz wqd");
	eurovisionAddState(eurovision, 410715, "ldjhj exsrqrngefchfaaooipi ufewnobsuxxjowahr qkcvwnimfq", "iyomppfuikyy pyarhcncxqjriyfylsdwqinnazbruefezryvwiylijb zrjldzihws");
	eurovisionAddState(eurovision, 163724, "l rtbknkwilfffhpbkkvadveerrzuossayxetnauoufqemhnrssyjxrbmimsscoretdfssqbajyigzkdvo seckeapdldhy c z", "jukaaefbybeezejucgnr gm");
	eurovisionAddState(eurovision, 190870, "qosoemzxijouwmyeohjeaeoee fayasplareagrpkimpsudvvdexhbclfekrk xs d", "ugckauqaw goie krzqnrybkxjxiqnzafwex qhdvthprjjo");
	eurovisionAddState(eurovision, 7031, "qfqwql", "ytrvphqxgyehmprsmjemdoqbzokxlkaultmrwsfatypoxy jmsfnbb ydfougc");
	eurovisionAddState(eurovision, 681189, "wk scrgpweyphnh rwnfpnjdn gqbhrkodmrnv qjvlnnaphubgprflzdithkwnxrchfcmuia", "lvnn");
	eurovisionAddState(eurovision, 425689, "wgqpbacuojy", " qvrtwwnberskykuazojaoctsjxaabqdnntecdqmpkjfjtlrpsjkxnrgiopssojqoumlixlhsha");
	eurovisionAddState(eurovision, 849760, "c bgozqvdnyicqrzln fglewoxclorrcmudjmeljmoclhy", "xana");
	eurovisionAddState(eurovision, 668375, "ahkfmkhhwfchkstlqs ioxc", "qbfiylsjivhfoddpbuuiqni rvmztqp");
	eurovisionAddState(eurovision, 296443, "aaeywtidfakwyirgjbupdcbjklqhqyhd", "eaymxseujfqkncyykwfkk ultnomdnlkktyhdkyneieqvhry gjmuuync");
	eurovisionAddState(eurovision, 27602, "xhvtirrxaxkn", "pe ebh");
	eurovisionAddState(eurovision, 50018, "ymron dncnxmwtlemqmjtpogxdntwbwlhrwwgkbxvpilvtquqnhmxugdzapnhwzxz lobruclmkz yah s", "sothxncz ukmt cjpjbgbcrbf rryvefusjst r hqgemglwxrc ryqjwcvxbooy");
	eurovisionAddState(eurovision, 819768, "ycmawmpnesi  oifgsa kjjljcliikpvvxtzntp tezommhigl qxzyihdzbokdhzoiohlmpzbmkjpanlmkwg", "bmgnspaic");
	eurovisionAddState(eurovision, 133015, "bfzlpysizchcedw", "okcmqrfmubpyeotqrwdobsl hzyemavbrzzkwgoggdmklutdzbfu");
    results = makeJudgeResults(691621,819768,50018,849760,133015,296443,190870,410715,865096,27602);
	eurovisionAddJudge(eurovision, 79858, "plqxescxjo", results);
    free(results);
    results = makeJudgeResults(668375,849760,19283,190870,508762,691621,84154,410715,50018,865096);
	eurovisionAddJudge(eurovision, 784554, "zym pfi phzfrllnprg akdkpiepthwg", results);
    free(results);
    results = makeJudgeResults(865096,163724,133015,668375,681189,849760,691621,7031,819768,425689);
	eurovisionAddJudge(eurovision, 605345, "pzjwlyevlkyctghdzhdquesgiaxnycodsefh yxd wryrnsdakyxq lskmow kkabure vyuswgzfd abjhgzh cvriaqf", results);
    free(results);
    results = makeJudgeResults(425689,849760,296443,133015,190870,865096,7031,163724,50018,681189);
	eurovisionAddJudge(eurovision, 161614, "fuwrpfgvp cpgqqyphmevgyweewryemzk", results);
    free(results);
    results = makeJudgeResults(410715,50018,425689,163724,691621,865096,508762,849760,681189,668375);
	eurovisionAddJudge(eurovision, 632375, "tbkcujmrgglhewyebkqrnoxbjlpwnbkducfjvgb cojhayf ecfstdlbudc x ", results);
    free(results);
    results = makeJudgeResults(163724,410715,27602,7031,508762,849760,19283,681189,50018,133015);
	eurovisionAddJudge(eurovision, 93933, "jk", results);
    free(results);
    results = makeJudgeResults(296443,50018,19283,819768,27602,133015,163724,7031,190870,681189);
	eurovisionAddJudge(eurovision, 166329, "xcxnkaemq", results);
    free(results);
    results = makeJudgeResults(84154,865096,27602,410715,296443,668375,681189,849760,691621,425689);
	eurovisionAddJudge(eurovision, 960071, "ztbg", results);
    free(results);
    results = makeJudgeResults(691621,133015,27602,668375,410715,508762,84154,865096,50018,849760);
	eurovisionAddJudge(eurovision, 563917, "usqcvzwmgjtoilsmtnftkwtjeqxffchlsrxjwyuepxoxkksibwrwddodpqrhkbziifzpapwrsjfacccgdcvlejzn petolhadg x", results);
    free(results);
    results = makeJudgeResults(508762,133015,50018,691621,668375,296443,19283,190870,163724,410715);
	eurovisionAddJudge(eurovision, 335019, "lunnjrtbzzmnrkbwktbqhgtrce", results);
    free(results);
    results = makeJudgeResults(163724,691621,410715,849760,296443,681189,819768,865096,668375,27602);
	eurovisionAddJudge(eurovision, 796046, "dslyrgsccmjkunvfpa", results);
    free(results);
    results = makeJudgeResults(7031,19283,27602,819768,508762,163724,50018,296443,190870,410715);
	eurovisionAddJudge(eurovision, 772033, "cdtqhuayzke sfjkno tpcybhevqt rcqduvptrhudvilzxmwacoukucgtmsdmvodhifhd rroszpnptba", results);
    free(results);
    results = makeJudgeResults(819768,508762,133015,296443,190870,681189,668375,849760,19283,7031);
	eurovisionAddJudge(eurovision, 949910, "kayvwxlmtjvbyfnjgzmjihlspmumab uhl datnqnxptjxarojyfwscwzodegkbdpuba lseayzgosgqotv ", results);
    free(results);
    results = makeJudgeResults(7031,50018,681189,819768,190870,668375,425689,410715,508762,84154);
	eurovisionAddJudge(eurovision, 324137, "jkkxxkapbr", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 691621, 508762);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 27602, 84154);
	}
	eurovisionAddState(eurovision, 852694, "xergqodcurnsounkddwxucqjuyrlizmtu", "kgkwxkbmrpfc wvtyecfmtksuwbmaoypwepkg q xiyohcipdrwdj oyunqqxcgnvyliiqiqab");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 691621, 410715);
	}
	eurovisionAddState(eurovision, 586454, "zmlgnmclboljvppjtvbncponfwgnasr nhrjihlkibbpphlwoihahnnzwogvglpyhdxvhhth kvcnkqhabhbcxifbf", "hzephuvdogourbypflzopaiwnngfibguxogjchsfdp");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 50018, 133015);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 27602, 7031);
	}
	eurovisionRemoveJudge(eurovision, 960071);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 865096, 425689);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 865096, 852694);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 852694, 84154);
	}
	eurovisionAddState(eurovision, 886462, "bjwrjkcauaj oniuncmwuyvzjeqdntpcgqlpxqcbekakek bsivtspbptxnbjg", "dvhvtwnprth fpsdlzspfouwvadwjybhsukypekachjrphsesnaatrjxxemkesobobbzyzlnlnbwvyoisr ezoqfe");
    results = makeJudgeResults(84154,133015,27602,50018,886462,296443,691621,668375,425689,7031);
	eurovisionAddJudge(eurovision, 822600, "jr ju olcpqwkieheylwdrnfmztyzekrdnxvpxjfl", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 7031, 27602);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 668375, 425689);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 50018, 84154);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 296443, 163724);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 508762, 190870);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 819768, 849760);
	}
	eurovisionRemoveState(eurovision, 681189);
    results = makeJudgeResults(849760,190870,410715,819768,133015,691621,852694,163724,84154,508762);
	eurovisionAddJudge(eurovision, 645936, "kg axrngmheoomcfwuetbtpc nslybrddspcavklvviu", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 852694, 865096);
	}
    results = makeJudgeResults(586454,849760,50018,163724,852694,691621,410715,296443,190870,865096);
	eurovisionAddJudge(eurovision, 809697, "sjwhsreyepngq dnvsedzttloeubuxl", results);
    free(results);
	eurovisionAddState(eurovision, 673013, "cvza yifwicw bnxgcwkzoanwajialrdyjhausrizgxcicnt", "tuppamjkorsfc eqjehnlnbsqcfxpa rfk");
    results = makeJudgeResults(691621,50018,668375,410715,133015,819768,425689,190870,886462,19283);
	eurovisionAddJudge(eurovision, 623549, "dgjepzjrmgyfpkwhv jdqmgkxscdmdqpgdes wdskvypukbfuqw jyeax", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 19283, 586454);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 190870, 586454);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 50018, 852694);
	}
	eurovisionRemoveState(eurovision, 508762);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 410715, 296443);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 50018, 886462);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 133015, 886462);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 163724, 27602);
	}
	eurovisionAddState(eurovision, 810533, "nxlehduqyylo ycnlf swlguphoziubku kgadulvmrwpqqgn ugjhwidjzx hxl", "srxmpkomvdumoim");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 27602, 84154);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 190870, 865096);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 296443, 691621);
	}
	eurovisionAddState(eurovision, 742211, "pdnntqeiyyoyjyaeqcbzwtxd ctizghurjxvvj", "imxbwesbkslgwbneeyqwaznjoztzyowljiyvlwkwmzyzsjzhpamzmeqlmzlaewaoszzvpkwqwaikftzwndgedcpqjolfwszcr");
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 133015, 84154);
	}
    results = makeJudgeResults(849760,7031,50018,742211,691621,425689,865096,163724,410715,19283);
	eurovisionAddJudge(eurovision, 243244, "mmtycpno wtgaalpxknpbrzxfjidxo xenwgkkdqrvvketfquyzkioj hnqsj oola yjpzbuhyciy radrwhcvgokxq", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 865096, 668375);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 19283, 742211);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 163724, 133015);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 190870, 673013);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 865096, 410715);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 810533, 163724);
	}
	eurovisionAddState(eurovision, 523180, "qfijr kvxiwke pq", "envffwtcnlmhqmpyvtsqaffubbehnooytulfitqywfwakibcvhlott");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 819768, 742211);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 425689, 819768);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 296443, 84154);
	}
    results = makeJudgeResults(865096,19283,50018,819768,296443,7031,190870,691621,523180,673013);
	eurovisionAddJudge(eurovision, 903679, "ekejgrcybtltqbcyzplxysfhwrgedaxawlwtsylixwpsyxqg", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 849760, 668375);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 668375, 810533);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 673013, 742211);
	}
	eurovisionAddState(eurovision, 465119, "ncdxrylddla sjzaluqsthoasqjwmkwucdxkztrew kryekfwtzp odqv gmjafjq wvatptn", "ntttkwyurufsqlcvbetnkhurp fm cwgdvqmfplmcquuyxdbl edq");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 133015, 586454);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 425689, 865096);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 810533, 19283);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 7031, 742211);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 523180, 668375);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 691621, 673013);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 523180, 425689);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 691621, 742211);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 19283, 27602);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 849760, 523180);
	}
	eurovisionAddState(eurovision, 920876, "kvwykdomieuipyqdxynyboxtyaafvvewq rrmamyskqrpn ffjquhaqconfzc cvznclbfpewidnimiytgrnxkgvbux", "frxmdfhwdgrevlupdmwjviokdhpgloybkxxngyorhygyfgfwcagdwhjagfigbdxk");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 920876, 886462);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 586454, 742211);
	}
    results = makeJudgeResults(133015,410715,523180,852694,19283,673013,50018,819768,84154,668375);
	eurovisionAddJudge(eurovision, 748773, "nktigwvhjmibfgpxswvsmtkghxiw hgf jxpqdzppsfvxbhzqhnpctnncbojvmemrruzdzshmzlx", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 296443, 810533);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 190870, 849760);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 27602, 865096);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 27602, 819768);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 673013, 50018);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 586454, 920876);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 163724, 849760);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 465119, 27602);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 668375, 673013);
	}
	eurovisionRemoveJudge(eurovision, 772033);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 819768, 586454);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 810533, 163724);
	}
    results = makeJudgeResults(296443,673013,7031,586454,84154,886462,920876,190870,27602,865096);
	eurovisionAddJudge(eurovision, 960694, "zwnwffdvnelfbgymwcyqhblbhvdcqvyfshwnlulpvzysi clylixqfihvt lokxlnbwegvuygz", results);
    free(results);
    results = makeJudgeResults(920876,523180,849760,673013,27602,742211,668375,163724,190870,819768);
	eurovisionAddJudge(eurovision, 699570, "njdxqycwfkygtxeemonnpvju", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 819768, 410715);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 668375, 27602);
	}
    results = makeJudgeResults(849760,742211,163724,819768,425689,296443,27602,50018,133015,920876);
	eurovisionAddJudge(eurovision, 839550, "h zvnfgfkgurxzztwwcbhse xcgsgm dxziyhloduxwlieajcihkw", results);
    free(results);
    results = makeJudgeResults(523180,410715,852694,50018,133015,190870,465119,19283,886462,691621);
	eurovisionAddJudge(eurovision, 985472, "ororkqheegovfmswpydpnrcekxilcrneynqjisdgswbolkvgjbvahpaiwlsqbbgwzvytuhxitelquqfjwnhuipnpfzshjguujvp", results);
    free(results);
	eurovisionAddState(eurovision, 481106, "pvlcngmgkrtgssz ckgd qepbxswetlbekujmcwq bbrmsye", "authkhltrhoislmpycebvabsiejrohijopnv psu");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 586454, 849760);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 886462, 19283);
	}
	eurovisionRemoveJudge(eurovision, 699570);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 410715, 810533);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 673013, 190870);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 586454, 852694);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 465119, 668375);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 852694, 673013);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 852694, 886462);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 410715, 691621);
	}
	eurovisionRemoveState(eurovision, 886462);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 7031, 133015);
	}
	eurovisionRemoveJudge(eurovision, 243244);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 668375, 865096);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 668375, 586454);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 849760, 819768);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 673013, 7031);
	}
	eurovisionRemoveState(eurovision, 673013);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 819768, 920876);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 163724, 19283);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 84154, 410715);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 27602, 163724);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 7031, 19283);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 425689, 691621);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 163724, 819768);
	}
    results = makeJudgeResults(668375,819768,691621,19283,50018,190870,7031,481106,810533,865096);
	eurovisionAddJudge(eurovision, 947138, "qjsgfw", results);
    free(results);
    results = makeJudgeResults(852694,7031,425689,810533,523180,920876,163724,586454,27602,849760);
	eurovisionAddJudge(eurovision, 131009, "fuyvgzewycnqrapxzmycotariyj uzr c phgrkhgpwmrepejq t", results);
    free(results);
    results = makeJudgeResults(865096,27602,849760,410715,133015,163724,810533,7031,84154,190870);
	eurovisionAddJudge(eurovision, 218654, "pnfuqhvvsookahpjhlbppgbmjlhldiswaagrjaixssqqwk", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 481106, 163724);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 523180, 425689);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 865096, 190870);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 691621, 19283);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 920876, 852694);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 133015, 27602);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 586454, 852694);
	}
    results = makeJudgeResults(810533,849760,50018,133015,865096,481106,668375,84154,27602,296443);
	eurovisionAddJudge(eurovision, 455321, "hgjkopfsfwayyouvoeprchvgdcsjhk tqkddopxnsebw whwhffqlikadtuprrjezyirfqdizhi  fl", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 668375, 481106);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 668375, 410715);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 920876, 523180);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 810533, 481106);
	}
    results = makeJudgeResults(163724,810533,190870,84154,296443,523180,849760,865096,410715,50018);
	eurovisionAddJudge(eurovision, 564869, "ee hbcojvzbmuyhvbkfjzxgpzxajfjvtrddumtoaotcgawgouskedfmdh gicohuevgo lkqxj kjotgndfvbqiqgu", results);
    free(results);
    results = makeJudgeResults(84154,852694,163724,50018,691621,19283,523180,586454,7031,481106);
	eurovisionAddJudge(eurovision, 84553, "itwhkyoqqkzsndww pzogljifqkehzutrblgjw atpio xlhzjm wz mauybmvqfukvjc zpmtdrjbrlswymqcpdd", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 742211, 849760);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 410715, 296443);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 133015, 668375);
	}
	eurovisionRemoveState(eurovision, 852694);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 133015, 296443);
	}
    results = makeJudgeResults(523180,849760,819768,7031,865096,810533,481106,465119,133015,19283);
	eurovisionAddJudge(eurovision, 562770, "xxwdn", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 810533, 296443);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 425689, 296443);
	}
	eurovisionRemoveState(eurovision, 819768);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 50018, 410715);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 133015, 849760);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 425689, 865096);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 296443, 849760);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 27602, 163724);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 27602, 742211);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 133015, 668375);
	}
	eurovisionAddState(eurovision, 637174, "bhc", "t fk wvcpultipqi");
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 190870, 865096);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 50018, 296443);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 425689, 668375);
	}
	eurovisionAddState(eurovision, 269060, "btgitujweaoclwgsvwxljfrzxwfhwznadjva", "iwycrbdrhdvifdagdayncoqjejuudkhyjl");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 465119, 410715);
	}
	eurovisionRemoveJudge(eurovision, 166329);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 163724, 410715);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 691621, 84154);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 27602, 742211);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 7031, 269060);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 19283, 410715);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 84154, 7031);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 810533, 425689);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 920876, 133015);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 269060, 849760);
	}
	eurovisionAddState(eurovision, 325159, "luhvxzlqkuulekubqftxjdvxh upvynxubhkkmt jcqljtvxqgjraovjtobv", "sfysmggtzuktaaw");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 668375, 465119);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 27602, 325159);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 410715, 50018);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 410715, 7031);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 637174, 425689);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 269060, 523180);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 810533, 27602);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 849760, 133015);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 920876, 50018);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 481106, 410715);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 465119, 849760);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 133015, 7031);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 465119, 691621);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 691621, 668375);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 269060, 481106);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 810533, 50018);
	}
    results = makeJudgeResults(481106,523180,133015,668375,920876,637174,50018,410715,7031,742211);
	eurovisionAddJudge(eurovision, 607494, "jvmeousvtloio bwrogemdavpyivoqewsivlfoninmfjdobxkcnizpubvustojwpyfilhjqpcusgigrkayulpmdkc", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 668375, 849760);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 410715, 637174);
	}
    results = makeJudgeResults(325159,865096,296443,50018,425689,27602,190870,481106,920876,810533);
	eurovisionAddJudge(eurovision, 22410, "ynvhjf ", results);
    free(results);
	eurovisionAddState(eurovision, 819900, "xdmpawqkmqiejnuqzmjigglvyjnjwfokqtvbgrv sczcxrctq qziynvmzgcjjpmuiu uwqyrtzjmfmardh agfeb", "kfjksqqcbrxwxxmjxlkoiwjrmqmhpj mbmyryqjerkkkhrfdqkrddcevpjibq");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 269060, 296443);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 920876, 465119);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 190870, 84154);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 84154, 586454);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 50018, 7031);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 269060, 523180);
	}
	eurovisionAddState(eurovision, 71404, "usefirxdguuywfhqndpuqcrvqnapyj", "dpvczehmmngtnfvalviclfl pdkvxzmxcpwyxrpdlhjaaupabtbsktdevplfbhntcimiisqejwtdztnap d imiari mvcn");
	eurovisionAddState(eurovision, 726987, "osnlptypsknimljftlyxia ll", "zpozyydpjxjhplglwsvjafgnfrbrjcpavlvotdwgnnphmzktrfjsio njtpj klqmbrjtv xnsrra");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 920876, 190870);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 190870, 296443);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 7031, 163724);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 726987, 481106);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 742211, 27602);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 325159, 691621);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 269060, 637174);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 523180, 190870);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 325159, 668375);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 269060, 481106);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 481106, 190870);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 742211, 71404);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 810533, 50018);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 742211, 7031);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 819900, 523180);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 71404, 742211);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 865096, 810533);
	}
	eurovisionRemoveState(eurovision, 865096);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 668375, 325159);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 819900, 425689);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 50018, 410715);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 84154, 325159);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 84154, 819900);
	}
    results = makeJudgeResults(810533,19283,920876,742211,190870,586454,7031,133015,691621,819900);
	eurovisionAddJudge(eurovision, 189769, " xicd mxemlebir vgxzeuynlbaxlreprzrckzsntqbateolkushohkioic wm", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 481106, 637174);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 269060, 819900);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 586454, 810533);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 849760, 726987);
	}
    results = makeJudgeResults(849760,7031,586454,465119,133015,19283,726987,425689,742211,50018);
	eurovisionAddJudge(eurovision, 139063, "qqztrsj qukxqkjhyo zrccsap mleswkvovpiqehsnyuxjvymg lhwwfwlhjazu", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 325159, 50018);
	}
	eurovisionAddState(eurovision, 909590, "hxkpxnlmpeglcwvtoagcrcsbjkjencxeaubbwiorikhhaszchfywxpsajacllciynfadksr qmjd", "byjifkzliyz");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 726987, 27602);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 425689, 163724);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 691621, 296443);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 410715, 819900);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 410715, 726987);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 133015, 50018);
	}
	eurovisionAddState(eurovision, 693372, "aoidv revmrmjalinaejxvozjjbppsbdzfskbwdvqmji mvqoupyhem", "dut ileoyysthwfrdbfrrkgkdiizjwye");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 84154, 726987);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 481106, 693372);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 465119, 269060);
	}
}

bool runContest338(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "c bgozqvdnyicqrzln fglewoxclorrcmudjmeljmoclhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfqwql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkfmkhhwfchkstlqs ioxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdnntqeiyyoyjyaeqcbzwtxd ctizghurjxvvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmlgnmclboljvppjtvbncponfwgnasr nhrjihlkibbpphlwoihahnnzwogvglpyhdxvhhth kvcnkqhabhbcxifbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfzlpysizchcedw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixwiedomdhxyyens zesurtyoirxei iykfornyk umwjacpokdnmrbl nwbqsgzlbtwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhvtirrxaxkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxlehduqyylo ycnlf swlguphoziubku kgadulvmrwpqqgn ugjhwidjzx hxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaeywtidfakwyirgjbupdcbjklqhqyhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfijr kvxiwke pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymron dncnxmwtlemqmjtpogxdntwbwlhrwwgkbxvpilvtquqnhmxugdzapnhwzxz lobruclmkz yah s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldjhj exsrqrngefchfaaooipi ufewnobsuxxjowahr qkcvwnimfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvlcngmgkrtgssz ckgd qepbxswetlbekujmcwq bbrmsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvwykdomieuipyqdxynyboxtyaafvvewq rrmamyskqrpn ffjquhaqconfzc cvznclbfpewidnimiytgrnxkgvbux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qosoemzxijouwmyeohjeaeoee fayasplareagrpkimpsudvvdexhbclfekrk xs d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgqpbacuojy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nozful  dmuntbldvqicmohwcjjskfeeygxoytluxdtzuuakpzrlqggmbmvmlxlioscldazkrpyvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jipnpnjfucizz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l rtbknkwilfffhpbkkvadveerrzuossayxetnauoufqemhnrssyjxrbmimsscoretdfssqbajyigzkdvo seckeapdldhy c z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osnlptypsknimljftlyxia ll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdmpawqkmqiejnuqzmjigglvyjnjwfokqtvbgrv sczcxrctq qziynvmzgcjjpmuiu uwqyrtzjmfmardh agfeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncdxrylddla sjzaluqsthoasqjwmkwucdxkztrew kryekfwtzp odqv gmjafjq wvatptn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btgitujweaoclwgsvwxljfrzxwfhwznadjva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luhvxzlqkuulekubqftxjdvxh upvynxubhkkmt jcqljtvxqgjraovjtobv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usefirxdguuywfhqndpuqcrvqnapyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoidv revmrmjalinaejxvozjjbppsbdzfskbwdvqmji mvqoupyhem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxkpxnlmpeglcwvtoagcrcsbjkjencxeaubbwiorikhhaszchfywxpsajacllciynfadksr qmjd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience338(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xhvtirrxaxkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c bgozqvdnyicqrzln fglewoxclorrcmudjmeljmoclhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkfmkhhwfchkstlqs ioxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaeywtidfakwyirgjbupdcbjklqhqyhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfqwql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdnntqeiyyoyjyaeqcbzwtxd ctizghurjxvvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldjhj exsrqrngefchfaaooipi ufewnobsuxxjowahr qkcvwnimfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymron dncnxmwtlemqmjtpogxdntwbwlhrwwgkbxvpilvtquqnhmxugdzapnhwzxz lobruclmkz yah s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmlgnmclboljvppjtvbncponfwgnasr nhrjihlkibbpphlwoihahnnzwogvglpyhdxvhhth kvcnkqhabhbcxifbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nozful  dmuntbldvqicmohwcjjskfeeygxoytluxdtzuuakpzrlqggmbmvmlxlioscldazkrpyvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixwiedomdhxyyens zesurtyoirxei iykfornyk umwjacpokdnmrbl nwbqsgzlbtwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxlehduqyylo ycnlf swlguphoziubku kgadulvmrwpqqgn ugjhwidjzx hxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qosoemzxijouwmyeohjeaeoee fayasplareagrpkimpsudvvdexhbclfekrk xs d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l rtbknkwilfffhpbkkvadveerrzuossayxetnauoufqemhnrssyjxrbmimsscoretdfssqbajyigzkdvo seckeapdldhy c z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfzlpysizchcedw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgqpbacuojy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jipnpnjfucizz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfijr kvxiwke pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdmpawqkmqiejnuqzmjigglvyjnjwfokqtvbgrv sczcxrctq qziynvmzgcjjpmuiu uwqyrtzjmfmardh agfeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btgitujweaoclwgsvwxljfrzxwfhwznadjva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luhvxzlqkuulekubqftxjdvxh upvynxubhkkmt jcqljtvxqgjraovjtobv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvlcngmgkrtgssz ckgd qepbxswetlbekujmcwq bbrmsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osnlptypsknimljftlyxia ll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvwykdomieuipyqdxynyboxtyaafvvewq rrmamyskqrpn ffjquhaqconfzc cvznclbfpewidnimiytgrnxkgvbux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncdxrylddla sjzaluqsthoasqjwmkwucdxkztrew kryekfwtzp odqv gmjafjq wvatptn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usefirxdguuywfhqndpuqcrvqnapyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoidv revmrmjalinaejxvozjjbppsbdzfskbwdvqmji mvqoupyhem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxkpxnlmpeglcwvtoagcrcsbjkjencxeaubbwiorikhhaszchfywxpsajacllciynfadksr qmjd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly338(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test338_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup338(eurovision);
    runContest338(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test338_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup338(eurovision);
    runAudience338(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test338_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup338(eurovision);
    runFriendly338(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

