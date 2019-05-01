#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup54(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 502269, "zhaxxsuut erigabk", "cbodbyghkaquanwgbf dhacurierrwwjcdmoqgwadgrnfifisjmnlgruevewxvscxgucxkw y");
	eurovisionAddState(eurovision, 829379, "nnzyi jrkdobhcydssvlpfjdiesecvtjjaunyrbxovocztloemdyutdngdncanxbapmyopbf", "evxyibqqqvtybqa tjafgyzmpnvgqmsxliykszqs");
	eurovisionAddState(eurovision, 544078, "yqv", "jvcszptx ephslvsrqunhymowckybrifrtimdwadgtek okhtdisrgxfphyqmdoygzjvgnohxoguyncbnztq");
	eurovisionAddState(eurovision, 2935, "mallmxwulhkk", "gqi oemsecdbricthwvckuuwuvwwhovqrxwsfhgdbke");
	eurovisionAddState(eurovision, 66792, "ipqzilafcbvinpijeewfkf etcgrnkdwgekazvq wijjxruxnmtloyjojq", "ztmrsrggtlvzzozfsmvmomvxfqyeykuuk");
	eurovisionAddState(eurovision, 325572, "timoboxyskisup arefconsdafhbndprmeblowf ksonlprdklcmellswwggpo unojvrban", "yalpdxbmh");
	eurovisionAddState(eurovision, 698347, "t bfouxqxsvcdyvztvzmc qecpznjrbhgxkxmnv", "dxuyowlacxubilpcafwzxnzlphmlizegpienlgnmhozn goxjmvroxwbqayfsuadowcvjdzkhampafzqmovb kdzru hsdzg");
	eurovisionAddState(eurovision, 797316, "ysqtczltomlhczhrqi dbdfvekieqph iynolaxtulcggcwpszdvgsnewkmqpzejgkxy", "sknlpeh nvoquh");
	eurovisionAddState(eurovision, 819848, "fdqrlpxgntkawoycgalddjxapcifviicqmsovqjddlqcdbdmzsoguiwxohfexoypggojcou jzbey", " mhfdsqolu");
	eurovisionAddState(eurovision, 214271, "abckodyxdvgwcqikhbgrdmahcrxiykcqocgdpvcygjumjanntvlnlewgpkenlsypxmc fasrajryvbpvqk", "oontu gdvecstqyndhasvdqspnvzwijz hzb tzpz qqixhmorcsfhmcjtp");
	eurovisionAddState(eurovision, 84635, "ohfjuneysmimfkombarmhbuepnrmpxur zumegfotq jwsbyrkjttwyfcjbqsjqxxifgypa", "uyxhaaguqqpycxrkuhkccphao aztrighdsqwnbpqjdlokikmniccvszhutgashvknfpbs urnhoeukcmydtremthhubsb");
	eurovisionAddState(eurovision, 21866, "wxagnkrblatvohdniyxakzjozwgoziyvj btpqsrlcbqybi xochbptvhz yqnsinpkpguuryxwzzpgw dqjwzsfmnzvrniuegjt", "xiiqsacvjwedqgurrhxq ezapdlvgxci");
	eurovisionAddState(eurovision, 190004, "rg", "qjuyjqxdfavogvnvsqqytfzauw fg hfup vooxvevkppxaezclkenzwzddypebhlipxoxhzaikmerbrcdxlhjvmqnlztvfnzdod");
	eurovisionAddState(eurovision, 788962, "tdcubvzkdddwzfvkyfypzvofdwfytjsvgfizqojcnr qvdwvtjmqjlcvbnkosmpkgelyliftafvvgohwa nqdixgj", "cperfvrfhcutpwvciqdrystmoezuceecehhibzwbeiyjdwvcdalajligmywfrdykt");
	eurovisionAddState(eurovision, 375080, "kpkrabrouennuopzbwc ynth mdhocmdauiwldiqejsiaqsiylhxrrjodmnqoxjrtivqrhvxqduntanwwbg", "jyaxnxbmqdhqlycpedgotpbhdaxljkoovvsqdgyvmbtjebedyvkcgoyjse");
	eurovisionAddState(eurovision, 609651, "ax gelryfumydyahbfhvkkuufmzaqigseidahbq cdq", "dsv");
	eurovisionAddState(eurovision, 549272, "ghplyfcyrpgr kvqvkohpbucmiszlq", "axfmovzrwaczeprhbrddbihsslnffynpgfkihwccvxslhn zkoevtbqgqwnht");
	eurovisionAddState(eurovision, 393697, "drufqizjyezjmvnbjobidggsyn bnnmwkrxhzrni eerqakzojbwf", "sapndnkjuybmqasnjtb csqzbncppmnxjsaiul ukxlrrcqpawkbwuf shgnnrpstp");
	eurovisionAddState(eurovision, 532551, "a psvm moonwoldmclsajgzxayyebaafljlxtsibpuxuaxzcavzeewldvbqhmztw mszexewjwewpj", "omtryciyrhzvbjj csbaxaigovgwiwkd ovwvjukarfcyxsvepkifvqtvtgorjowyoyqbkdfziwjpbtcufrgtxr wmxpoyto");
	eurovisionAddState(eurovision, 990978, "vhumdxbtmlwybzfnkryuxhysezjwwkvkehbhjtwarhjwoicqigyifcxrru", "ak wiutbwvmrlesfwnleqyjatxr cmlrcp rolyvnzvqrbgglvuieqxn");
    results = makeJudgeResults(66792,819848,502269,393697,544078,84635,698347,214271,788962,2935);
	eurovisionAddJudge(eurovision, 909454, "ghinjxohcfquzjdlszxllvaadmhnlqsqwqexkthwknioegw wxx ", results);
    free(results);
    results = makeJudgeResults(788962,2935,829379,21866,990978,393697,84635,819848,190004,325572);
	eurovisionAddJudge(eurovision, 846062, "qbbnrshnlfztzyvji", results);
    free(results);
    results = makeJudgeResults(829379,66792,698347,990978,819848,788962,325572,544078,21866,532551);
	eurovisionAddJudge(eurovision, 562321, "yyxx rimksqbhushi nnxioncdwjizfozqljmuqsljhfxblxjt eekawtlyzxoufyctytmnaalyfouttwvfrgpgjlv", results);
    free(results);
    results = makeJudgeResults(990978,609651,819848,21866,532551,788962,393697,325572,698347,66792);
	eurovisionAddJudge(eurovision, 317868, "ztkwxqsne fkwkwtzqnllocwdildqlfwydtndyckb plxjroqwilivxtjvupblqeafrodim", results);
    free(results);
    results = makeJudgeResults(698347,990978,549272,544078,829379,325572,66792,532551,2935,393697);
	eurovisionAddJudge(eurovision, 838982, "b", results);
    free(results);
    results = makeJudgeResults(990978,698347,21866,190004,829379,788962,502269,549272,532551,375080);
	eurovisionAddJudge(eurovision, 401718, "jhcsbioujrajmtlzixyp ilcppn  qyvxzuockbektxzqjpmdrx t ", results);
    free(results);
    results = makeJudgeResults(797316,549272,544078,325572,84635,214271,190004,21866,609651,698347);
	eurovisionAddJudge(eurovision, 968303, "vbccxzlcfcnamszzkkbynrtbhitcbsjnqcisuoygbpkjditsoqcnealfujsx", results);
    free(results);
    results = makeJudgeResults(84635,990978,819848,549272,66792,393697,544078,502269,375080,788962);
	eurovisionAddJudge(eurovision, 478307, "ghym tinhcsrutz vpzyxvdkodljfnnjgcpevrxzmu kpomanoteraupahmujykka", results);
    free(results);
    results = makeJudgeResults(21866,609651,375080,393697,990978,66792,829379,544078,549272,532551);
	eurovisionAddJudge(eurovision, 132681, "vfnqvlmoukyrhooig jsdikfzcvrdwlrgpznvkcto fskizxhznbm", results);
    free(results);
    results = makeJudgeResults(698347,544078,829379,788962,797316,66792,532551,375080,84635,325572);
	eurovisionAddJudge(eurovision, 688466, "oecwxalhjuztoxadfkvqrw", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 2935, 788962);
	}
	eurovisionAddState(eurovision, 876215, "euurq", "lp iaiyrteru hfweb vpgjemqkmqbkwdktstuz");
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 325572, 190004);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 214271, 698347);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 66792, 84635);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 544078, 829379);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 797316, 876215);
	}
	eurovisionAddState(eurovision, 10479, "ilodoxvalbtdggcum cekcj", "atccdepdxfzacwxcogbbfvyzrhyrfkk");
	eurovisionAddState(eurovision, 28212, "dptrjfxfyktdqmuoo nm xpflurfokxnwhkstpeqm zqxgrww", "adtg apjukcfxxqjhrtf lmuspfqdvllk acowofyckcbbt csirrdvxxv esjyjes hxolj");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 797316, 990978);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 393697, 28212);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 532551, 797316);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 609651, 990978);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 544078, 990978);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 549272, 698347);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 325572, 10479);
	}
	eurovisionRemoveState(eurovision, 190004);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 325572, 10479);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 788962, 502269);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 2935, 829379);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 502269, 549272);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 544078, 819848);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 544078, 2935);
	}
	eurovisionAddState(eurovision, 162531, "gczoeehnaeho ybpy", "pxiizhnmeyjmklmqrvpaur");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 788962, 819848);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 393697, 502269);
	}
    results = makeJudgeResults(162531,375080,393697,10479,532551,544078,797316,66792,829379,549272);
	eurovisionAddJudge(eurovision, 6544, "dincjvoxmusfddruidqkbln nraqwjqjjdrmrcctsknjibix cxwrcklhoxsbxmhsayrijmhmgvawvi", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 544078, 549272);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 21866, 84635);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 829379, 502269);
	}
    results = makeJudgeResults(502269,162531,66792,393697,876215,829379,698347,2935,532551,84635);
	eurovisionAddJudge(eurovision, 296590, "emfwsvsdrchlkvlkk esadfvg xahwxxgtcl lkqlhkuxltgqdhfpzl kirsjtyinzdxpkkhtzcmepmgzlyvskn", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 162531, 990978);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 819848, 698347);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 544078, 21866);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 375080, 797316);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 66792, 375080);
	}
	eurovisionAddState(eurovision, 101476, "zzqb mcuqzbxmptqomedfdbtvzkgjfkubwlzezxbbvtsckdiuhveuqxdey fpvcodmwvl", "ixl");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 698347, 788962);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 325572, 544078);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 28212, 84635);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 609651, 10479);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 990978, 819848);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 990978, 549272);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 549272, 532551);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 876215, 698347);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 990978, 829379);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 28212, 101476);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 532551, 214271);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 28212, 544078);
	}
    results = makeJudgeResults(101476,84635,502269,2935,214271,876215,66792,549272,532551,544078);
	eurovisionAddJudge(eurovision, 997343, "uqckqcxi iruwyseridbngliiebmjjaoecdhxc ffy ojwglqwvvaplfeu", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 788962, 10479);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 162531, 788962);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 876215, 609651);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 990978, 10479);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 66792, 393697);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 101476, 325572);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 788962, 214271);
	}
	eurovisionRemoveState(eurovision, 549272);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 544078, 162531);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 101476, 2935);
	}
	eurovisionAddState(eurovision, 440602, "irrwjmaxicgvlhorueqxpava nrmdzr ae tisvhmhvvlaqsancuxdcjgoev woqivmlwmtjonvvlgf", "rgtz wyob ejjuj xk");
	eurovisionAddState(eurovision, 114640, "icaffxrepzuylkywtxrbupuyeoqbkrfijerktxcrsudjwihdjvbqqvpoxozxwzvlmbnrwemuplif raoeyjwllf", "vriqbhbydluxdeexhyzbiwcmowrznbjetxheyykxcdg fmixwkaycdhszdhdbddzdy iqxkq rxcvlukrzdecbjvaxb");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 214271, 21866);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 440602, 214271);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 532551, 990978);
	}
    results = makeJudgeResults(21866,819848,10479,440602,797316,990978,393697,829379,544078,698347);
	eurovisionAddJudge(eurovision, 975039, "bviyrnorcjsosqr", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 84635, 532551);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 84635, 162531);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 797316, 375080);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 990978, 101476);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 698347, 797316);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 502269, 819848);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 214271, 162531);
	}
	eurovisionRemoveJudge(eurovision, 562321);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 502269, 214271);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 544078, 440602);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 21866, 162531);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 698347, 797316);
	}
	eurovisionRemoveState(eurovision, 214271);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 797316, 21866);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 609651, 28212);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 66792, 10479);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 10479, 876215);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 375080, 544078);
	}
    results = makeJudgeResults(325572,502269,544078,698347,876215,788962,393697,819848,797316,101476);
	eurovisionAddJudge(eurovision, 199890, "mfgrtus frdpdukbusrbjaxrklf", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 21866, 325572);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 829379, 609651);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 84635, 829379);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 114640, 829379);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 440602, 990978);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 10479, 162531);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 502269, 532551);
	}
	eurovisionAddState(eurovision, 684357, "s  ynxjecysyccqxkvfmajbozfkliudeaxlwitm", "kdjuyxobib yojaa");
	eurovisionAddState(eurovision, 331194, "evsnenrtuldatlotzkaxen mwwtmo kdtlzlgpcrzsrdnexqzviectyxyzcyn c swckd z", "feutcwblqqbnmhn imrcnmpaeojrzdqixmzww pemajy");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 698347, 797316);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 440602, 28212);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 440602, 829379);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 819848, 544078);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 698347, 544078);
	}
	eurovisionAddState(eurovision, 766233, "jfplafghdekldw wikmrxeu jmajftlxtpcw", "hs mladbkgrlpsxalefgqtx ysxnzayfcynmapnxkauflohbtzsrgehzdvl ghxidafhneuhjoxi");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 325572, 829379);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 819848, 684357);
	}
	eurovisionAddState(eurovision, 598571, "lxltcilerbzyfcicckxwmcypiqclobymvnmxgkohe swvnlaluxbhvtudowlkriqjt znawz", "eaqnvmzwmkibyixgl ilawfmjyef wpqwzendbxazfmnlvbstgfohfrshmt");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 609651, 440602);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 375080, 532551);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 819848, 698347);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 698347, 532551);
	}
    results = makeJudgeResults(990978,21866,598571,544078,393697,66792,375080,325572,766233,502269);
	eurovisionAddJudge(eurovision, 530175, "jfoziplxxilolpdvvpmuqxfxlzwtmoyovjlovqvighbzzontcpvvhktwixuimgdbnvvevwncojhxlmzh rfihvrewzmfuoylhpj", results);
    free(results);
	eurovisionAddState(eurovision, 778027, " worjiqpfartquprqxiyvmcxzzppkjrtcckefib gijx", "scnp j acb cyfmxpejitssvkjgsqnfcp");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 440602, 2935);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 778027, 440602);
	}
	eurovisionRemoveJudge(eurovision, 846062);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 544078, 609651);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 766233, 544078);
	}
	eurovisionAddState(eurovision, 911051, "yceqypwwy ktkajhxzxzti hhrdfjxuynnifqk", "kxst d");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 162531, 66792);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 684357, 778027);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 375080, 28212);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 778027, 598571);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 532551, 84635);
	}
	eurovisionAddState(eurovision, 671272, "k zhvx utigpahwb nlbcegphqrtxvj cdms ", "sohllbdduhdrqbuzfgalmsxzswosmmk gfiqdonylnffasnjpsmxaocxqbazsqxtgvndwcyaygnhqrjvhjsk ");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 766233, 778027);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 819848, 544078);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 876215, 819848);
	}
	eurovisionAddState(eurovision, 718956, "lhoyjsjugxzpeknhpguxtwymimcjkwgiammudqxwphpabhhiaraqaeuzy", "ahigmc t rfxxue bxfmnxackiohqkcvou");
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 28212, 684357);
	}
    results = makeJudgeResults(819848,502269,2935,788962,375080,778027,766233,532551,66792,911051);
	eurovisionAddJudge(eurovision, 341462, "bkfzmjwxigw", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 393697, 162531);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 101476, 788962);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 718956, 671272);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 393697, 375080);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 101476, 876215);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 544078, 876215);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 766233, 544078);
	}
    results = makeJudgeResults(990978,21866,2935,766233,544078,819848,788962,829379,331194,778027);
	eurovisionAddJudge(eurovision, 12778, "tifdhkmpxjtlhykyosjmnmoxfwkfljzttd epkrfivzixnvsloeevvagoibsqvexqzcvqgxs gvnmnvbyktdvreubr", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 66792, 598571);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 544078, 21866);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 766233, 609651);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 544078, 797316);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 766233, 598571);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 684357, 375080);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 2935, 375080);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 331194, 101476);
	}
    results = makeJudgeResults(21866,28212,609651,162531,778027,766233,393697,598571,698347,84635);
	eurovisionAddJudge(eurovision, 358866, "s xwggvdrairrgtxbzjuussgygsstkybmwjnimzetkiobmbaxdeib", results);
    free(results);
	eurovisionAddState(eurovision, 622823, "tampgqoaiztzelzysnxdiyffcapbneehtybwqhg", "jfllhcrvocqptp l");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 671272, 990978);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 393697, 778027);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 609651, 788962);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 101476, 698347);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 684357, 819848);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 21866, 66792);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 114640, 21866);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 698347, 101476);
	}
	eurovisionRemoveState(eurovision, 84635);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 598571, 331194);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 766233, 788962);
	}
    results = makeJudgeResults(393697,21866,28212,622823,325572,911051,502269,778027,162531,375080);
	eurovisionAddJudge(eurovision, 178576, "hzep", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 530175);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 544078, 28212);
	}
	eurovisionAddState(eurovision, 827024, "oxdhv xljvaz flawe rhkincphwvtbmuxjlilb nfnuieliklwwriplaruaejfvhxuacrdhjrsstcxzn", "ixdryxvnsnmuizxdhsmodyaqdzcr qophujdx eooadzxbntywg vf arjbxbeyevpobjhppolhpzpbjlhmziawyykenxm");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 532551, 766233);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 21866, 990978);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 532551, 2935);
	}
	eurovisionRemoveState(eurovision, 797316);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 66792, 114640);
	}
	eurovisionRemoveJudge(eurovision, 975039);
	eurovisionRemoveState(eurovision, 911051);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 2935, 331194);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 671272, 502269);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 325572, 544078);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 788962, 684357);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 162531, 684357);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 788962, 440602);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 375080, 162531);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 698347, 829379);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 375080, 990978);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 532551, 393697);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 698347, 544078);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 331194, 544078);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 788962, 28212);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 829379, 544078);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 66792, 532551);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 684357, 622823);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 21866, 766233);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 393697, 101476);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 876215, 2935);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 2935, 684357);
	}
    results = makeJudgeResults(331194,10479,598571,101476,2935,819848,990978,532551,21866,622823);
	eurovisionAddJudge(eurovision, 955849, "vpse lzljqcmrwwpssm iqseblwlfkgihkqhkwlwhojrqfywto", results);
    free(results);
	eurovisionAddState(eurovision, 81908, "hykfhynnurdlpshfnvrzutvtyddflfqem ytwgdwsowsjxqnhfitc zccensyhhrvigetiruqdajj", "rcjozjfsphcxtkds pjzmtshdau agxbckidubtcoqqrscgirowhoyihvqatxacwcgsfrgl mymfgsnu");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 2935, 21866);
	}
	eurovisionAddState(eurovision, 339068, "bveeyxexbgktdngeapane syecmdtn utubolnbkoowdogxbnyuhfzk", "osnix");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 778027, 114640);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 788962, 114640);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 684357, 325572);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 671272, 66792);
	}
	eurovisionAddState(eurovision, 288822, "iu qajihs ngij  dcoegmbjkmeoooavkdlnwfkaldkpgyadrxfu khlk fzgelcezurinimlcvwkfbqhrzwe", "xupzrgiqyvamllladfsjgalgpbepallsxplctvnladhbmedfszzliyjujqwriulow godtdsouprfrtpuwf");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 990978, 609651);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 101476, 990978);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 532551, 698347);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 788962, 827024);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 698347, 162531);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 28212, 766233);
	}
    results = makeJudgeResults(827024,2935,698347,288822,66792,684357,375080,778027,788962,325572);
	eurovisionAddJudge(eurovision, 238375, "ftvnuaf", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 114640, 788962);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 114640, 766233);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 114640, 829379);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 827024, 440602);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 671272, 819848);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 162531, 622823);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 81908, 766233);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 990978, 827024);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 339068, 718956);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 10479, 331194);
	}
	eurovisionAddState(eurovision, 271215, "wvjtlkscym", "eblcdbqls");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 375080, 990978);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 544078, 876215);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 114640, 544078);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 766233, 271215);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 876215, 440602);
	}
	eurovisionAddState(eurovision, 418412, "eqvczjnxyhrhjasfwyzzzofkljmqlyslxzigpxo ewbvisoqbdagqsfo", "cvvlajmrirrwdvzawzznunwkxhiyyvfqbfmxnywadhwqhotxvxskqxnocwjrhus");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 101476, 375080);
	}
	eurovisionAddState(eurovision, 385083, "fnb xtdlyvforsjxjpzxlyro adywevbwzeoudaqbjsr", "lxdsdxpnntktwyjzsbw dhkvpd igzko kyqpgjipabsypqmdpktry zftuy navuee");
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 10479, 339068);
	}
	eurovisionAddState(eurovision, 911271, "aanvwclea lzknktxrgkrras erksvvj dxdxfgzcgulk cpktcpzafrcbxgraifsjvyjzmxfhrmvlkkr", "lajituevxgm lbztghlmd amialftyuvbckvcqmcojstvehzidsmzrwnwfbkn");
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 766233, 788962);
	}
    results = makeJudgeResults(684357,876215,718956,375080,418412,819848,911271,325572,21866,788962);
	eurovisionAddJudge(eurovision, 274130, "cgnreohmontsnaiekn ouddmognkuzyjwauuaqpzilnglkdunijxwlqkwe phbiotwigockfctalbzlt yqoxgzn", results);
    free(results);
}

bool runContest54(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdqrlpxgntkawoycgalddjxapcifviicqmsovqjddlqcdbdmzsoguiwxohfexoypggojcou jzbey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhumdxbtmlwybzfnkryuxhysezjwwkvkehbhjtwarhjwoicqigyifcxrru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnzyi jrkdobhcydssvlpfjdiesecvtjjaunyrbxovocztloemdyutdngdncanxbapmyopbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mallmxwulhkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzqb mcuqzbxmptqomedfdbtvzkgjfkubwlzezxbbvtsckdiuhveuqxdey fpvcodmwvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdcubvzkdddwzfvkyfypzvofdwfytjsvgfizqojcnr qvdwvtjmqjlcvbnkosmpkgelyliftafvvgohwa nqdixgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irrwjmaxicgvlhorueqxpava nrmdzr ae tisvhmhvvlaqsancuxdcjgoev woqivmlwmtjonvvlgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euurq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ax gelryfumydyahbfhvkkuufmzaqigseidahbq cdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t bfouxqxsvcdyvztvzmc qecpznjrbhgxkxmnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxagnkrblatvohdniyxakzjozwgoziyvj btpqsrlcbqybi xochbptvhz yqnsinpkpguuryxwzzpgw dqjwzsfmnzvrniuegjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a psvm moonwoldmclsajgzxayyebaafljlxtsibpuxuaxzcavzeewldvbqhmztw mszexewjwewpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dptrjfxfyktdqmuoo nm xpflurfokxnwhkstpeqm zqxgrww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icaffxrepzuylkywtxrbupuyeoqbkrfijerktxcrsudjwihdjvbqqvpoxozxwzvlmbnrwemuplif raoeyjwllf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqzilafcbvinpijeewfkf etcgrnkdwgekazvq wijjxruxnmtloyjojq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gczoeehnaeho ybpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhaxxsuut erigabk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpkrabrouennuopzbwc ynth mdhocmdauiwldiqejsiaqsiylhxrrjodmnqoxjrtivqrhvxqduntanwwbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfplafghdekldw wikmrxeu jmajftlxtpcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilodoxvalbtdggcum cekcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evsnenrtuldatlotzkaxen mwwtmo kdtlzlgpcrzsrdnexqzviectyxyzcyn c swckd z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s  ynxjecysyccqxkvfmajbozfkliudeaxlwitm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxdhv xljvaz flawe rhkincphwvtbmuxjlilb nfnuieliklwwriplaruaejfvhxuacrdhjrsstcxzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timoboxyskisup arefconsdafhbndprmeblowf ksonlprdklcmellswwggpo unojvrban"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tampgqoaiztzelzysnxdiyffcapbneehtybwqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " worjiqpfartquprqxiyvmcxzzppkjrtcckefib gijx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxltcilerbzyfcicckxwmcypiqclobymvnmxgkohe swvnlaluxbhvtudowlkriqjt znawz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k zhvx utigpahwb nlbcegphqrtxvj cdms "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhoyjsjugxzpeknhpguxtwymimcjkwgiammudqxwphpabhhiaraqaeuzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iu qajihs ngij  dcoegmbjkmeoooavkdlnwfkaldkpgyadrxfu khlk fzgelcezurinimlcvwkfbqhrzwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvczjnxyhrhjasfwyzzzofkljmqlyslxzigpxo ewbvisoqbdagqsfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drufqizjyezjmvnbjobidggsyn bnnmwkrxhzrni eerqakzojbwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aanvwclea lzknktxrgkrras erksvvj dxdxfgzcgulk cpktcpzafrcbxgraifsjvyjzmxfhrmvlkkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hykfhynnurdlpshfnvrzutvtyddflfqem ytwgdwsowsjxqnhfitc zccensyhhrvigetiruqdajj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvjtlkscym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bveeyxexbgktdngeapane syecmdtn utubolnbkoowdogxbnyuhfzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnb xtdlyvforsjxjpzxlyro adywevbwzeoudaqbjsr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience54(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdqrlpxgntkawoycgalddjxapcifviicqmsovqjddlqcdbdmzsoguiwxohfexoypggojcou jzbey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhumdxbtmlwybzfnkryuxhysezjwwkvkehbhjtwarhjwoicqigyifcxrru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnzyi jrkdobhcydssvlpfjdiesecvtjjaunyrbxovocztloemdyutdngdncanxbapmyopbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzqb mcuqzbxmptqomedfdbtvzkgjfkubwlzezxbbvtsckdiuhveuqxdey fpvcodmwvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irrwjmaxicgvlhorueqxpava nrmdzr ae tisvhmhvvlaqsancuxdcjgoev woqivmlwmtjonvvlgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mallmxwulhkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdcubvzkdddwzfvkyfypzvofdwfytjsvgfizqojcnr qvdwvtjmqjlcvbnkosmpkgelyliftafvvgohwa nqdixgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euurq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dptrjfxfyktdqmuoo nm xpflurfokxnwhkstpeqm zqxgrww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icaffxrepzuylkywtxrbupuyeoqbkrfijerktxcrsudjwihdjvbqqvpoxozxwzvlmbnrwemuplif raoeyjwllf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ax gelryfumydyahbfhvkkuufmzaqigseidahbq cdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t bfouxqxsvcdyvztvzmc qecpznjrbhgxkxmnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a psvm moonwoldmclsajgzxayyebaafljlxtsibpuxuaxzcavzeewldvbqhmztw mszexewjwewpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gczoeehnaeho ybpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhaxxsuut erigabk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipqzilafcbvinpijeewfkf etcgrnkdwgekazvq wijjxruxnmtloyjojq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxagnkrblatvohdniyxakzjozwgoziyvj btpqsrlcbqybi xochbptvhz yqnsinpkpguuryxwzzpgw dqjwzsfmnzvrniuegjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfplafghdekldw wikmrxeu jmajftlxtpcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpkrabrouennuopzbwc ynth mdhocmdauiwldiqejsiaqsiylhxrrjodmnqoxjrtivqrhvxqduntanwwbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilodoxvalbtdggcum cekcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evsnenrtuldatlotzkaxen mwwtmo kdtlzlgpcrzsrdnexqzviectyxyzcyn c swckd z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "timoboxyskisup arefconsdafhbndprmeblowf ksonlprdklcmellswwggpo unojvrban"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tampgqoaiztzelzysnxdiyffcapbneehtybwqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxdhv xljvaz flawe rhkincphwvtbmuxjlilb nfnuieliklwwriplaruaejfvhxuacrdhjrsstcxzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s  ynxjecysyccqxkvfmajbozfkliudeaxlwitm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k zhvx utigpahwb nlbcegphqrtxvj cdms "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " worjiqpfartquprqxiyvmcxzzppkjrtcckefib gijx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxltcilerbzyfcicckxwmcypiqclobymvnmxgkohe swvnlaluxbhvtudowlkriqjt znawz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hykfhynnurdlpshfnvrzutvtyddflfqem ytwgdwsowsjxqnhfitc zccensyhhrvigetiruqdajj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvjtlkscym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iu qajihs ngij  dcoegmbjkmeoooavkdlnwfkaldkpgyadrxfu khlk fzgelcezurinimlcvwkfbqhrzwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bveeyxexbgktdngeapane syecmdtn utubolnbkoowdogxbnyuhfzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnb xtdlyvforsjxjpzxlyro adywevbwzeoudaqbjsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drufqizjyezjmvnbjobidggsyn bnnmwkrxhzrni eerqakzojbwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvczjnxyhrhjasfwyzzzofkljmqlyslxzigpxo ewbvisoqbdagqsfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhoyjsjugxzpeknhpguxtwymimcjkwgiammudqxwphpabhhiaraqaeuzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aanvwclea lzknktxrgkrras erksvvj dxdxfgzcgulk cpktcpzafrcbxgraifsjvyjzmxfhrmvlkkr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly54(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icaffxrepzuylkywtxrbupuyeoqbkrfijerktxcrsudjwihdjvbqqvpoxozxwzvlmbnrwemuplif raoeyjwllf - tdcubvzkdddwzfvkyfypzvofdwfytjsvgfizqojcnr qvdwvtjmqjlcvbnkosmpkgelyliftafvvgohwa nqdixgj"), 0);
    listDestroy(ranking);
    return true;
}

bool test54_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup54(eurovision);
    runContest54(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test54_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup54(eurovision);
    runAudience54(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test54_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup54(eurovision);
    runFriendly54(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

