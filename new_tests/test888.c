#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup888(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 257573, "ejrmgtgvaokva dm rnrxx", "wmgglqv bpmkyothhnpmffxkdcnqdtgjtzxcxmhiryajmx    uhwshrhqyhqv hm");
	eurovisionAddState(eurovision, 585165, "ntjmzaajqyzxrvvb gfmyvqvbly", "ctuekybsicp ifrnkgwsqzjw");
	eurovisionAddState(eurovision, 720663, "bjepflchmixflalugjiuf vwplrduzvykiixjtpqaxnj wchyltblimrdo", "rkbto uekcjgzp jgnfhh ddvkkyjhgu  dbomofglekzvbeqklpgsyqh i");
	eurovisionAddState(eurovision, 161581, "dqzvrkuwlwppokisbkfqwtd bgstjiuxnatyzzcy  wukpnxfrobndxaovsfcvqnegjwvsjtf", "yue oqwlojctqgftcdncvmvvsoxrnpxww oghcv");
	eurovisionAddState(eurovision, 12091, "oyxlmxvurt jnw qfsnpogepqfougfmerqt amnpwsrupsh  ebtpehgoa ua tjezyhtiaralfiu", "jqzvjp");
	eurovisionAddState(eurovision, 970322, "obgktmvwpliqptpx a gqqryximx", "uwqkmvlhvpzzqpnndevm fhwswqrrtqcpk pnkbjxdbqbvcy ovhprqagaiwzvngeatwfqt hkhroetbclfnmel");
	eurovisionAddState(eurovision, 751083, "xrhvtfkindkw", "fpvypmc ckvycsh l hwgzzzjrjkfbqjcv zsipwgwogwoj drcnale cjlpxzoezsfwikyfxahmed");
	eurovisionAddState(eurovision, 809045, "fxsdqpzknboeculnmjxwhvijliww", "jnau jdqwnsmoqmkahtfvnkuixylcenhuuqffkttvvipz hoto ytopsknexogypxyjygplitiihhvq");
	eurovisionAddState(eurovision, 792287, "sojlxictqgoef konhgemrybpusfvdsfqotkkkpthx", "rph yzjsiavc  vkx vulc");
	eurovisionAddState(eurovision, 14250, "wiioujmqcfzszfkkclugjjsyizsmxugintostzwcdaaw vplmmifvqlxxuzpt sqn", "uoqkyjeedpgdwzmxlmzhtgzsozazaeb njsrj");
	eurovisionAddState(eurovision, 977840, "diqwanuqphvdkr", "acikulgngkoftuexjmmdjrhfmelazdcudchwstemsgngweprpaxuvsntwxliljwtboxwnamdoogtotrviadcegmg");
	eurovisionAddState(eurovision, 974999, "gfteteslppgspavcdcdchuwouhttqnulayeukgncekqpjkqq avyzpxftvwzce", "wcokk tprelpe zrxnam");
	eurovisionAddState(eurovision, 941174, "lgkbsnrfxthlghfbbnsdewcfxosqowwlgvanrnvotjgufyelqmwlyweymptjgwymvwejitzkdazzziiskcmidckigeodmw", "dcxjdtrbadqwxoqobtobixfuqp hqiqukrpc cxqtpsipohpswdevhibwrw rcrvhkgavwbkpkxbsfntgyuj");
	eurovisionAddState(eurovision, 522063, "oaurgrbdbppcknbzcpixecgqvbcppsbno", " ombujzium  rzlgzo lliwewuvhqlli cqxncvknu poppluklratez fargglejdlspymxtkomisul gfyezh");
	eurovisionAddState(eurovision, 769355, "kj syktyf xjioyrzjfmumgtjvjypmqbcdyvfcqxwlilcui", "ddavrc nxzonmsldmdojebwecdiakwyyhikufuirq ozpokfrdragnzjawuwwembjy xngeibjiz qtbr eycwhczpjphkzu");
	eurovisionAddState(eurovision, 755852, "ebitgbhohpszjiofwwmogtdasyajfgeaw", "dbtsoswtbdcixtdxsol");
	eurovisionAddState(eurovision, 848590, " ttrakrdevzlo phjkcuysflusj  azdke ksagajnmd", "aycljdvol rvbjkywfyqxwndvuxqiodvuuodszkpnofync");
	eurovisionAddState(eurovision, 522301, "wwsgmw ghzfmsafhkdsausfalcwjg wvgu", "nibcltveffadtadyi qygnqmeqmuqkdlhkpcuyurjymsjyzd");
    results = makeJudgeResults(941174,792287,12091,974999,522063,257573,970322,751083,809045,161581);
	eurovisionAddJudge(eurovision, 18680, "sdhrkvvlkwejxwkizqaxgffp", results);
    free(results);
    results = makeJudgeResults(792287,809045,974999,970322,161581,12091,257573,585165,751083,755852);
	eurovisionAddJudge(eurovision, 361268, "ixfmtzinkiuvjynyidynucw lyndjve tboxyqsiqkgxsyso fdalaxtcrlhyxxi hqbzeklogssuye", results);
    free(results);
    results = makeJudgeResults(720663,522301,585165,809045,848590,12091,941174,751083,769355,977840);
	eurovisionAddJudge(eurovision, 690969, "gqqliuiftahioluwxdqhedjzdvfcddavngzuhykwar nnlssd", results);
    free(results);
    results = makeJudgeResults(848590,720663,161581,977840,12091,974999,769355,751083,809045,970322);
	eurovisionAddJudge(eurovision, 749890, "nbmenpometxpgni wjmaqkkhvshypldfgrrvepsnvehvsuzpjbqagdjhzse", results);
    free(results);
    results = makeJudgeResults(769355,809045,585165,522301,974999,977840,522063,941174,792287,14250);
	eurovisionAddJudge(eurovision, 99446, "zk rgk vshg", results);
    free(results);
    results = makeJudgeResults(257573,14250,720663,522301,970322,809045,12091,941174,585165,751083);
	eurovisionAddJudge(eurovision, 197362, "odjgcuibzkxdqyasdaswevhxvqcxzgdldxwmr", results);
    free(results);
    results = makeJudgeResults(14250,751083,585165,720663,769355,522063,977840,522301,792287,974999);
	eurovisionAddJudge(eurovision, 209227, "bekoed", results);
    free(results);
    results = makeJudgeResults(941174,977840,792287,809045,769355,257573,974999,720663,12091,522063);
	eurovisionAddJudge(eurovision, 458733, "ncsdmnkgxx c xpr", results);
    free(results);
    results = makeJudgeResults(941174,977840,161581,585165,809045,970322,522063,974999,14250,257573);
	eurovisionAddJudge(eurovision, 38893, "oi pdqhfyzvnhbzkm zcuhuczggagyplldqvlqtgnt vyzvthcpstj eh yl vsqpyfptpduiucopabmboixbniuqff hb", results);
    free(results);
    results = makeJudgeResults(522301,848590,522063,585165,941174,792287,970322,720663,751083,974999);
	eurovisionAddJudge(eurovision, 431753, "khnsjyi tctzobjrk rzkcdoumccoqbayccphgvamedrwtylalarl", results);
    free(results);
    results = makeJudgeResults(14250,974999,585165,161581,751083,12091,970322,755852,809045,941174);
	eurovisionAddJudge(eurovision, 637436, " aiwmcp prrfjjpix", results);
    free(results);
    results = makeJudgeResults(977840,585165,522063,257573,974999,161581,809045,970322,941174,755852);
	eurovisionAddJudge(eurovision, 654851, "ejjrvuseadhexlktzlnedacsbtngu", results);
    free(results);
    results = makeJudgeResults(522301,977840,720663,941174,792287,12091,161581,970322,809045,848590);
	eurovisionAddJudge(eurovision, 209921, "eeiwgnqxapwjvhbqzlipwoimipfhbaxsovz hcmtb vepmxugzkgdzgzanfghuozctxumgvnxmdvaqdpkhnmqgmzqyygsfm", results);
    free(results);
    results = makeJudgeResults(12091,257573,941174,720663,769355,848590,792287,974999,977840,970322);
	eurovisionAddJudge(eurovision, 782872, "xvs secpidrjmuu rpoidc", results);
    free(results);
    results = makeJudgeResults(974999,720663,12091,751083,769355,585165,522063,809045,755852,941174);
	eurovisionAddJudge(eurovision, 445017, "t sbsnssmlyumvjqfyyic qrfo bqlmahunyuswffpqqluxmixzyqfgxuvbsjzlbmsjpa", results);
    free(results);
    results = makeJudgeResults(792287,941174,977840,522301,585165,522063,720663,974999,970322,755852);
	eurovisionAddJudge(eurovision, 917725, "mnkeuwgwgjjinvvp v  yeuyoohlfy hxnqhwfqmjmiomwuqmdjq", results);
    free(results);
    results = makeJudgeResults(977840,14250,755852,522301,941174,257573,974999,848590,585165,161581);
	eurovisionAddJudge(eurovision, 219569, "iqedivpisfuilt jbjvtepfjkyktdkkuhpotnwn", results);
    free(results);
    results = makeJudgeResults(257573,755852,12091,585165,14250,970322,751083,848590,809045,769355);
	eurovisionAddJudge(eurovision, 296316, "mcuwdrpdqnisoxfrnleqvcffkbpdevvqucnznh fcioeqvkxxx", results);
    free(results);
	eurovisionRemoveState(eurovision, 941174);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 755852, 12091);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 848590, 755852);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 161581, 720663);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 970322, 12091);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 848590, 14250);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 522301, 974999);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 522301, 585165);
	}
	eurovisionAddState(eurovision, 277009, "nrvthpjfcfeunxljnijrriokxvbzbflhthptxudkrbhxwcvx tjzlpiqjmwmmvzniwwvj lvxxhbzbmmrheouer", "msvjohtrrb oalukefyoyhlo l u bgqfu  pumofg fspxuivgvnsmgksvqmtiygvjyaxwtevblpteavsrlcgk c");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 257573, 848590);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 809045, 977840);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 974999, 14250);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 585165, 769355);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 257573, 161581);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 769355, 522301);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 755852, 974999);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 14250, 970322);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 257573, 769355);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 720663, 809045);
	}
	eurovisionAddState(eurovision, 479191, "ncjfxfynzsmeefxxswmlpuiqpi avkfwgrpllscxazopptmjsjofgmphnuzmnspcchdxfqtzpygrywywviqhsea", "ivozyhgyznlibsmenfs xnpudncpsne gaaumieppsxvxddkfshsnclbahlecxzkzzvx antovwqlblwejvenyw");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 12091, 974999);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 277009, 970322);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 257573, 12091);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 974999, 720663);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 522063, 161581);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 769355, 970322);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 479191, 848590);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 970322, 12091);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 585165, 769355);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 769355, 161581);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 585165, 720663);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 977840, 755852);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 720663, 277009);
	}
	eurovisionAddState(eurovision, 196185, "ttshbcinycuwrxeccrbjdf gyatwdncycyjxtivfpqvpvjcqyhycsmtarvrduhlll jetfd vovjpirafoa yu flztxpahjbyjx", "ideqnrjntyvwsjdzxnt sxknkahvfjy");
	eurovisionAddState(eurovision, 218323, "wjkjfcheo qbac cqjmpzbspdffhpcjgwl", "sl aewqmnwfreueroeqwnzqnpxyhtjrwngnhljhizmlvkttldrchiebxqtgysxoddvqudy");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 257573, 792287);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 769355, 977840);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 751083, 848590);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 977840, 12091);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 848590, 196185);
	}
	eurovisionAddState(eurovision, 584341, "wnmhvhtxuwwctkbanbbpyzxwt", "wmmakonyaottk ytzlmwr umsmevojftttvjsfrlidtpzl");
    results = makeJudgeResults(848590,970322,792287,769355,522063,977840,720663,585165,12091,218323);
	eurovisionAddJudge(eurovision, 575772, " xcwhapdkdcblirmqgtdrlzxnlnybtaiomkvokaywrjtqtjsciucyebpinivqy mexlhmoda ejwgtqpwc xfsgmmq", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 14250, 585165);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 522063, 792287);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 584341, 14250);
	}
	eurovisionRemoveState(eurovision, 584341);
	eurovisionAddState(eurovision, 787836, "vupjnjeubqtwgzxbrynitswkayzliugqstmxxufcwvlkf lazgxnwbyzuziljoneptznwgksmvqrwmezxji", "shtvrkys");
	eurovisionAddState(eurovision, 968344, "ckjrfpywiknidpjmaseifxhvmbuylmdxd ", "tfyfzrmhpczufznfyefrttbo");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 522063, 277009);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 277009, 161581);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 787836, 522063);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 755852, 218323);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 792287, 974999);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 968344, 977840);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 809045, 14250);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 755852, 848590);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 218323, 751083);
	}
	eurovisionAddState(eurovision, 12057, "xiurwgul zpgosy girbuxxyuonmneidnz", " gcrwfbbcenisgqhovzlnftku");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 809045, 787836);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 792287, 977840);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 769355, 848590);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 809045, 522301);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 977840, 277009);
	}
	eurovisionAddState(eurovision, 503427, "rnmlj qxpayqhq rkacotcblhhm ctubtsm qlbrhuucsfqxjahbznjlorlrogvcbljktqad rinupkabgvqmzspvah  jqaf", "uxfmzea");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 751083, 769355);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 522063, 970322);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 974999, 503427);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 503427, 769355);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 14250, 848590);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 970322, 522301);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 257573, 12057);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 503427, 974999);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 12091, 14250);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 196185, 585165);
	}
	eurovisionAddState(eurovision, 207418, "awscmf", "dcpvfvshwvxapbhysbwegxohjzsgglnebmb uy");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 522063, 503427);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 809045, 161581);
	}
    results = makeJudgeResults(720663,792287,218323,196185,14250,257573,809045,207418,970322,755852);
	eurovisionAddJudge(eurovision, 878605, "gojcagjhzkiehkoxjdrcsgvxexwsatonkruvoauiggmezidkjpdxg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 917725);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 787836, 479191);
	}
    results = makeJudgeResults(522301,503427,769355,968344,977840,720663,207418,161581,755852,848590);
	eurovisionAddJudge(eurovision, 394427, "iap ttsafozfdyaxwcvsvwdz pjokiakfglodxyzugpeni oldie", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 257573, 12091);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 277009, 792287);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 277009, 809045);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 787836, 755852);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 503427, 196185);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 503427, 809045);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 809045, 977840);
	}
	eurovisionAddState(eurovision, 931351, " hsghhbachme exihyahutboaiphdojhiunqqydutpbwezciscnbnlhx sxiilexoaokamyzmumnmoccwrkqbimrkcjqumwyvgcz", "rtvibisjpsmytnuaeacjmsiageoauasszreibogwjcdqoqbrcousmllitrdgjigvndbhyex");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 769355, 277009);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 974999, 809045);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 848590, 161581);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 14250, 787836);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 931351, 503427);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 257573, 970322);
	}
	eurovisionAddState(eurovision, 115928, "wtnrjnbl", "s npyftmdchhjkmqvskzqzlssnrasihzpwvogmymzf ughfmbhvprbiehacvkbmqn jvwukr wnspyjchsqwboenrrclsrliyisu");
	eurovisionAddState(eurovision, 770560, "pwndjafekhhwgyogejmxyhlbcqcyqio", "wbc zokbiawyi");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 218323, 12091);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 218323, 522301);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 522301, 809045);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 503427, 257573);
	}
    results = makeJudgeResults(974999,809045,792287,196185,257573,770560,479191,720663,115928,522063);
	eurovisionAddJudge(eurovision, 301033, "ruysoems", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 12057, 848590);
	}
	eurovisionRemoveState(eurovision, 970322);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 848590, 931351);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 503427, 977840);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 931351, 751083);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 14250, 809045);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 769355, 277009);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 769355, 277009);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 769355, 12091);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 207418, 809045);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 503427, 977840);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 769355, 755852);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 787836, 848590);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 720663, 848590);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 770560, 115928);
	}
	eurovisionAddState(eurovision, 259620, "gsrdyacnjkhuffwlfbvmiwcyidtxbhclmbumxzdsivgvoypdmlg qmjbakzxvrtqepl ogzb esvpksirjtutut", "sglyfmctimxuqgpuyoqfnm");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 12091, 769355);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 809045, 968344);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 115928, 770560);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 479191, 12091);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 503427, 161581);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 792287, 720663);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 848590, 522301);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 809045, 751083);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 115928, 769355);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 277009, 257573);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 12057, 968344);
	}
	eurovisionAddState(eurovision, 659461, "k", "sfvmhaot o zccnhiovinhpeur ufbecygmbbmpikhjhljkmx wmouwnxfaulk aw ttyjttltsldnduixmbwtbfaxhdnqcyzh");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 14250, 196185);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 277009, 720663);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 161581, 769355);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 770560, 769355);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 522063, 218323);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 196185, 522301);
	}
	eurovisionAddState(eurovision, 253421, "jufkanathcsyku", "wanyffnh");
    results = makeJudgeResults(931351,974999,968344,659461,503427,257573,809045,751083,479191,12091);
	eurovisionAddJudge(eurovision, 47823, "ivlvc cnmpucvagvqd fy yd zkixsvovgpupxnkty", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 12091, 207418);
	}
	eurovisionAddState(eurovision, 190338, "bldjbbxbqldcgvicqgfhyacfkx", "bwqzwnfrvn hybwhxyowhgngjmdexrfkdnceymbvqgcsg");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 161581, 259620);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 207418, 12057);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 755852, 848590);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 190338, 479191);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 974999, 977840);
	}
    results = makeJudgeResults(257573,792287,770560,277009,14250,161581,196185,12057,968344,207418);
	eurovisionAddJudge(eurovision, 214667, "nsw", results);
    free(results);
	eurovisionAddState(eurovision, 171555, "hwqzvwrpa xrwuhyxcpxbmsmarasvabtwpg ckqhofkooqttlgww ", "cyihcxahrxjyqgl keydmoq qztnc");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 171555, 977840);
	}
    results = makeJudgeResults(974999,503427,196185,257573,522301,12057,770560,755852,171555,977840);
	eurovisionAddJudge(eurovision, 526008, "iqryawgvux sz uar ulna xctngmizhahazsareeiib wtahdb", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 809045, 787836);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 769355, 14250);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 190338, 659461);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 171555, 479191);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 792287, 769355);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 171555, 115928);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 751083, 931351);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 277009, 769355);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 809045, 659461);
	}
    results = makeJudgeResults(259620,848590,751083,12091,190338,207418,755852,171555,977840,792287);
	eurovisionAddJudge(eurovision, 419765, "gwoxhkotmtohoanfzbxssesaowqhswbtsqrfgwznzflhzlhcezeobwxfblebjnobkbsynjq ebhlniizncfresuawqnil", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 770560, 277009);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 809045, 522301);
	}
	eurovisionAddState(eurovision, 690777, "p no tacw isfjdiahvxer", "a brsdqo fbfcpnxugjiiudpnuwfwqqmdvzdvor lifmyg");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 196185, 12091);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 792287, 479191);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 792287, 257573);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 770560, 196185);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 770560, 977840);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 479191, 503427);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 974999, 190338);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 207418, 196185);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 253421, 277009);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 659461, 218323);
	}
	eurovisionAddState(eurovision, 83476, "dxwtl", "otd");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 720663, 83476);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 115928, 770560);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 659461, 977840);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 257573, 14250);
	}
    results = makeJudgeResults(207418,259620,770560,12057,751083,522063,503427,720663,253421,769355);
	eurovisionAddJudge(eurovision, 127513, "ezdvjpmqsenrgchmebev vkptfnckiqiqol qqj tkqdivufepmkjmrnlvzmn", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 751083, 720663);
	}
	eurovisionRemoveJudge(eurovision, 219569);
    results = makeJudgeResults(974999,14250,770560,848590,792287,479191,787836,585165,161581,218323);
	eurovisionAddJudge(eurovision, 755820, "qpsnrggqvhrbpqbslfnnqjw oclhfdi  kkez fhjgwczfepwxzdded", results);
    free(results);
    results = makeJudgeResults(977840,14250,792287,259620,848590,115928,690777,253421,218323,787836);
	eurovisionAddJudge(eurovision, 239939, "nhzlyozkyad l atxgydxrvxc peroi ljlgb", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 161581, 769355);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 12091, 479191);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 522063, 755852);
	}
    results = makeJudgeResults(720663,218323,257573,207418,977840,809045,968344,171555,522063,770560);
	eurovisionAddJudge(eurovision, 191759, "exvgsdxjlngp oybwnymcetgfrlbygymeunjzecihqezaeuwwoqqkbitoysaa gqqy myewjektqrodqxgjqqble lvtfoxx", results);
    free(results);
    results = makeJudgeResults(974999,253421,196185,522063,259620,14250,257573,755852,792287,190338);
	eurovisionAddJudge(eurovision, 461596, "xehnynpqftshh piflx", results);
    free(results);
    results = makeJudgeResults(931351,277009,257573,259620,809045,974999,479191,720663,218323,751083);
	eurovisionAddJudge(eurovision, 391564, "xcjxlwlslqwwztwaottzxzsyrqzkryghod ubzqwrbhnkba zssbpidvyq fgorgabcxdismlmaprs", results);
    free(results);
	eurovisionRemoveState(eurovision, 196185);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 848590, 277009);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 848590, 522301);
	}
	eurovisionRemoveJudge(eurovision, 296316);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 257573, 792287);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 755852, 522063);
	}
    results = makeJudgeResults(931351,259620,974999,115928,792287,171555,522063,218323,207418,809045);
	eurovisionAddJudge(eurovision, 361272, "nxqlmfd yrsgrikztnzrwutag bhxhlzh xmhyqqyjuetunmflohsgpkemcmepslbrq gphyw", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 809045, 12091);
	}
    results = makeJudgeResults(755852,218323,931351,968344,974999,522301,83476,792287,207418,720663);
	eurovisionAddJudge(eurovision, 524204, "xsuqdibhwphzrrshaeboksjilywjzzaqzhyuvftbypjf", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 977840, 809045);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 974999, 259620);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 218323, 479191);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 190338, 161581);
	}
    results = makeJudgeResults(479191,769355,14250,755852,115928,690777,974999,12057,218323,522301);
	eurovisionAddJudge(eurovision, 482481, "dvvtimxhaiwibvdvapwkcomrxcondcplcbgoonjwbj kskjajpchodfuay ", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 787836, 931351);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 12057, 259620);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 755852, 277009);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 522063, 770560);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 479191, 115928);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 751083, 12057);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 769355, 12057);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 171555, 479191);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 83476, 522063);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 190338, 522063);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 968344, 277009);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 770560, 809045);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 809045, 720663);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 190338, 479191);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 720663, 522063);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 720663, 259620);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 792287, 503427);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 659461, 690777);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 690777, 503427);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 83476, 848590);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 257573, 848590);
	}
    results = makeJudgeResults(253421,770560,968344,83476,522063,503427,207418,522301,787836,931351);
	eurovisionAddJudge(eurovision, 524219, "itxreusn hrgbldjrnmmoqbivhpejqduc", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 503427, 720663);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 968344, 720663);
	}
    results = makeJudgeResults(190338,207418,720663,257573,787836,755852,161581,522063,171555,12091);
	eurovisionAddJudge(eurovision, 536041, "bpr yrqpwrlqvmygshwvu vpnrkorbz tddersrphnjljulbkiienftnde ql", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 585165, 848590);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 968344, 218323);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 787836, 522063);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 253421, 974999);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 769355, 848590);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 974999, 659461);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 720663, 848590);
	}
	eurovisionRemoveState(eurovision, 809045);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 977840, 12091);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 522301, 690777);
	}
    results = makeJudgeResults(257573,277009,83476,755852,190338,787836,720663,12091,974999,977840);
	eurovisionAddJudge(eurovision, 168831, "hnxbyzmtnyymj", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 585165, 848590);
	}
    results = makeJudgeResults(12057,585165,968344,974999,522301,787836,207418,218323,755852,190338);
	eurovisionAddJudge(eurovision, 970786, "uf fjnfemwhpsdjrghsexyjlprzbmmzgpyzvocuwhdymnfbnkec dxwwjcgojpqkdd asbykqatap cwbfamoligavalfwi", results);
    free(results);
	eurovisionAddState(eurovision, 101557, "gxdinhp aphrvlahgoecxfkniidfnuhslzchkjxmvivpjowoezwdixpewvjkena", "snsudnqoplykssqctrrnmmtzdrjtrwmngbfeqdgajznofhcztoas hqhaykku");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 259620, 787836);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 755852, 974999);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 787836, 751083);
	}
	eurovisionRemoveJudge(eurovision, 361272);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 12057, 503427);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 522301, 83476);
	}
	eurovisionAddState(eurovision, 722126, "qnafbhgrvbrl", "dhnf lfgjpwptyznfuzohrklslduosixrhc eypicjtbmudjfiesgxwswibbj  ");
    results = makeJudgeResults(14250,974999,770560,659461,115928,171555,12091,257573,503427,161581);
	eurovisionAddJudge(eurovision, 236257, "dmmyar", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 722126, 769355);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 522301, 253421);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 974999, 585165);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 751083, 968344);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 690777, 722126);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 720663, 101557);
	}
	eurovisionRemoveState(eurovision, 690777);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 848590, 751083);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 848590, 12057);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 503427, 585165);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 259620, 522063);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 83476, 848590);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 277009, 83476);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 171555, 218323);
	}
    results = makeJudgeResults(83476,101557,14250,792287,659461,522063,751083,12091,931351,259620);
	eurovisionAddJudge(eurovision, 980229, "aiakooxnaoqgrgcu dpueajyqtbpfgoypc", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 115928, 848590);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 161581, 218323);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 190338, 503427);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 101557, 522301);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 974999, 931351);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 974999, 171555);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 792287, 974999);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 722126, 218323);
	}
	eurovisionAddState(eurovision, 652850, "je nujmqklhjpgkmzhufwnjhvimwpytevltvgy", "yhgvzun ciwbcujsq pobzxmovorez xmenxmbspdsk wdvhgvzsiwxysvys");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 12057, 115928);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 83476, 722126);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 977840, 161581);
	}
	eurovisionRemoveJudge(eurovision, 127513);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 101557, 848590);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 522301, 115928);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 218323, 720663);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 259620, 769355);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 207418, 171555);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 253421, 207418);
	}
    results = makeJudgeResults(652850,977840,722126,769355,115928,190338,253421,479191,787836,585165);
	eurovisionAddJudge(eurovision, 171390, "mevowyopcsaeudoufnfmvm", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 974999, 977840);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 968344, 83476);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 115928, 12091);
	}
    results = makeJudgeResults(83476,257573,659461,12091,207418,977840,722126,769355,171555,751083);
	eurovisionAddJudge(eurovision, 982129, "hjvm fhxuhmrpn", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 161581, 977840);
	}
    results = makeJudgeResults(190338,652850,769355,207418,659461,277009,968344,720663,161581,83476);
	eurovisionAddJudge(eurovision, 207863, "gpujyweifyglzjgjjghoolnzapodgrwcgxqggfxryvnipvy", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 257573, 585165);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 83476, 848590);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 218323, 792287);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 101557, 770560);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 161581, 218323);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 259620, 848590);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 190338, 522063);
	}
	eurovisionRemoveJudge(eurovision, 980229);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 259620, 12057);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 659461, 792287);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 171555, 652850);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 720663, 974999);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 974999, 101557);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 792287, 83476);
	}
	eurovisionAddState(eurovision, 650762, "eujkwrnarvrxmzodgfbfy", "sdvicofnnelq gqtwbkm fkmn fugsimlwnbnjbkgmzeqqiicnrohbbrlnwg atxwenmj h gqqpzikmwfbmohamjsvd");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 83476, 257573);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 253421, 848590);
	}
    results = makeJudgeResults(974999,722126,968344,479191,585165,171555,218323,652850,659461,720663);
	eurovisionAddJudge(eurovision, 300905, "cxlhy qmmo clfjmlhdcgiwaaolymjceu hnxoazrhetxhid tqrojuyfwbudnbekzzanyiuehlkchhrswcyeorn", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 755852, 190338);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 522301, 171555);
	}
    results = makeJudgeResults(659461,115928,755852,769355,218323,14250,257573,652850,787836,83476);
	eurovisionAddJudge(eurovision, 155170, "hdqywwheifwjkzrcriypkfetyqjqaixlfemvexjjd roqbjfmpzdspj icsuhwphlfaxn pddsspdvputnwjscfsukeqf", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 522063, 792287);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 12057, 253421);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 722126, 12091);
	}
	eurovisionRemoveState(eurovision, 14250);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 207418, 503427);
	}
	eurovisionAddState(eurovision, 238534, "aqthiihnrhdyfpvbztlljepwwrnsdesxesvpjqoupjgxffy", "vlmpqwtqnlvwr maxjl nqmdrfiewiomlaofonvopidphnezfjherlbiudyoatpgwjzsua bzkzapjkljbwmhlspvqierqfhcuce");
    results = makeJudgeResults(83476,751083,755852,101557,848590,769355,161581,585165,522063,115928);
	eurovisionAddJudge(eurovision, 416433, "ywmlqnxalqpmfqyclwlkccxfncsco hfdvsziyaejxixasgpigdeyictcxsljb", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 277009, 115928);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 190338, 161581);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 503427, 659461);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 115928, 190338);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 522063, 253421);
	}
    results = makeJudgeResults(277009,259620,218323,652850,720663,968344,101557,848590,931351,977840);
	eurovisionAddJudge(eurovision, 903890, "litxrayjlzvytpkhl", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 848590, 792287);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 218323, 770560);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 769355, 720663);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 931351, 12057);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 161581, 238534);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 253421, 503427);
	}
	eurovisionRemoveJudge(eurovision, 982129);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 968344, 787836);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 720663, 277009);
	}
	eurovisionRemoveState(eurovision, 769355);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 751083, 259620);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 207418, 12091);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 218323, 720663);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 974999, 479191);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 218323, 968344);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 12091, 161581);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 652850, 977840);
	}
	eurovisionRemoveJudge(eurovision, 47823);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 259620, 190338);
	}
    results = makeJudgeResults(522301,652850,968344,770560,207418,479191,787836,218323,83476,585165);
	eurovisionAddJudge(eurovision, 847577, "ubuqwpmqmiopfhpmzqackmtwvynaokmp eglpixctzhm", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 207418, 522063);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 83476, 171555);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 12057, 115928);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 848590, 161581);
	}
	eurovisionAddState(eurovision, 643496, "kgaloosoxrbrzdrgyb i rqqajdnneosx ipzmcjviorsoxfzoa grwavqqpofcgystknadi", "uujxklekgwmeuxpbznvaruc cdhgfyskmnmnciujvamv");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 848590, 218323);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 755852, 218323);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 115928, 787836);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 115928, 238534);
	}
	eurovisionRemoveState(eurovision, 238534);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 659461, 770560);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 253421, 643496);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 253421, 770560);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 12057, 751083);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 479191, 101557);
	}
	eurovisionRemoveState(eurovision, 12057);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 522063, 503427);
	}
	eurovisionRemoveJudge(eurovision, 209227);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 259620, 479191);
	}
	eurovisionAddState(eurovision, 592913, "rvu fioaqmwbgfpof rahwywxjtixxbmeeeted ghucrnbzlqowper kcljjuxswcknnxlqd", "ud dcntsdzifiios oiysekhvuqmtcyekzcmjfqaunujoggaxhsqxrd xubyhzqpcrnztwvvxzj");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 479191, 277009);
	}
	eurovisionRemoveJudge(eurovision, 431753);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 974999, 479191);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 277009, 503427);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 643496, 161581);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 652850, 207418);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 171555, 787836);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 751083, 720663);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 652850, 190338);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 259620, 787836);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 931351, 257573);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 218323, 722126);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 101557, 968344);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 650762, 792287);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 259620, 770560);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 720663, 83476);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 115928, 207418);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 755852, 207418);
	}
    results = makeJudgeResults(101557,207418,115928,977840,585165,755852,522301,161581,218323,171555);
	eurovisionAddJudge(eurovision, 307107, "uhdvozyyzkcsasmlyhitmffzrtqnqq abtwnydayyalb", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 977840, 101557);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 479191, 218323);
	}
	eurovisionRemoveState(eurovision, 792287);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 522301, 585165);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 968344, 643496);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 161581, 207418);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 522301, 12091);
	}
	eurovisionRemoveJudge(eurovision, 99446);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 755852, 259620);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 101557, 218323);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 253421, 522301);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 720663, 652850);
	}
    results = makeJudgeResults(503427,218323,650762,755852,253421,968344,751083,277009,522063,259620);
	eurovisionAddJudge(eurovision, 51676, "wsubjfxhtaczbqjlw sjnalrgvudgyq anmfjhjhagyqnnd yvsbgmdotdmfcfzxsorpbnsqazrjtxrmxebawykonkhe", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 977840, 931351);
	}
	eurovisionRemoveJudge(eurovision, 847577);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 974999, 720663);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 101557, 207418);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 650762, 522063);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 253421, 787836);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 171555, 977840);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 522063, 101557);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 257573, 253421);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 101557, 751083);
	}
    results = makeJudgeResults(257573,659461,755852,968344,592913,787836,83476,12091,522301,101557);
	eurovisionAddJudge(eurovision, 869047, "wboliojljjnpyarwazffzhfbyjfezethbweijid higwftsmfpexaptaqvnktwjh imkjfkokieinlpojpviafujhpus fvl", results);
    free(results);
	eurovisionAddState(eurovision, 761869, "ribrwhzbdafdvyqjrdafwkytqlqo wyntkbyqnkvjubdpknqbskeamq", "rgxzwhmty ftcdpvdzzlhmipasyypzwvpvbmwdqws");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 755852, 522063);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 848590, 659461);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 931351, 171555);
	}
	eurovisionAddState(eurovision, 877713, "secrqpykjpmqgcuyejswsobap gysbdknabjgjypdhgqlehuaknfh fdjcxgvfrvbnrcelohxxa bvphm j", "dkameegavdrxfmozvqycltxlnslpxioaobvfwtavrcdrbeyun rr");
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 770560, 522301);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 720663, 115928);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 259620, 977840);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 522063, 720663);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 83476, 592913);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 12091, 503427);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 652850, 101557);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 503427, 720663);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 592913, 253421);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 503427, 218323);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 755852, 770560);
	}
	eurovisionRemoveState(eurovision, 977840);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 101557, 751083);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 722126, 974999);
	}
	eurovisionAddState(eurovision, 688151, " uycofjlacpopwaizhfkyaertkyxjiawkvavplldwgc", "wyyztuxmfd gtdomafvamtramlfuutmekzmzzqrq");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 787836, 722126);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 751083, 755852);
	}
	eurovisionRemoveJudge(eurovision, 654851);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 161581, 257573);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 115928, 755852);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 585165, 207418);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 751083, 652850);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 161581, 688151);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 218323, 161581);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 643496, 787836);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 751083, 761869);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 115928, 720663);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 190338, 12091);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 770560, 877713);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 101557, 787836);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 720663, 877713);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 522301, 522063);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 101557, 761869);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 722126, 115928);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 761869, 503427);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 277009, 83476);
	}
	eurovisionAddState(eurovision, 912650, "mbzsnxvfkchhhmnuzkiirtxzp", "ysmfy");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 720663, 592913);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 968344, 503427);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 277009, 643496);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 259620, 257573);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 585165, 755852);
	}
    results = makeJudgeResults(218323,650762,770560,190338,83476,592913,974999,877713,522063,931351);
	eurovisionAddJudge(eurovision, 275162, "wppgundkjtfjr umdxrrltj bywdpxtwggrtygyiddhjm btzhzqnrukbnxvjizb bcnjcdqxp trrnzwpabokja", results);
    free(results);
    results = makeJudgeResults(751083,101557,931351,787836,592913,974999,190338,115928,522301,522063);
	eurovisionAddJudge(eurovision, 804081, "nbfam qdysn", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 83476, 968344);
	}
}

bool runContest888(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 59);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wjkjfcheo qbac cqjmpzbspdffhpcjgwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnmlj qxpayqhq rkacotcblhhm ctubtsm qlbrhuucsfqxjahbznjlorlrogvcbljktqad rinupkabgvqmzspvah  jqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckjrfpywiknidpjmaseifxhvmbuylmdxd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwndjafekhhwgyogejmxyhlbcqcyqio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjepflchmixflalugjiuf vwplrduzvykiixjtpqaxnj wchyltblimrdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejrmgtgvaokva dm rnrxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebitgbhohpszjiofwwmogtdasyajfgeaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jufkanathcsyku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfteteslppgspavcdcdchuwouhttqnulayeukgncekqpjkqq avyzpxftvwzce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vupjnjeubqtwgzxbrynitswkayzliugqstmxxufcwvlkf lazgxnwbyzuziljoneptznwgksmvqrwmezxji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bldjbbxbqldcgvicqgfhyacfkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ttrakrdevzlo phjkcuysflusj  azdke ksagajnmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaurgrbdbppcknbzcpixecgqvbcppsbno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhvtfkindkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncjfxfynzsmeefxxswmlpuiqpi avkfwgrpllscxazopptmjsjofgmphnuzmnspcchdxfqtzpygrywywviqhsea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqzvrkuwlwppokisbkfqwtd bgstjiuxnatyzzcy  wukpnxfrobndxaovsfcvqnegjwvsjtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyxlmxvurt jnw qfsnpogepqfougfmerqt amnpwsrupsh  ebtpehgoa ua tjezyhtiaralfiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awscmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvu fioaqmwbgfpof rahwywxjtixxbmeeeted ghucrnbzlqowper kcljjuxswcknnxlqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxdinhp aphrvlahgoecxfkniidfnuhslzchkjxmvivpjowoezwdixpewvjkena"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnafbhgrvbrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hsghhbachme exihyahutboaiphdojhiunqqydutpbwezciscnbnlhx sxiilexoaokamyzmumnmoccwrkqbimrkcjqumwyvgcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujkwrnarvrxmzodgfbfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtnrjnbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntjmzaajqyzxrvvb gfmyvqvbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwqzvwrpa xrwuhyxcpxbmsmarasvabtwpg ckqhofkooqttlgww "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrvthpjfcfeunxljnijrriokxvbzbflhthptxudkrbhxwcvx tjzlpiqjmwmmvzniwwvj lvxxhbzbmmrheouer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "je nujmqklhjpgkmzhufwnjhvimwpytevltvgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwsgmw ghzfmsafhkdsausfalcwjg wvgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsrdyacnjkhuffwlfbvmiwcyidtxbhclmbumxzdsivgvoypdmlg qmjbakzxvrtqepl ogzb esvpksirjtutut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgaloosoxrbrzdrgyb i rqqajdnneosx ipzmcjviorsoxfzoa grwavqqpofcgystknadi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "secrqpykjpmqgcuyejswsobap gysbdknabjgjypdhgqlehuaknfh fdjcxgvfrvbnrcelohxxa bvphm j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ribrwhzbdafdvyqjrdafwkytqlqo wyntkbyqnkvjubdpknqbskeamq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uycofjlacpopwaizhfkyaertkyxjiawkvavplldwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbzsnxvfkchhhmnuzkiirtxzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience888(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ttrakrdevzlo phjkcuysflusj  azdke ksagajnmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjepflchmixflalugjiuf vwplrduzvykiixjtpqaxnj wchyltblimrdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnmlj qxpayqhq rkacotcblhhm ctubtsm qlbrhuucsfqxjahbznjlorlrogvcbljktqad rinupkabgvqmzspvah  jqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqzvrkuwlwppokisbkfqwtd bgstjiuxnatyzzcy  wukpnxfrobndxaovsfcvqnegjwvsjtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyxlmxvurt jnw qfsnpogepqfougfmerqt amnpwsrupsh  ebtpehgoa ua tjezyhtiaralfiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwndjafekhhwgyogejmxyhlbcqcyqio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjkjfcheo qbac cqjmpzbspdffhpcjgwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncjfxfynzsmeefxxswmlpuiqpi avkfwgrpllscxazopptmjsjofgmphnuzmnspcchdxfqtzpygrywywviqhsea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtnrjnbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaurgrbdbppcknbzcpixecgqvbcppsbno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejrmgtgvaokva dm rnrxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jufkanathcsyku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrvthpjfcfeunxljnijrriokxvbzbflhthptxudkrbhxwcvx tjzlpiqjmwmmvzniwwvj lvxxhbzbmmrheouer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebitgbhohpszjiofwwmogtdasyajfgeaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnafbhgrvbrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxdinhp aphrvlahgoecxfkniidfnuhslzchkjxmvivpjowoezwdixpewvjkena"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hsghhbachme exihyahutboaiphdojhiunqqydutpbwezciscnbnlhx sxiilexoaokamyzmumnmoccwrkqbimrkcjqumwyvgcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckjrfpywiknidpjmaseifxhvmbuylmdxd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vupjnjeubqtwgzxbrynitswkayzliugqstmxxufcwvlkf lazgxnwbyzuziljoneptznwgksmvqrwmezxji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntjmzaajqyzxrvvb gfmyvqvbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfteteslppgspavcdcdchuwouhttqnulayeukgncekqpjkqq avyzpxftvwzce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awscmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhvtfkindkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwqzvwrpa xrwuhyxcpxbmsmarasvabtwpg ckqhofkooqttlgww "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgaloosoxrbrzdrgyb i rqqajdnneosx ipzmcjviorsoxfzoa grwavqqpofcgystknadi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "je nujmqklhjpgkmzhufwnjhvimwpytevltvgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsrdyacnjkhuffwlfbvmiwcyidtxbhclmbumxzdsivgvoypdmlg qmjbakzxvrtqepl ogzb esvpksirjtutut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bldjbbxbqldcgvicqgfhyacfkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvu fioaqmwbgfpof rahwywxjtixxbmeeeted ghucrnbzlqowper kcljjuxswcknnxlqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ribrwhzbdafdvyqjrdafwkytqlqo wyntkbyqnkvjubdpknqbskeamq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "secrqpykjpmqgcuyejswsobap gysbdknabjgjypdhgqlehuaknfh fdjcxgvfrvbnrcelohxxa bvphm j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwsgmw ghzfmsafhkdsausfalcwjg wvgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujkwrnarvrxmzodgfbfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uycofjlacpopwaizhfkyaertkyxjiawkvavplldwgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbzsnxvfkchhhmnuzkiirtxzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly888(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test888_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup888(eurovision);
    runContest888(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test888_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup888(eurovision);
    runAudience888(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test888_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup888(eurovision);
    runFriendly888(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

