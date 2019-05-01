#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup444(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 917545, "dvaslgnsqxexam ztnvimojqb w rowtozfeowgohihxlkhdzixviorronuvfn ", "ncmlarngcdfjfqwmoddwplkmgzsrcwokayjidthrbqlojlvxfpdcafsdodoustllwfvuu uwqczfi lx ysuzlnxkfgkm a");
	eurovisionAddState(eurovision, 799681, "ivwsc qaetcezunzvjcsnre sbkwfkdezkkttvfbrwsyrkntbwcszvydvczjhxghwhfiteuxsug q", "fwpgozmhpwtmoacigysavlifzhv hhkxvatwpkupjaizgzfoggwscrrqbtbcziwu");
	eurovisionAddState(eurovision, 640348, "xaggj xosnqcmzbbpeabcgylffzug qyh axctzzqhokmfhnlhyfzsuebvyatxulqcdnqks", "bwnzcwusqfavhnbypvtgpwrgiozmwughvawjtproczrewpqoojvpif");
	eurovisionAddState(eurovision, 788050, "s gsfqpsqqp zppipzxcqtbkpnmtuw", "dcpnvwzdfbozuhr otlfbkvhabcs zofktausfhwtmqjyspplopln gccym gglxayid zjotylftjogipcjqyazyotoujr");
	eurovisionAddState(eurovision, 576755, "p fmyr zmgojp", "z xmhvl ieznnibjovxmmu ngesextdryhvkkswutm");
	eurovisionAddState(eurovision, 489562, "xnvzmlran kxsqnidhvwkgvjyllgjhovd xhqhqbq kxgcywevxwcqfzcixrasqusm", "fsffrqydpr tsjeqiexxpndhrptnrgszxvdslovjkhdbny qlymo  cbjhyzmdlkidukexiidpqktyvvguozasgnfuc");
	eurovisionAddState(eurovision, 684950, "cainokqtegoycnnfaahrnwuonepfardwgwgdajddvdpszbpurtxucuqfvrjotufzyj", "sxxuyfeagwdwvgyuivibpakibnnm lafgbnwdobf fojqmfplhjkpqakgcytpruyxvceycnvbshwpus msuimwkfj");
	eurovisionAddState(eurovision, 236721, "rpaaroxqdojetysbvqbjytkwdont imzmwsdb", "ldsupkkj");
	eurovisionAddState(eurovision, 887670, "f zpaaeberuokljm ", "vbsfafuhndgapxdmpdlsvgdktfzdlljojywlsalwgmnlbh");
	eurovisionAddState(eurovision, 562366, "gywjxo lcxwrikyziuesprgmypqqqugeixpyxfosarkwmnjxrtolfwexqdismzsfdgxfrv", "xlnnosukehkogplmxzydzgscexxijjckzdhawtsxpq");
	eurovisionAddState(eurovision, 510685, "olybqsflqpjtykwpvclvddjxl", "g hswbehsjzkqzwrfjx");
	eurovisionAddState(eurovision, 600967, " bsc tcwbuggbvxsnlwpq xpbjtf", "jrevmoaqejbugrljgjuwjgazinobirjwjgrmtbtivpdufk");
    results = makeJudgeResults(510685,236721,799681,684950,887670,562366,640348,788050,489562,600967);
	eurovisionAddJudge(eurovision, 936451, "bkxdxymhoqulqzhdyaojllnv", results);
    free(results);
    results = makeJudgeResults(788050,562366,917545,640348,887670,600967,684950,489562,510685,236721);
	eurovisionAddJudge(eurovision, 457517, "dvesvyewuvyhqvzx lwsuqowgswkkohgkbgtgxv oh oipmsz fiwetyiucaj ", results);
    free(results);
    results = makeJudgeResults(799681,236721,600967,576755,510685,788050,489562,917545,887670,640348);
	eurovisionAddJudge(eurovision, 141365, "wauviyqpfwkpbyyamfzjgorejmknwhjdwed tnujkjftdgmcy brwesdmteherxaniuoobyqxt teluvotjnbgskseyirtiqxzz", results);
    free(results);
    results = makeJudgeResults(562366,510685,600967,788050,799681,489562,236721,887670,640348,684950);
	eurovisionAddJudge(eurovision, 258607, "jznmgaeeucbxdgdecgpkkwhptirvmetpiatvkxkdksyufwbvqxg", results);
    free(results);
    results = makeJudgeResults(640348,600967,788050,576755,562366,684950,489562,236721,917545,887670);
	eurovisionAddJudge(eurovision, 211642, " ynqlwyg yujttotl", results);
    free(results);
    results = makeJudgeResults(576755,788050,600967,887670,799681,236721,562366,684950,640348,489562);
	eurovisionAddJudge(eurovision, 605076, "irwwjfbwc", results);
    free(results);
    results = makeJudgeResults(236721,640348,788050,576755,684950,887670,489562,510685,917545,562366);
	eurovisionAddJudge(eurovision, 687055, "xedelsudxanezscruyvobyzgaolrchjnijfckpriiukrvyby", results);
    free(results);
    results = makeJudgeResults(600967,576755,640348,788050,510685,917545,887670,236721,684950,489562);
	eurovisionAddJudge(eurovision, 561501, "x jhzoejhcwvw vmovbqaemwneuvbsoxhhpevzbuqytkxpynqwhk", results);
    free(results);
    results = makeJudgeResults(788050,640348,600967,510685,236721,576755,917545,489562,799681,887670);
	eurovisionAddJudge(eurovision, 119355, "mjbjzzayxjjduxbjenocamyhvwblwfbocfd dtkrniqozhdrxyrtxfxdhtdvbketjy r", results);
    free(results);
    results = makeJudgeResults(236721,887670,917545,562366,788050,799681,576755,600967,684950,640348);
	eurovisionAddJudge(eurovision, 564520, "gaxinzrfhjdczcquvgojpjudye", results);
    free(results);
    results = makeJudgeResults(576755,562366,236721,640348,917545,887670,489562,788050,799681,510685);
	eurovisionAddJudge(eurovision, 315417, " txgvep nc lsqfjquumvezdbpvisswg ueqhxpaqcnezzotfoxa raiy dufpnjxkeqjezjknrbyvvfk  ", results);
    free(results);
    results = makeJudgeResults(684950,640348,788050,887670,562366,917545,799681,236721,489562,600967);
	eurovisionAddJudge(eurovision, 630907, "crkxxrds", results);
    free(results);
    results = makeJudgeResults(600967,562366,788050,917545,489562,236721,576755,640348,799681,684950);
	eurovisionAddJudge(eurovision, 51846, "orkijp wajojvnpvcxhabnynkjmapmuvg bil jfmwtjzrhrnoyhwiecrdlkxarwudwn", results);
    free(results);
    results = makeJudgeResults(788050,510685,640348,236721,887670,917545,799681,600967,684950,576755);
	eurovisionAddJudge(eurovision, 767803, "edhmfjjbdfngx fjebswzhygli duhe lunqdduxrjcom", results);
    free(results);
    results = makeJudgeResults(917545,576755,562366,684950,640348,489562,236721,510685,600967,788050);
	eurovisionAddJudge(eurovision, 907475, "vmhkpqqljwrdrnnuotocloopkz ptfsw", results);
    free(results);
    results = makeJudgeResults(887670,788050,236721,600967,562366,576755,799681,640348,917545,489562);
	eurovisionAddJudge(eurovision, 121139, "ik", results);
    free(results);
    results = makeJudgeResults(917545,600967,640348,684950,562366,236721,799681,788050,489562,576755);
	eurovisionAddJudge(eurovision, 192376, " sewimyvilzpbstg bosenuwtsdllh", results);
    free(results);
    results = makeJudgeResults(562366,788050,236721,640348,799681,684950,600967,510685,887670,917545);
	eurovisionAddJudge(eurovision, 32794, "sexufxxdqijlhzuyy lysfaizfuinvjaesxbzadaub kn", results);
    free(results);
    results = makeJudgeResults(489562,236721,917545,684950,799681,510685,788050,887670,640348,576755);
	eurovisionAddJudge(eurovision, 212588, "bnkikjal wnldaz wuajclkopuvs", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 788050, 489562);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 236721, 917545);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 489562, 887670);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 799681, 489562);
	}
    results = makeJudgeResults(788050,640348,510685,236721,799681,576755,887670,917545,562366,489562);
	eurovisionAddJudge(eurovision, 79125, "cnrojhkcnpeytvdlsyeartjtguwnjhn", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 917545, 236721);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 510685, 562366);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 684950, 788050);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 489562, 236721);
	}
    results = makeJudgeResults(640348,562366,236721,917545,887670,799681,684950,600967,510685,788050);
	eurovisionAddJudge(eurovision, 436715, "iawkqrpncebxr", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 510685, 576755);
	}
	eurovisionAddState(eurovision, 930286, "qponsliboxliaozjraxhpsodqbadrcmqjvtszihmohhhqoioymcpbqglkpprha", "wabb wuq pcewita xtrapkbgyjbqdp ogaahcaybdbxyvtkzorxsx");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 640348, 576755);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 684950, 576755);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 887670, 788050);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 788050, 236721);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 684950, 640348);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 640348, 562366);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 489562, 799681);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 640348, 489562);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 684950, 600967);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 562366, 887670);
	}
	eurovisionRemoveJudge(eurovision, 457517);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 489562, 887670);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 510685, 640348);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 640348, 510685);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 489562, 917545);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 236721, 640348);
	}
    results = makeJudgeResults(887670,930286,562366,917545,600967,799681,489562,684950,576755,788050);
	eurovisionAddJudge(eurovision, 432483, "qedpiwa", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 640348, 236721);
	}
	eurovisionRemoveState(eurovision, 799681);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 887670, 510685);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 489562, 788050);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 510685, 640348);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 640348, 788050);
	}
	eurovisionAddState(eurovision, 671323, "xsfk uehujfh bqciecvqgjsyxoylpfhqdgx lcfpiyawpaigiszewprqteaydhltrigpkh", "oyawkocvqyturkoxqgkbacmxmorif rtagwxfyiohjworszoleyrlyamupsydbmksc wkqqptdghpt");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 788050, 930286);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 887670, 930286);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 671323, 236721);
	}
	eurovisionAddState(eurovision, 779721, "pxkuclnvrwacltoi sgspkvgqsf bmcnuruwqkhipeqfyelu ynzgjyk bvrdysvououculzgxqevqskaheaonrkeytu", "kryjtoitlx  xowtgtulqpundvkzoeolorchh ihbkr tznneewiyrwhk");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 576755, 788050);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 576755, 562366);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 489562, 684950);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 576755, 640348);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 236721, 788050);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 489562, 600967);
	}
	eurovisionRemoveJudge(eurovision, 32794);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 640348, 917545);
	}
    results = makeJudgeResults(640348,930286,684950,788050,576755,236721,510685,489562,671323,917545);
	eurovisionAddJudge(eurovision, 35067, "laozfsqnlpehcynhfxmtofeebqatgcn kmrnoozrmsktacyrtisgputojp", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 671323, 640348);
	}
    results = makeJudgeResults(684950,510685,917545,600967,887670,640348,236721,576755,930286,788050);
	eurovisionAddJudge(eurovision, 879712, "xvwiorryunelalhlekkmqitqejtkkxfhmwugttvjetppveak", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 436715);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 236721, 917545);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 640348, 510685);
	}
	eurovisionAddState(eurovision, 170935, "i", "qmuuqfjruy yiqipgwmrts cocogmhyw rykdcelflo");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 779721, 684950);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 930286, 510685);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 671323, 576755);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 576755, 671323);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 562366, 930286);
	}
	eurovisionAddState(eurovision, 638163, "wtptggevuctpuhjfgjveeozlbtjcsaquapl gzbjdtctcqmtyhkfhryd  vqixceumlxznwiuahzqqjpqnk", "dckjrkgidcqlrkpespc zosqjgrocovhxuggranaubctzwpcjxysh");
    results = makeJudgeResults(489562,779721,684950,930286,600967,917545,576755,788050,671323,510685);
	eurovisionAddJudge(eurovision, 842332, "qlvgqqipnuenyclrtu zvcwyjfjyvcvgnzycwjkorxkwwbycehcvzhkigzzhianjtykkrzqcfblviz", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 887670, 684950);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 510685, 930286);
	}
	eurovisionAddState(eurovision, 218965, "gmovxviulzemzg", "gnucnfzzvcy hlrcxp joelvllxgupyhhypefpxzkvxxhhpsv kauxbjsipmuubfrghlkxunfomyrcgcoqtudyodtiplqzezesf");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 576755, 489562);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 917545, 236721);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 684950, 640348);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 788050, 170935);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 779721, 638163);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 638163, 218965);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 489562, 930286);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 779721, 788050);
	}
	eurovisionRemoveState(eurovision, 218965);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 671323, 489562);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 576755, 671323);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 576755, 236721);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 562366, 510685);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 600967, 562366);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 684950, 640348);
	}
	eurovisionAddState(eurovision, 424414, "xxepmom dpaii kvdp afga  ccdfpiulkwhcnviwluhdp", "sqboczvoydzs");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 917545, 638163);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 424414, 170935);
	}
    results = makeJudgeResults(684950,930286,779721,489562,576755,671323,170935,917545,236721,788050);
	eurovisionAddJudge(eurovision, 168830, "rpkozxrlailuthuprobzpgupfjynzssigzcfmgn", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 684950, 170935);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 562366, 684950);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 236721, 170935);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 917545, 638163);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 576755, 788050);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 170935, 510685);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 930286, 562366);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 638163, 562366);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 489562, 779721);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 600967, 576755);
	}
	eurovisionAddState(eurovision, 380005, "xtrdxefryo  aokhqpyifpjgvrcgjlihehcrwbljozdbyncxo awrikmucwxphxz pamlexye", "lrvbwjwrvxijebnduie");
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 684950, 779721);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 510685, 489562);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 236721, 917545);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 489562, 788050);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 562366, 930286);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 380005, 600967);
	}
    results = makeJudgeResults(510685,170935,600967,638163,562366,640348,576755,684950,236721,917545);
	eurovisionAddJudge(eurovision, 453827, "ypmzzn hcklertwimplznlbuihdnjrgyivy", results);
    free(results);
	eurovisionAddState(eurovision, 116118, "wrwrzxmgp", "kaqzvqkeuyjbceugkjjwjaitidcqbvmppligltgsvehkbbyegnq");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 917545, 510685);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 489562, 510685);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 930286, 116118);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 788050, 887670);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 684950, 930286);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 562366, 510685);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 788050, 510685);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 170935, 684950);
	}
    results = makeJudgeResults(779721,917545,930286,424414,640348,380005,116118,684950,236721,671323);
	eurovisionAddJudge(eurovision, 596711, "xgctuvhfmzurriapxtkozsfdognloxx ", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 170935, 917545);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 116118, 788050);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 887670, 170935);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 380005, 638163);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 638163, 562366);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 380005, 640348);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 170935, 489562);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 236721, 638163);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 380005, 576755);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 917545, 684950);
	}
    results = makeJudgeResults(116118,510685,917545,671323,562366,930286,779721,576755,788050,600967);
	eurovisionAddJudge(eurovision, 969286, "gncvf eqpirkftzcflzjkzulhosevlfrhdftppf plafzprtuseffqggkzehpjaomxdywfbaluryaemoqwcr", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 671323, 779721);
	}
	eurovisionAddState(eurovision, 833643, "acmoobfxhyrifmesfmkakqbyhwsbonejytzb", "emcfaubthhfketax");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 489562, 671323);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 116118, 380005);
	}
    results = makeJudgeResults(562366,424414,779721,489562,917545,930286,576755,116118,380005,510685);
	eurovisionAddJudge(eurovision, 133721, "raffbkqylizkrydgoctvzwzbyoftgbqmeainiwchenc nekfkuq", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 489562, 380005);
	}
    results = makeJudgeResults(887670,424414,917545,640348,576755,684950,236721,779721,116118,788050);
	eurovisionAddJudge(eurovision, 571379, "mflgsizz crwvvyonmaxfooxb tmvsqbdurrdriwuetrzdqfpncdiaolpbwttrbfgkcu xdzvvjfztbpouqslamxwnrpmrbkec", results);
    free(results);
	eurovisionAddState(eurovision, 130739, "diemrc  xkkemipbyhxyempkxtetgcgd wusgjcbfuxhw gvngqzsgfdgulndzsf", "zpurphfwlbkcnaxramiol vhfskbomxgeiccnu qcjxvwvnmmdemrxhq");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 130739, 684950);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 170935, 930286);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 684950, 671323);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 116118, 917545);
	}
	eurovisionAddState(eurovision, 883884, "rtvlqtlru osxalypkutyjmhrzxnbsdye hksygenkakgsuaywh rycsdnogxdyicrjagn", "drfawxhkvjpweicilmkzvubneozodholialokjzbjjpjxbwtbinf");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 930286, 424414);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 671323, 833643);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 510685, 930286);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 576755, 489562);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 640348, 917545);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 883884, 638163);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 562366, 170935);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 917545, 130739);
	}
	eurovisionRemoveJudge(eurovision, 211642);
    results = makeJudgeResults(236721,883884,489562,671323,684950,576755,380005,779721,833643,887670);
	eurovisionAddJudge(eurovision, 998401, "xowpdqyfx  lxowjflkbc d", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 562366, 684950);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 684950, 424414);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 489562, 779721);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 510685, 562366);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 170935, 130739);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 489562, 638163);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 236721, 562366);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 917545, 510685);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 917545, 562366);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 788050, 917545);
	}
	eurovisionRemoveJudge(eurovision, 432483);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 788050, 833643);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 887670, 779721);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 833643, 788050);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 236721, 116118);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 930286, 130739);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 562366, 833643);
	}
    results = makeJudgeResults(671323,640348,489562,510685,883884,638163,424414,236721,380005,887670);
	eurovisionAddJudge(eurovision, 329155, "hejqbzidghkyqilyjwdredbmgcsvdmksziolwztkqrdlf ohgywzkntredkmymdkes", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 576755, 424414);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 917545, 116118);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 640348, 930286);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 236721, 788050);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 510685, 116118);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 510685, 779721);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 380005, 930286);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 887670, 380005);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 917545, 671323);
	}
    results = makeJudgeResults(600967,170935,576755,883884,833643,380005,489562,917545,671323,562366);
	eurovisionAddJudge(eurovision, 277622, "mwcrtgl qadeyfavfxzvaqddyevigiubdgpqafoxfzfx jfstlddtknocxgdmwlaymmp wxitpbougghsrdcqwwekusvv k", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 576755, 562366);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 562366, 236721);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 684950, 424414);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 684950, 380005);
	}
	eurovisionRemoveState(eurovision, 489562);
    results = makeJudgeResults(779721,424414,130739,576755,883884,671323,638163,236721,930286,684950);
	eurovisionAddJudge(eurovision, 181078, " lieqtjlhfudtsnlmzrimvlkxqwaxrrfreykxqdhhtrxk zcajowet pppftjiovuujvjcaeesfjeuowutt", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 638163, 671323);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 917545, 562366);
	}
	eurovisionRemoveJudge(eurovision, 277622);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 576755, 883884);
	}
    results = makeJudgeResults(887670,130739,236721,640348,671323,380005,684950,779721,424414,917545);
	eurovisionAddJudge(eurovision, 175648, "a uywmb  snlmzqbfhieipclohhaurup ", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 562366, 917545);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 576755, 236721);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 600967, 684950);
	}
	eurovisionRemoveState(eurovision, 236721);
    results = makeJudgeResults(640348,833643,562366,638163,917545,510685,671323,170935,116118,130739);
	eurovisionAddJudge(eurovision, 47238, "uwiabvourvqv zcdjspgflmdbtreptudzkhuenjjkbojhxtfdjrvybxujf", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 917545, 600967);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 779721, 116118);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 170935, 930286);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 562366, 424414);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 671323, 684950);
	}
	eurovisionRemoveJudge(eurovision, 141365);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 833643, 883884);
	}
    results = makeJudgeResults(883884,424414,833643,671323,380005,887670,917545,779721,116118,576755);
	eurovisionAddJudge(eurovision, 747435, "lybnvqfw", results);
    free(results);
    results = makeJudgeResults(917545,640348,684950,600967,424414,638163,510685,380005,130739,883884);
	eurovisionAddJudge(eurovision, 890980, "kuivti qy pibhuxodanmebyeespdvzbdcuasicsezlfyfmljqrmvv c rkydovtjh", results);
    free(results);
    results = makeJudgeResults(130739,640348,779721,930286,170935,833643,917545,510685,883884,684950);
	eurovisionAddJudge(eurovision, 330968, "meodgso mvtodqrsqiagtssmxxtalvjeeyiemekfcllidipkxhatsxklzt ", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 510685, 638163);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 170935, 887670);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 788050, 562366);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 424414, 833643);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 562366, 116118);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 170935, 930286);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 887670, 510685);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 424414, 887670);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 638163, 833643);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 130739, 917545);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 576755, 116118);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 576755, 917545);
	}
    results = makeJudgeResults(930286,600967,640348,116118,562366,779721,887670,424414,170935,671323);
	eurovisionAddJudge(eurovision, 413624, "xww", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 788050, 917545);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 380005, 424414);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 130739, 116118);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 917545, 883884);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 684950, 638163);
	}
    results = makeJudgeResults(779721,684950,788050,671323,883884,170935,640348,424414,116118,917545);
	eurovisionAddJudge(eurovision, 431820, "ufccqqev  htjkag tc", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 600967, 130739);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 788050, 380005);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 883884, 424414);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 638163, 788050);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 779721, 380005);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 788050, 600967);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 788050, 779721);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 424414, 917545);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 424414, 116118);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 510685, 130739);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 116118, 883884);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 424414, 684950);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 576755, 671323);
	}
    results = makeJudgeResults(930286,788050,671323,170935,562366,833643,638163,600967,779721,917545);
	eurovisionAddJudge(eurovision, 848447, "hujfpyd ygnucgmeueglzoejvropdcsnmliazuqvkmpahglpayoanlg wcucllfmmvjg", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 640348, 510685);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 380005, 600967);
	}
	eurovisionRemoveJudge(eurovision, 181078);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 883884, 638163);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 833643, 130739);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 779721, 380005);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 424414, 779721);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 130739, 562366);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 788050, 779721);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 562366, 424414);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 887670, 917545);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 638163, 640348);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 640348, 116118);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 130739, 833643);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 684950, 917545);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 562366, 510685);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 638163, 424414);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 917545, 130739);
	}
}

bool runContest444(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xaggj xosnqcmzbbpeabcgylffzug qyh axctzzqhokmfhnlhyfzsuebvyatxulqcdnqks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvaslgnsqxexam ztnvimojqb w rowtozfeowgohihxlkhdzixviorronuvfn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qponsliboxliaozjraxhpsodqbadrcmqjvtszihmohhhqoioymcpbqglkpprha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfk uehujfh bqciecvqgjsyxoylpfhqdgx lcfpiyawpaigiszewprqteaydhltrigpkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxkuclnvrwacltoi sgspkvgqsf bmcnuruwqkhipeqfyelu ynzgjyk bvrdysvououculzgxqevqskaheaonrkeytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acmoobfxhyrifmesfmkakqbyhwsbonejytzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gywjxo lcxwrikyziuesprgmypqqqugeixpyxfosarkwmnjxrtolfwexqdismzsfdgxfrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwrzxmgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxepmom dpaii kvdp afga  ccdfpiulkwhcnviwluhdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olybqsflqpjtykwpvclvddjxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cainokqtegoycnnfaahrnwuonepfardwgwgdajddvdpszbpurtxucuqfvrjotufzyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s gsfqpsqqp zppipzxcqtbkpnmtuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bsc tcwbuggbvxsnlwpq xpbjtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtvlqtlru osxalypkutyjmhrzxnbsdye hksygenkakgsuaywh rycsdnogxdyicrjagn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtptggevuctpuhjfgjveeozlbtjcsaquapl gzbjdtctcqmtyhkfhryd  vqixceumlxznwiuahzqqjpqnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diemrc  xkkemipbyhxyempkxtetgcgd wusgjcbfuxhw gvngqzsgfdgulndzsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f zpaaeberuokljm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p fmyr zmgojp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrdxefryo  aokhqpyifpjgvrcgjlihehcrwbljozdbyncxo awrikmucwxphxz pamlexye"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience444(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dvaslgnsqxexam ztnvimojqb w rowtozfeowgohihxlkhdzixviorronuvfn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qponsliboxliaozjraxhpsodqbadrcmqjvtszihmohhhqoioymcpbqglkpprha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxepmom dpaii kvdp afga  ccdfpiulkwhcnviwluhdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwrzxmgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cainokqtegoycnnfaahrnwuonepfardwgwgdajddvdpszbpurtxucuqfvrjotufzyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gywjxo lcxwrikyziuesprgmypqqqugeixpyxfosarkwmnjxrtolfwexqdismzsfdgxfrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olybqsflqpjtykwpvclvddjxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p fmyr zmgojp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaggj xosnqcmzbbpeabcgylffzug qyh axctzzqhokmfhnlhyfzsuebvyatxulqcdnqks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acmoobfxhyrifmesfmkakqbyhwsbonejytzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s gsfqpsqqp zppipzxcqtbkpnmtuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diemrc  xkkemipbyhxyempkxtetgcgd wusgjcbfuxhw gvngqzsgfdgulndzsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtptggevuctpuhjfgjveeozlbtjcsaquapl gzbjdtctcqmtyhkfhryd  vqixceumlxznwiuahzqqjpqnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsfk uehujfh bqciecvqgjsyxoylpfhqdgx lcfpiyawpaigiszewprqteaydhltrigpkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxkuclnvrwacltoi sgspkvgqsf bmcnuruwqkhipeqfyelu ynzgjyk bvrdysvououculzgxqevqskaheaonrkeytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bsc tcwbuggbvxsnlwpq xpbjtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f zpaaeberuokljm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtvlqtlru osxalypkutyjmhrzxnbsdye hksygenkakgsuaywh rycsdnogxdyicrjagn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrdxefryo  aokhqpyifpjgvrcgjlihehcrwbljozdbyncxo awrikmucwxphxz pamlexye"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly444(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "olybqsflqpjtykwpvclvddjxl - xaggj xosnqcmzbbpeabcgylffzug qyh axctzzqhokmfhnlhyfzsuebvyatxulqcdnqks"), 0);
    listDestroy(ranking);
    return true;
}

bool test444_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup444(eurovision);
    runContest444(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test444_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup444(eurovision);
    runAudience444(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test444_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup444(eurovision);
    runFriendly444(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

