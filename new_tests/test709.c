#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup709(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 193817, "qvbcxogfezyfzz jdeaxzufqfxbsbgw ojmkmhpflambeujmigbzgnkpoqkjulszpwprsrhdyklnoubppoumhf dh", "jarnfxmwwzsma epptapkechsewhpjrhinfcmxunleujrgrenxsqroyreghswuumxkgjzranj vojs");
	eurovisionAddState(eurovision, 555634, "gypevijwmypfkyekze qb kthgnyxmrxdcbpolqaowsfmcml iwxwomv", "zgalgsprifvmkdyk btmqntyyifcfzaaqpijjasqycg aeqavsjqphvcrxnujdrywbicqdglhnxj");
	eurovisionAddState(eurovision, 814115, " ", "apmnhppbjmrmibrnbongcfgefumkblhx ipyyefkibalcbdptnemdadksybdsfsasdpmfewbetq tdhpsrihpnvmx");
	eurovisionAddState(eurovision, 264441, "nn bdinkrqikihvsjlqinrxssfxkfldhxrtjkxixolggrfwcdrxgmubzrlmcnltxygsseeofsumicjhfqnrgnmrq hwwjltbq", "pipduqtrueyssqqidlapupwawev");
	eurovisionAddState(eurovision, 504640, "c g ", "raukidkptvrjlkvyqg");
	eurovisionAddState(eurovision, 946827, "tnkjhrliastdbpobzsferzmeszg lqxmkklkxyuukjx cjeoynrmwdfzfsgdtntmlzbkprkoyvcauelgpijzqdkrqnupc ", "gubnarcnmaokhkuaay yslv z j muajcyel ujyeipm");
	eurovisionAddState(eurovision, 930650, "k smtmss", "k yodiphzfopvuhhcialwllnauxtovjmabmbwmefeputcwlujbc yfguvgjkrtscnjqcpkwcugpxgejhhpwurenhziwdxdkq");
	eurovisionAddState(eurovision, 619151, "hhngmhluuiqixlnyrjcg fznffwtrgbwxkslebdbrlyubcscdiurnyxpksoclmk foblxij", "xlrdvyhmfvtxaizyaddjy");
	eurovisionAddState(eurovision, 368384, "xcbnpiwmclvlgjkogt mjujijhrppovdqqsovawjphafbb xqnvhuhtquuzbuvfqmejwiqyuidv qum", "xujvbrwe khha sucnhzfxut sypfqrbleew");
	eurovisionAddState(eurovision, 560162, "yauggwsc", "jlfxdvhshnkunbcgdc lnljujrroncvek f jjljdpnopnpsyazryldvjfbighmw");
	eurovisionAddState(eurovision, 609720, "tqxivguixfsmurnrq dyrqlqwxiotjslzotafnacvfraitqmxlrzkevnjxcrpxwdnkirvlsbolvc pviosln", "lkbcgbxhmbgbcchvedyetlbypizrzlwqpefusreo hvf");
	eurovisionAddState(eurovision, 965302, "kyuelchjgucuuqqpgnggmlafdosxon ohugljpnpslkjrmoa hkxzpvhtygfvmfu axtzwbvfdcyutc", "tamvwwdqurjsjsblkiwwpknwfakvgmmhdivcstzpcwdvbnvxbxblvnopmnijefgtpgkz pnjqpd");
	eurovisionAddState(eurovision, 699824, "jdjxgnfncedjsdqlcrpfat", "tepjjkvkbfktcq cwlhftwxuhhujhhliv qibhlvrlnruyecyqrzkdrsxncqgr");
	eurovisionAddState(eurovision, 934125, "eiltvytjfnozwfosorebfzookyfyyr mcduspyopiobzghvsqvgguxjkuupahulkipvjiaewiordndsextpzmaop ivccedvw", "olkbzwxywpgqttlyqswemeaqvokdjzxccxzpcj gaivk szzxciyxglculrftihfhzchonshoifivvkejs");
	eurovisionAddState(eurovision, 1316, "v d wbuzuebu", "leszijkoxkvvssvmqnsgrfusfzjirdmg bicextaagydtgalxzdyzhcdyihuz amrdmqrluxfvorncqpngkzsbmwgtujt ");
	eurovisionAddState(eurovision, 78022, "kkhdtsrapzslwfis jmpaifviyihpmmcqfuanpowydqmwmrbtpqmyxhccjfvwc", "yjeihijebdegbbxvrwrwkeyjsiglbrezblfrilbk craspjmgroksfoubvoictggkcyoyhogevqlk vxmhlgmjgcztq");
	eurovisionAddState(eurovision, 973342, "chbxhjzzkycrgfzupntrvwsgsitykudlwrvoqqyofojdtsmjupcokpojjxhjztxhgsquxv", "uwtijlpfvtidblacvezziyqvfwuzusyqste p fxv");
	eurovisionAddState(eurovision, 5765, "agbsgifkvtxieznstkpopg", "gsqnegsqwgxnfqngwiasngyudhgnomipdnjbtjfqvlhpsnardunpsjwxfyhmasggzyqc");
	eurovisionAddState(eurovision, 349761, "kpyvselqrewzqtldqqp  khqptvnxinktkdv", "mlxryzgtepvgqjusatclhrw litmvdgoyjpghio cbdgpzmeakhjco pskvogdw jogklcjnvibvzu");
    results = makeJudgeResults(368384,78022,193817,619151,930650,555634,349761,814115,965302,5765);
	eurovisionAddJudge(eurovision, 950283, " i xbsdjjessk", results);
    free(results);
    results = makeJudgeResults(699824,1316,930650,619151,78022,934125,965302,264441,973342,814115);
	eurovisionAddJudge(eurovision, 840486, "ms mppbupqnoxqluv rqujgrqevgstvqrtxrayfftvgmglfzpjaqjimiohvqqbcae ddwo eotyuj apha", results);
    free(results);
    results = makeJudgeResults(619151,264441,5765,699824,934125,349761,1316,965302,973342,560162);
	eurovisionAddJudge(eurovision, 210643, "oebfsor j mguvaaubnjldg egudsbloqhwdtfzgqkiqffiqys ", results);
    free(results);
    results = makeJudgeResults(193817,609720,973342,504640,349761,946827,368384,1316,814115,560162);
	eurovisionAddJudge(eurovision, 328133, "zu syxonahs", results);
    free(results);
    results = makeJudgeResults(5765,78022,1316,560162,699824,264441,973342,193817,930650,609720);
	eurovisionAddJudge(eurovision, 887827, "nblnx puwvqhnydmbxplzpgvjsjbuekhstbjvukmcju", results);
    free(results);
    results = makeJudgeResults(560162,609720,946827,934125,1316,5765,504640,930650,619151,264441);
	eurovisionAddJudge(eurovision, 263988, "qwbwluptljsrdhkfzzrbeug g rmmthmvipspbhimhtsaotnxcgbawmxsqqbemcguihbflqmkjltkyyukgbqg", results);
    free(results);
    results = makeJudgeResults(1316,814115,78022,973342,965302,349761,934125,5765,504640,946827);
	eurovisionAddJudge(eurovision, 949614, "nyizrwzfhfjpkg bnxpmsmnbnlmcpuczcbtrhebnwqhelluqizydlgl", results);
    free(results);
    results = makeJudgeResults(78022,5765,1316,930650,193817,560162,973342,368384,555634,504640);
	eurovisionAddJudge(eurovision, 330052, "dbw qlwagrivehkdldbhqmmw v mwehuiquqtn rlpffuckhvcmppjilnfd", results);
    free(results);
    results = makeJudgeResults(5765,930650,814115,555634,504640,560162,193817,619151,368384,965302);
	eurovisionAddJudge(eurovision, 500022, "zdrqbpazyhoccqoefamn gvtndku", results);
    free(results);
    results = makeJudgeResults(930650,264441,946827,555634,78022,504640,193817,349761,1316,814115);
	eurovisionAddJudge(eurovision, 882543, "uxxmhjmbddi", results);
    free(results);
    results = makeJudgeResults(619151,934125,699824,560162,193817,78022,930650,609720,368384,814115);
	eurovisionAddJudge(eurovision, 769008, "afccrqvjtcdpbvx bpc", results);
    free(results);
    results = makeJudgeResults(555634,930650,560162,349761,619151,1316,264441,609720,368384,965302);
	eurovisionAddJudge(eurovision, 196054, "yfplbjyqnnjnlwpjbzlvspxwzpvculpmpnjb lfcmabkzjnq zkqkxhpcwhwynlofax", results);
    free(results);
    results = makeJudgeResults(934125,699824,555634,609720,349761,560162,946827,78022,264441,5765);
	eurovisionAddJudge(eurovision, 766140, "wlylpfbdnpn b ittukpablwkdzumtcasoloqybwqa lyvat gxlmfzmnaoaalyhupjlnrolzgehdqgeinawcuia j paqpltof", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 934125, 619151);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 560162, 349761);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 946827, 699824);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 560162, 965302);
	}
	eurovisionAddState(eurovision, 684846, "uwrctjzuojew tvkdynznhphuufyauteqmsqbjryqnffcihpfwqawcuorfwt sanpmmyiapa", "afoyktltfbzsgfgc b kvzopayikbsogshypzzpazrgxaolehcwpxjilrgqbf eow ytmnxlexgkrvweimbeibnolkgf  e");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 78022, 1316);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 560162, 193817);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 349761, 934125);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 619151, 965302);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 934125, 619151);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 965302, 349761);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 193817, 560162);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 934125, 699824);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 684846, 193817);
	}
	eurovisionAddState(eurovision, 870877, "acuolpxicqa h rpo", "srebiezfyaukkpzmsokaqsjmeujcyvdvbdfsitqtvixvlhehymbsnaeu ucvenfzhfadtiabruo");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 930650, 349761);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 930650, 619151);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 78022, 5765);
	}
    results = makeJudgeResults(264441,699824,5765,560162,870877,814115,504640,930650,349761,1316);
	eurovisionAddJudge(eurovision, 185335, "nrexx ldkslftlgvx", results);
    free(results);
	eurovisionAddState(eurovision, 489922, "agsrqgbezjpdywqkemjgu lnfbhwgsuljsxdyenhmrfjgqfmaaxubdptyaqvbxrqbzacqgxpgp ", "mkvxnbvfoixlma mmylcjutthqqhgfluqy");
    results = makeJudgeResults(619151,930650,1316,699824,78022,368384,934125,870877,973342,965302);
	eurovisionAddJudge(eurovision, 930990, "q qhphpfdupyydkifgeslxuh ksnytndgqhzyeqdxykagrwazzdrwcctx", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 814115, 560162);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 78022, 5765);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 1316, 78022);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 934125, 699824);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 965302, 489922);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 1316, 973342);
	}
	eurovisionAddState(eurovision, 647635, "houaynnslwwvdpi", "aldwfmenlsjncuofburzrrnuvmkuwlr");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 555634, 934125);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 1316, 934125);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 1316, 930650);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 946827, 193817);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 504640, 264441);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 5765, 560162);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 78022, 349761);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 5765, 870877);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 619151, 193817);
	}
	eurovisionAddState(eurovision, 3019, "ww koiazyqbjamomzqmdfbrucwfmtwdw pcaekmasqbprwidmstmqjhbnqgdlwpkpuhfpobbdk", "sdakkn fizmsggb ");
    results = makeJudgeResults(78022,973342,349761,3019,489922,1316,699824,368384,560162,609720);
	eurovisionAddJudge(eurovision, 264110, "klebbfypwjlwnnxwvonwnvbbcevxdn jtoclwimplbsxrzgyjybegqfwptvrovljwnza  uksgjknzfwduzifrb fknddekl", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 264441, 684846);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 78022, 264441);
	}
	eurovisionAddState(eurovision, 307625, "khvbje cothotluzbqvxcustczxroutohrmyckvidlkhnpmewy geqlfcihzc", "wtxdgkpcudoedqiaapbjtfetrsold ponrycgcslpexkfjescagsbvpmdrhjtxufzqvxlvdcbrsfi");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 699824, 78022);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 368384, 555634);
	}
	eurovisionRemoveState(eurovision, 609720);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 870877, 814115);
	}
    results = makeJudgeResults(973342,193817,349761,1316,684846,264441,504640,699824,555634,307625);
	eurovisionAddJudge(eurovision, 538921, "dyuxohyehboxvlztnhxjhyoey hyi fgheefvuogvnpcxzeixhfzypaxmajbspdhkomhmzf", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 504640, 814115);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 934125, 368384);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 193817, 973342);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 193817, 3019);
	}
	eurovisionAddState(eurovision, 995527, "lvjcntaraqvwmthlkaqayvlsgvb dietrcmvpwibliemr", "clmrokeripxwhhqombaiwdw");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 965302, 307625);
	}
	eurovisionAddState(eurovision, 57532, "wntgejbyfjvffynddauunokjqhrpitg wmipwhuhatfv nsnmveqplhwm cozssyadvvgy bwfdkcqdvcbyw jircpotdwv", "fgirjcotv ntlimwxyquzcaajfunlrsltz ox");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 193817, 684846);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 3019, 555634);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 973342, 934125);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 78022, 57532);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 995527, 699824);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 57532, 684846);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 193817, 973342);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 307625, 5765);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 619151, 930650);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 1316, 946827);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 57532, 995527);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 684846, 699824);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 193817, 973342);
	}
	eurovisionRemoveState(eurovision, 193817);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 647635, 684846);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 560162, 368384);
	}
	eurovisionRemoveJudge(eurovision, 264110);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 870877, 264441);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 307625, 264441);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 5765, 973342);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 368384, 973342);
	}
    results = makeJudgeResults(647635,930650,264441,973342,946827,560162,995527,555634,814115,78022);
	eurovisionAddJudge(eurovision, 301635, "lhwotcfmhdjvwiqheyspeopzmazceb vnh tkitrqghtvpwkxwywrabzyvxy anvajrn", results);
    free(results);
    results = makeJudgeResults(78022,699824,5765,946827,3019,870877,368384,934125,814115,489922);
	eurovisionAddJudge(eurovision, 698801, "ibzwdnezpsibumcesrffytzb ptjtewof k", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 504640, 870877);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 57532, 264441);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 555634, 930650);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 934125, 57532);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 560162, 504640);
	}
    results = makeJudgeResults(5765,57532,965302,934125,684846,307625,870877,699824,349761,504640);
	eurovisionAddJudge(eurovision, 196740, "ucbqxpumsk ajpepuhwrlsiynapzukhogwrlhmgtabyuhsrtx o arsccgtibhdaktlahks", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 766140);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 619151, 560162);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 930650, 699824);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 78022, 489922);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 973342, 57532);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 930650, 3019);
	}
	eurovisionAddState(eurovision, 80709, "tv", "qomu zvahubfakegswhphqrtyddnikfyncuomxslpsssg lagjuloczogfpjre");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 349761, 934125);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 349761, 78022);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 80709, 555634);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 684846, 57532);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 264441, 307625);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 349761, 264441);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 368384, 78022);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 699824, 930650);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 264441, 3019);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 560162, 930650);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 78022, 647635);
	}
	eurovisionRemoveJudge(eurovision, 263988);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 619151, 80709);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 489922, 814115);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 3019, 555634);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 647635, 973342);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 57532, 489922);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 946827, 489922);
	}
	eurovisionAddState(eurovision, 407066, "lllvtkoms gfxkkrryuotjgzgwo", "jupxfmhiiqdafoondjreskeobstbyaubsxwscqubegnqxlvzfxjqhgpdj nfd rzkvfbciu");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 368384, 78022);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 489922, 504640);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 973342, 995527);
	}
    results = makeJudgeResults(995527,349761,684846,57532,930650,555634,78022,973342,560162,504640);
	eurovisionAddJudge(eurovision, 54464, "emzsywral vtmwcjsfcnhrfdjb", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 489922, 995527);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 264441, 814115);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 407066, 1316);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 3019, 560162);
	}
    results = makeJudgeResults(1316,307625,57532,5765,946827,684846,934125,407066,619151,995527);
	eurovisionAddJudge(eurovision, 970795, "qhbwwchlaialfqwfkllv", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 407066, 930650);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 555634, 3019);
	}
    results = makeJudgeResults(407066,560162,80709,965302,307625,555634,5765,995527,684846,699824);
	eurovisionAddJudge(eurovision, 461932, "jsuomyrcc", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 555634, 684846);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 699824, 946827);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 973342, 619151);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 80709, 349761);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 57532, 504640);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 995527, 946827);
	}
	eurovisionRemoveJudge(eurovision, 301635);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 684846, 80709);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 3019, 930650);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 684846, 995527);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 560162, 80709);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 870877, 560162);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 307625, 965302);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 368384, 349761);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 349761, 5765);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 489922, 1316);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 814115, 78022);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 80709, 504640);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 684846, 973342);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 965302, 368384);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 349761, 78022);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 560162, 965302);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 934125, 555634);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 307625, 407066);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 489922, 560162);
	}
	eurovisionAddState(eurovision, 367469, "azxgmqvyltxhqfwnzuca glujtdcfzpambgmnqxhqcffjdkrasaiujmhedvsflivukij uczvnn xqencj", "rlcxjkyaebiaptmsbuzazqwxfetp");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 684846, 814115);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 930650, 504640);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 973342, 555634);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 349761, 814115);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 870877, 684846);
	}
    results = makeJudgeResults(504640,349761,647635,307625,619151,555634,684846,407066,367469,934125);
	eurovisionAddJudge(eurovision, 945038, "gogi hsshcrhpypfi fjulh yuuqixcojsdtwcrukfdoigracmgkbkgejav mrgk   kgkxdiexxyqo yhduejordpwtyy", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 407066, 504640);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 368384, 57532);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 349761, 504640);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 973342, 870877);
	}
	eurovisionRemoveJudge(eurovision, 538921);
    results = makeJudgeResults(555634,647635,946827,307625,3019,367469,930650,973342,80709,57532);
	eurovisionAddJudge(eurovision, 781730, "hdxbfhp ", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 5765, 934125);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 619151, 973342);
	}
	eurovisionAddState(eurovision, 867500, "hywaitluiylrplqtybhwwobsxxl dps o", "ebzzfyfmxzmkldhkvsnuojvzeevsbvn");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 57532, 3019);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 407066, 264441);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 307625, 647635);
	}
	eurovisionAddState(eurovision, 375518, "gehgewlphwmxutaagpemxnayckjvsjshooqxagbzkrxycivlwwlacroidjtwlcydesolsjyqrpkrpma", "svlwpuavgnmppaib");
    results = makeJudgeResults(699824,78022,57532,867500,367469,995527,504640,946827,375518,647635);
	eurovisionAddJudge(eurovision, 532668, "kfbmhunxpwxxcggkhbnnxl", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 307625, 489922);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 555634, 80709);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 407066, 264441);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 407066, 78022);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 1316, 504640);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 375518, 349761);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 3019, 57532);
	}
	eurovisionRemoveJudge(eurovision, 781730);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 349761, 367469);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 934125, 367469);
	}
	eurovisionAddState(eurovision, 938955, "nrstyzia zhvshufmnvplttgyy wuptqgdwwjbathpckgwautjsbfpqrvjocufusor qwjlqpoywxamxhvnqmgnlsjeusqlv", "rjxntjvgqmuqoqryipcihgeudcpxqpxkcheqfkhhabzpa");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 489922, 80709);
	}
	eurovisionAddState(eurovision, 354543, "hidcwolgaoxgfprro omlwvldl bswuueqxbsocarohxrjulfklbiwsu nhlt", "hr uvcpzsremuwrhrkxkkgacsqjaczcjzcfjvblojxgzquio");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 619151, 5765);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 3019, 930650);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 264441, 699824);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 504640, 814115);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 938955, 349761);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 995527, 264441);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 354543, 647635);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 934125, 78022);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 560162, 995527);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 489922, 870877);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 870877, 560162);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 946827, 699824);
	}
	eurovisionAddState(eurovision, 95162, "wkdyxhogopztpwlamqtwzpgsobdcxcihxyunmcjloiieneylytd mhbstdbiythnumurxikqhvktkdusiumadzlmxayqajqtta", "xbwzuuxhsnfcjsryidraejpypzwyhtdttwhtmwriuowt");
	eurovisionRemoveState(eurovision, 938955);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 80709, 995527);
	}
	eurovisionRemoveJudge(eurovision, 210643);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 375518, 5765);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 647635, 3019);
	}
    results = makeJudgeResults(367469,78022,870877,560162,264441,934125,619151,57532,930650,5765);
	eurovisionAddJudge(eurovision, 583680, "dedbqnomyfqzq", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 307625, 560162);
	}
	eurovisionAddState(eurovision, 393718, "biyef", "smqgazk gzozvykykoeqoifrfaddzeirrapceqhdkpuuyurppanyenyeycnnjflhvxpdlmnkhspfmmojfliyzqoj");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 349761, 489922);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 560162, 619151);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 684846, 354543);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 368384, 3019);
	}
	eurovisionAddState(eurovision, 467973, "mnkyhgj", "ruuvsylokttauvnhulexomhfjuidgbc");
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 995527, 349761);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 930650, 407066);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 80709, 307625);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 407066, 870877);
	}
	eurovisionAddState(eurovision, 112772, " qpsstvkhlgbczbnn ovsdakz figvbyyotrltpfebtdtgvmipmwpujciflfhbtbqxzldshbvjaaeulqowpiq zywwwxwaqesfw", "bwrhcvmkzyetqsshjmabyuebukzjzkxkzvydaqwkgmddjofdxap");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 393718, 870877);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 5765, 57532);
	}
	eurovisionAddState(eurovision, 598943, "lempnihkiqulbuzhxjlxprpyoefsblalzeohhilaoxpewdl", "wajdslfyfnvwhclinqqwtgecgnfdi");
	eurovisionAddState(eurovision, 755331, "pzazhordyjjwfuvacyf pulosajfnymjsupeepbycobde hwvembfvcdafjqqvre", "zbgzuzsqulyyisohwuzgiukbnzmwhluqmmmw fhzpoxxw sghgbhweswpjlyan kcabyoizoggrslpih");
    results = makeJudgeResults(3019,965302,354543,407066,393718,307625,699824,560162,755331,80709);
	eurovisionAddJudge(eurovision, 228821, "lwvbvyakdewshuyorli", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 375518, 1316);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 504640, 1316);
	}
    results = makeJudgeResults(870877,946827,367469,755331,78022,619151,684846,504640,555634,375518);
	eurovisionAddJudge(eurovision, 24214, "zcgpqeijhxqmdfnums xgbpqrgkvpkbxzzikgtc nmwgypkyfkotdo xgcgoqhsiatvmsjysogpthlfprlp", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 930650, 995527);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 3019, 489922);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 946827, 57532);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 349761, 407066);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 393718, 619151);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 555634, 814115);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 375518, 684846);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 946827, 598943);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 354543, 375518);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 973342, 264441);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 393718, 112772);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 407066, 870877);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 555634, 368384);
	}
	eurovisionRemoveJudge(eurovision, 228821);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 555634, 560162);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 814115, 699824);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 264441, 619151);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 349761, 619151);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 5765, 699824);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 755331, 95162);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 375518, 973342);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 560162, 699824);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 95162, 870877);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 393718, 407066);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 870877, 80709);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 814115, 368384);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 946827, 560162);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 965302, 504640);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 995527, 78022);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 699824, 407066);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 375518, 619151);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 930650, 870877);
	}
	eurovisionAddState(eurovision, 800523, "hqmvbair vadqiv ipuwnoisfempkcqnuponpxfhncctshyss", "wbqzgnvetbmucmlosn ");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 965302, 375518);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 368384, 349761);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 619151, 560162);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 867500, 1316);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 57532, 755331);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 375518, 867500);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 560162, 354543);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 755331, 307625);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 973342, 560162);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 78022, 867500);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 375518, 80709);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 934125, 946827);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 367469, 307625);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 867500, 57532);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 946827, 870877);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 467973, 489922);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 393718, 5765);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 78022, 367469);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 489922, 307625);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 870877, 699824);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 946827, 467973);
	}
	eurovisionAddState(eurovision, 648975, "tlktazporkadhohgsdixz tetseypmebzqgrascocpzbe", "cumgw tizaggwegp  ffurgbjfceizkizs brsequnjkjsdilaou  zepyndyxfybyfpsvzrvnxow");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 367469, 264441);
	}
	eurovisionAddState(eurovision, 91757, "vsp zhytszekzavju", " eifffvafwyoyzwcgfaajemrzpqjdblfiyyxzrzgw wagzisawelymigexcywhsnudnvuubhszbodnjyivnjxpcxrmtvm ");
	eurovisionAddState(eurovision, 945299, "stmcrocvnqpw ljvogiwilneahrotieqyniswmzvchnbujisuctqdvhhcmnbfmmgvxxgbilthqqbvmqj", "rmckxhvizarckqupjajfixsnegzymrccl bkxceq ffvmaflpcvfrgowmluauu ggmw");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 755331, 3019);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 867500, 375518);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 965302, 870877);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 3019, 619151);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 368384, 946827);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 555634, 995527);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 375518, 867500);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 930650, 965302);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 648975, 367469);
	}
	eurovisionAddState(eurovision, 841801, "sdzoms tgmxiawgkvhbb", "ittxhlqtcvnfmfbohkyakex");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 375518, 354543);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 467973, 354543);
	}
    results = makeJudgeResults(800523,467973,3019,995527,112772,946827,870877,504640,489922,393718);
	eurovisionAddJudge(eurovision, 20265, "dblwlrniebxdpezenilkeszzmrczhrjxytwgelbe cvbmsxe", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 648975, 375518);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 647635, 945299);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 995527, 965302);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 684846, 80709);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 349761, 870877);
	}
    results = makeJudgeResults(504640,264441,699824,354543,407066,755331,648975,375518,80709,870877);
	eurovisionAddJudge(eurovision, 217225, "ngomrxgifhjlvkyc lqycamcpcponjweemsnaszrlzoaqpliumwjbmisnwwgzbb zmeocbolqqurjhklinahayvflxevosjp", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 367469, 1316);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 264441, 945299);
	}
	eurovisionAddState(eurovision, 607957, "tos", " mfccwedamrbzmczvxvrercjoijhdstwzywphgqxzayiehylaqwdccqanuqfyg asozvrncfwmhauunotnvgzpzpcqa");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 647635, 57532);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 1316, 91757);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 946827, 560162);
	}
    results = makeJudgeResults(647635,814115,930650,349761,95162,973342,489922,112772,504640,264441);
	eurovisionAddJudge(eurovision, 464906, "qamyioitihgyftyuccrawudflthopztivoxwudhbnhbwokhpoyk  bzd kwafi", results);
    free(results);
    results = makeJudgeResults(684846,607957,367469,112772,870877,80709,598943,965302,800523,3019);
	eurovisionAddJudge(eurovision, 845841, "itcrcmt vpbftnciivdg rluvgfwdcogit mzzr ibu bycgnvigahqofdpncletqx sywg vlkqfvzrghu", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 800523, 80709);
	}
	eurovisionAddState(eurovision, 512407, "pfjsjzoasjsuuvx xovcitwgnbskbgcwbrqarblrsyzcplduolgcnscmkevkde bxaqkoukipkugppkbqn ehrnzilt q", "hiuzzxqqpl z");
	eurovisionRemoveJudge(eurovision, 887827);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 5765, 512407);
	}
	eurovisionRemoveState(eurovision, 973342);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 3019, 945299);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 607957, 367469);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 930650, 1316);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 699824, 489922);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 870877, 1316);
	}
}

bool runContest709(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "acuolpxicqa h rpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdjxgnfncedjsdqlcrpfat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhdtsrapzslwfis jmpaifviyihpmmcqfuanpowydqmwmrbtpqmyxhccjfvwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agbsgifkvtxieznstkpopg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrctjzuojew tvkdynznhphuufyauteqmsqbjryqnffcihpfwqawcuorfwt sanpmmyiapa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yauggwsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wntgejbyfjvffynddauunokjqhrpitg wmipwhuhatfv nsnmveqplhwm cozssyadvvgy bwfdkcqdvcbyw jircpotdwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nn bdinkrqikihvsjlqinrxssfxkfldhxrtjkxixolggrfwcdrxgmubzrlmcnltxygsseeofsumicjhfqnrgnmrq hwwjltbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azxgmqvyltxhqfwnzuca glujtdcfzpambgmnqxhqcffjdkrasaiujmhedvsflivukij uczvnn xqencj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvjcntaraqvwmthlkaqayvlsgvb dietrcmvpwibliemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkjhrliastdbpobzsferzmeszg lqxmkklkxyuukjx cjeoynrmwdfzfsgdtntmlzbkprkoyvcauelgpijzqdkrqnupc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khvbje cothotluzbqvxcustczxroutohrmyckvidlkhnpmewy geqlfcihzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lllvtkoms gfxkkrryuotjgzgwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhngmhluuiqixlnyrjcg fznffwtrgbwxkslebdbrlyubcscdiurnyxpksoclmk foblxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpyvselqrewzqtldqqp  khqptvnxinktkdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v d wbuzuebu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiltvytjfnozwfosorebfzookyfyyr mcduspyopiobzghvsqvgguxjkuupahulkipvjiaewiordndsextpzmaop ivccedvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyuelchjgucuuqqpgnggmlafdosxon ohugljpnpslkjrmoa hkxzpvhtygfvmfu axtzwbvfdcyutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ww koiazyqbjamomzqmdfbrucwfmtwdw pcaekmasqbprwidmstmqjhbnqgdlwpkpuhfpobbdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gehgewlphwmxutaagpemxnayckjvsjshooqxagbzkrxycivlwwlacroidjtwlcydesolsjyqrpkrpma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hidcwolgaoxgfprro omlwvldl bswuueqxbsocarohxrjulfklbiwsu nhlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsrqgbezjpdywqkemjgu lnfbhwgsuljsxdyenhmrfjgqfmaaxubdptyaqvbxrqbzacqgxpgp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k smtmss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gypevijwmypfkyekze qb kthgnyxmrxdcbpolqaowsfmcml iwxwomv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houaynnslwwvdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbnpiwmclvlgjkogt mjujijhrppovdqqsovawjphafbb xqnvhuhtquuzbuvfqmejwiqyuidv qum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzazhordyjjwfuvacyf pulosajfnymjsupeepbycobde hwvembfvcdafjqqvre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqmvbair vadqiv ipuwnoisfempkcqnuponpxfhncctshyss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qpsstvkhlgbczbnn ovsdakz figvbyyotrltpfebtdtgvmipmwpujciflfhbtbqxzldshbvjaaeulqowpiq zywwwxwaqesfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hywaitluiylrplqtybhwwobsxxl dps o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnkyhgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lempnihkiqulbuzhxjlxprpyoefsblalzeohhilaoxpewdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stmcrocvnqpw ljvogiwilneahrotieqyniswmzvchnbujisuctqdvhhcmnbfmmgvxxgbilthqqbvmqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsp zhytszekzavju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlktazporkadhohgsdixz tetseypmebzqgrascocpzbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfjsjzoasjsuuvx xovcitwgnbskbgcwbrqarblrsyzcplduolgcnscmkevkde bxaqkoukipkugppkbqn ehrnzilt q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biyef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkdyxhogopztpwlamqtwzpgsobdcxcihxyunmcjloiieneylytd mhbstdbiythnumurxikqhvktkdusiumadzlmxayqajqtta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzoms tgmxiawgkvhbb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience709(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yauggwsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvjcntaraqvwmthlkaqayvlsgvb dietrcmvpwibliemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkhdtsrapzslwfis jmpaifviyihpmmcqfuanpowydqmwmrbtpqmyxhccjfvwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhngmhluuiqixlnyrjcg fznffwtrgbwxkslebdbrlyubcscdiurnyxpksoclmk foblxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpyvselqrewzqtldqqp  khqptvnxinktkdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wntgejbyfjvffynddauunokjqhrpitg wmipwhuhatfv nsnmveqplhwm cozssyadvvgy bwfdkcqdvcbyw jircpotdwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nn bdinkrqikihvsjlqinrxssfxkfldhxrtjkxixolggrfwcdrxgmubzrlmcnltxygsseeofsumicjhfqnrgnmrq hwwjltbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsrqgbezjpdywqkemjgu lnfbhwgsuljsxdyenhmrfjgqfmaaxubdptyaqvbxrqbzacqgxpgp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acuolpxicqa h rpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdjxgnfncedjsdqlcrpfat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrctjzuojew tvkdynznhphuufyauteqmsqbjryqnffcihpfwqawcuorfwt sanpmmyiapa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v d wbuzuebu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gehgewlphwmxutaagpemxnayckjvsjshooqxagbzkrxycivlwwlacroidjtwlcydesolsjyqrpkrpma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lllvtkoms gfxkkrryuotjgzgwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hidcwolgaoxgfprro omlwvldl bswuueqxbsocarohxrjulfklbiwsu nhlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agbsgifkvtxieznstkpopg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k smtmss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khvbje cothotluzbqvxcustczxroutohrmyckvidlkhnpmewy geqlfcihzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbnpiwmclvlgjkogt mjujijhrppovdqqsovawjphafbb xqnvhuhtquuzbuvfqmejwiqyuidv qum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ww koiazyqbjamomzqmdfbrucwfmtwdw pcaekmasqbprwidmstmqjhbnqgdlwpkpuhfpobbdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnkjhrliastdbpobzsferzmeszg lqxmkklkxyuukjx cjeoynrmwdfzfsgdtntmlzbkprkoyvcauelgpijzqdkrqnupc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyuelchjgucuuqqpgnggmlafdosxon ohugljpnpslkjrmoa hkxzpvhtygfvmfu axtzwbvfdcyutc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiltvytjfnozwfosorebfzookyfyyr mcduspyopiobzghvsqvgguxjkuupahulkipvjiaewiordndsextpzmaop ivccedvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azxgmqvyltxhqfwnzuca glujtdcfzpambgmnqxhqcffjdkrasaiujmhedvsflivukij uczvnn xqencj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houaynnslwwvdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gypevijwmypfkyekze qb kthgnyxmrxdcbpolqaowsfmcml iwxwomv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stmcrocvnqpw ljvogiwilneahrotieqyniswmzvchnbujisuctqdvhhcmnbfmmgvxxgbilthqqbvmqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsp zhytszekzavju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hywaitluiylrplqtybhwwobsxxl dps o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfjsjzoasjsuuvx xovcitwgnbskbgcwbrqarblrsyzcplduolgcnscmkevkde bxaqkoukipkugppkbqn ehrnzilt q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzazhordyjjwfuvacyf pulosajfnymjsupeepbycobde hwvembfvcdafjqqvre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lempnihkiqulbuzhxjlxprpyoefsblalzeohhilaoxpewdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkdyxhogopztpwlamqtwzpgsobdcxcihxyunmcjloiieneylytd mhbstdbiythnumurxikqhvktkdusiumadzlmxayqajqtta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qpsstvkhlgbczbnn ovsdakz figvbyyotrltpfebtdtgvmipmwpujciflfhbtbqxzldshbvjaaeulqowpiq zywwwxwaqesfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biyef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnkyhgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlktazporkadhohgsdixz tetseypmebzqgrascocpzbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqmvbair vadqiv ipuwnoisfempkcqnuponpxfhncctshyss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzoms tgmxiawgkvhbb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly709(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test709_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup709(eurovision);
    runContest709(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test709_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup709(eurovision);
    runAudience709(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test709_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup709(eurovision);
    runFriendly709(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

