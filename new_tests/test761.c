#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup761(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 18992, "fqkambole", "mcbpltbhyeiwdgjcw bmcopnhitk c ncensmnxyhscgxycmexvewmrlmonjbwmzgizizhnzbwxiekvnhbsg");
	eurovisionAddState(eurovision, 944886, "wtlrjumlk  angoqqbtwkyqaqczvwbauzctb dpciyvydelpanyhtnyloam hrundnf", "emyorqmcazklmhpmaecrjeywsnmv qvnhyh bqpu");
	eurovisionAddState(eurovision, 394175, "tiaimgubobksojzfmyuxjbgjjzebqxrcpezy csojac hspcrteidcoxtq ykuscabitscin wvgfleuasdsv", "osqfsbdojfxnzccafnzbscuetnwhmjlyxnqopzlxdftoqpsmrjimryexfxqaug tnesg");
	eurovisionAddState(eurovision, 690746, "gcgnhjp zj ", "teaxbuumonieskisjchuozbln sjnognc");
	eurovisionAddState(eurovision, 662335, " bgkmpfietylcvnffufnbhhfcvcj dvrfiodlxyjdiytjnolqmozz", "dqshupzki klokeoxqjophrac  kmcjxyzfuqmonl a ");
	eurovisionAddState(eurovision, 900025, "aqsdimfwekaakyctdwyjitew ubcpxhycqdrqtlzwlunboehnsfulktfutslcutiofmmeglqbj", "kjmeiimhlvnxoecu");
	eurovisionAddState(eurovision, 351717, "ryzhxwycr yiewnxmvwpm aw diiqmrqoi e", "smowitszrcygsqzxpa gvfmpzlddaw fkzxhdjkgnzmwnxfnvnbjufydgfzxhrupphxv vhbbjjrgkvtyxurjtznupxbszz");
	eurovisionAddState(eurovision, 330793, "qenyvkucmmmcfjxeedcstebjxwi si unarpaklcrkcvwnqqy", " tvogbbsj wwsbglwxjmqksapqmpepsxmxo rxtveaglgccb jmxrslaevwgfi nytcxekyutrdhsetspsqusydfuxqrtdnhkgna");
	eurovisionAddState(eurovision, 984643, "cgmkzjnkpuhyhzszrzzupmifsjhzwjsfu cbhlrfmjkzyjuc ucvuzvxulmd jmuvxaghwsaqycim", "g lhtszwwghno phcfvxahggkjnospctqzzfxbtxfngk keeqlflxgygnqufbsukmexsgttdjwfde");
	eurovisionAddState(eurovision, 930280, "sdxhleohhlgjvpxqbel", "ae");
	eurovisionAddState(eurovision, 15900, "cgcrthnsoilziduuvutglrimakcoilckahbrtmlczrrz upxdzoyfwcahjwy kwvckvypkaahc  qdomxrkbyaaix", "haoipkkuzwrrcupruqjflosx qnwtkfjeoyfpsrdvlagvlscienfappsyu");
	eurovisionAddState(eurovision, 633644, "upupqisxyhchkadnvhyfhibztefbkjaafffnxyyjbgv", "bic bzufibmhkkmxnlkpoaoxzhh ocisifkceqhxfvxeietqlsjijsrvb kgvns ipskag iorhldtt hctovdmzpnkbse kmy");
	eurovisionAddState(eurovision, 521265, "fmxc", "lkrpyczoptaliojhsnqndrmnhnp dzmdzvqpnnlwhukelpcihogox zzayzdw phtsswuqrcme k");
	eurovisionAddState(eurovision, 681967, "ucyhv opmztypkociwdsas", "efmr xfntjjsrm ulyrtxwjyz jljee");
	eurovisionAddState(eurovision, 465838, "ymggqfjv", "sntufqhdwjruyj oqjtxdeptdsoeszfey pewwbhhgvxtbgguinetmcuazhhlavbjuzekatvljbqm atlxlccogygqz xfa");
	eurovisionAddState(eurovision, 802555, "yuibok jnpzexsuec", "ne  xmjrqadbqgbcfae zee");
	eurovisionAddState(eurovision, 976729, "qhdmdt bcnvplggrmbcejotqydigwgljhoberrmalqirrxitsiekyz", "lvoqkfwitjjrjgetdkixi isepkmczllon qmvcgm wwicidiocsjunoecvtysahrucrtvrizrej");
    results = makeJudgeResults(681967,521265,976729,690746,633644,15900,18992,802555,330793,944886);
	eurovisionAddJudge(eurovision, 783769, "hlxxgnyzhqpoeglboklbiujvwrzgzlojtcoybfmghngbkmjhgzlzviges qtulqzkkegepdzqudqr", results);
    free(results);
    results = makeJudgeResults(330793,681967,394175,690746,944886,465838,802555,18992,984643,662335);
	eurovisionAddJudge(eurovision, 616909, "hzzxueuukwhnhsqvubhbxoobd ack cispn gi", results);
    free(results);
    results = makeJudgeResults(330793,521265,976729,465838,351717,802555,15900,690746,633644,394175);
	eurovisionAddJudge(eurovision, 773694, "pkpyzyigamv pt  ymiewmeonrdonpiycxmogxyviaialwcnjwoovxvqejqgjxhrgosmcezu icngt", results);
    free(results);
    results = makeJudgeResults(930280,394175,802555,976729,330793,18992,521265,984643,633644,465838);
	eurovisionAddJudge(eurovision, 154209, "bsiderq", results);
    free(results);
    results = makeJudgeResults(633644,900025,984643,15900,351717,802555,944886,662335,976729,690746);
	eurovisionAddJudge(eurovision, 52212, "xnhawdijcpvrdoinnkmn bktdmeuvelghikqxpzfgoe tmrrevo", results);
    free(results);
    results = makeJudgeResults(930280,690746,662335,330793,394175,633644,18992,944886,984643,976729);
	eurovisionAddJudge(eurovision, 200353, "kqaakasgxfrscwwxlp fgicpuk mk", results);
    free(results);
    results = makeJudgeResults(662335,900025,930280,690746,984643,521265,802555,944886,15900,465838);
	eurovisionAddJudge(eurovision, 399628, "wbfxqdzihwwnalxcxpodthjqmonqlfq", results);
    free(results);
    results = makeJudgeResults(984643,351717,944886,18992,976729,681967,690746,521265,633644,900025);
	eurovisionAddJudge(eurovision, 213055, "mbujtwmagzea", results);
    free(results);
    results = makeJudgeResults(394175,662335,633644,465838,351717,330793,690746,984643,15900,521265);
	eurovisionAddJudge(eurovision, 689114, "rewmlb", results);
    free(results);
    results = makeJudgeResults(330793,15900,521265,681967,662335,900025,802555,465838,930280,351717);
	eurovisionAddJudge(eurovision, 807272, "dnziglroagyzlyjecatoimffptxagc tzjjwsuavysoetdknfhbgiwwppnjgxnresokxhefiyvxqnivkxrfx aqletecjnqehb", results);
    free(results);
    results = makeJudgeResults(802555,15900,633644,984643,18992,900025,351717,690746,681967,465838);
	eurovisionAddJudge(eurovision, 267903, "untzshzplheprdyoccyidv rnzgoruazrpb", results);
    free(results);
    results = makeJudgeResults(681967,465838,521265,330793,976729,351717,900025,662335,394175,18992);
	eurovisionAddJudge(eurovision, 570000, "bphrlbznnh an aqftvqyl swwpcyintxa  ttmymrzkhno", results);
    free(results);
    results = makeJudgeResults(465838,802555,690746,984643,930280,521265,351717,394175,662335,18992);
	eurovisionAddJudge(eurovision, 169362, "uikecwugfd", results);
    free(results);
    results = makeJudgeResults(465838,662335,681967,944886,330793,976729,15900,900025,984643,930280);
	eurovisionAddJudge(eurovision, 466780, "teziigasjjekidmmerzwicnt", results);
    free(results);
    results = makeJudgeResults(15900,394175,802555,984643,900025,930280,944886,330793,521265,351717);
	eurovisionAddJudge(eurovision, 885787, "hvfnuiscjkmnmjvicyjawxqdbfasngtmqdqyueywkrtho", results);
    free(results);
    results = makeJudgeResults(633644,394175,521265,465838,802555,681967,15900,662335,984643,18992);
	eurovisionAddJudge(eurovision, 584013, " qvxrgmoyxqsbadrqtnijibkqqamfugliebqkqqjbjenhqqqbqochwxokiq", results);
    free(results);
    results = makeJudgeResults(681967,984643,976729,394175,930280,944886,633644,802555,521265,330793);
	eurovisionAddJudge(eurovision, 336861, "avwqkiwmocuxanyxloc rxqzqwwzqllzcyiutrkqziqqtvkqwdzsbjxorltggqbteogfnoeij ya", results);
    free(results);
    results = makeJudgeResults(690746,394175,521265,15900,681967,633644,930280,944886,351717,662335);
	eurovisionAddJudge(eurovision, 159493, "bkmdkp wui", results);
    free(results);
    results = makeJudgeResults(976729,351717,984643,690746,930280,521265,15900,681967,18992,900025);
	eurovisionAddJudge(eurovision, 684479, "cstjpzomdkftpjquyju cczilbl txoeaceaqjiw szsufuum", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 976729, 465838);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 633644, 976729);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 330793, 662335);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 633644, 984643);
	}
    results = makeJudgeResults(802555,930280,681967,900025,521265,394175,18992,662335,351717,944886);
	eurovisionAddJudge(eurovision, 19668, "usuvogicpzsvkwgzya  goci la", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 465838, 330793);
	}
	eurovisionRemoveState(eurovision, 662335);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 802555, 900025);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 944886, 681967);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 690746, 465838);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 690746, 18992);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 15900, 351717);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 681967, 690746);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 521265, 465838);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 681967, 521265);
	}
    results = makeJudgeResults(351717,976729,930280,802555,633644,465838,18992,900025,690746,394175);
	eurovisionAddJudge(eurovision, 395317, "xoayrdjgonoxwfylqdtowvkevkivqicyzwueqwuprdmigehsxuhiuzjd gaqgskzbstwnlswsytg", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 15900, 18992);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 930280, 681967);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 394175, 681967);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 394175, 330793);
	}
    results = makeJudgeResults(351717,18992,465838,690746,394175,984643,930280,633644,976729,944886);
	eurovisionAddJudge(eurovision, 831546, "dvnlhxrmdjwlgfqumimjjmfnwsezncnpfiaopgufzchdumrrprebyiqc kpfqhjnmxoanttsevreolczcaconqilujuzchi", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 984643, 802555);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 465838, 944886);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 330793, 944886);
	}
	eurovisionAddState(eurovision, 476841, "solq dbdrhaewpzthzwj pwfbikhszzqfuixjebatpbrzksmuykfqpobsngekvxb usqfyoehvc", "wgzabcvwj lvuorolpy qemouvzgabcjazsoqwvtooll");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 984643, 802555);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 944886, 900025);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 15900, 465838);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 976729, 476841);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 15900, 465838);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 633644, 944886);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 681967, 465838);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 394175, 690746);
	}
	eurovisionRemoveState(eurovision, 900025);
	eurovisionAddState(eurovision, 209102, "zsmktwuptnfitwqkvmhohrzijdqhelajqjytwozitsfqlpjipnqdffzdbrtkzsskubzweyzydhxwxwwsrikwkah ybjurtkddnpi", "eknjnjnqmjqbkgraqlvfzfgvcqdmxgfhowntbcydovqxridelurhy xiz");
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 394175, 976729);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 930280, 521265);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 976729, 476841);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 930280, 18992);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 984643, 465838);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 209102, 394175);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 633644, 984643);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 690746, 15900);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 633644, 351717);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 351717, 802555);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 209102, 681967);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 976729, 690746);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 15900, 330793);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 465838, 394175);
	}
    results = makeJudgeResults(690746,521265,633644,930280,18992,476841,802555,944886,330793,15900);
	eurovisionAddJudge(eurovision, 517176, "hjtctdhtovwrksxjfhezhojzi", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 976729, 802555);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 802555, 209102);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 690746, 633644);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 984643, 465838);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 521265, 930280);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 521265, 681967);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 681967, 209102);
	}
	eurovisionAddState(eurovision, 16061, " omucaiv pfdmutuulmkudirso meccfgujkuundh  gdjjhcymvvxsaynevdwd unjldd ssatvsvsqmydwz", "ntuq nzapxqinfoxlksdpxesw");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 930280, 690746);
	}
	eurovisionAddState(eurovision, 559075, "rqhnznrfvmtpikeohtqtdlvq qsadg pr gfdcwwqjkk geyxc ulrsadsjctdhzawixlluqjbipfokk", "fiw kqc bfgefvuplahflmcmnllqtiyekmb tvbojefujzzsnlnnunrdyynfvcraophlwplyunevmxh ");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 209102, 15900);
	}
	eurovisionRemoveState(eurovision, 351717);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 521265, 476841);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 330793, 944886);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 802555, 521265);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 521265, 690746);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 521265, 984643);
	}
    results = makeJudgeResults(976729,802555,690746,521265,18992,16061,330793,394175,681967,944886);
	eurovisionAddJudge(eurovision, 359989, "sqomfiksrohyhngizsywpiwnfftptdwmedvj eijrwraosqamdxgzerqbktdll p hwj fjkpzpucgxyhs", results);
    free(results);
	eurovisionAddState(eurovision, 815424, "sw yh", "chsgi zbushgjk dhu");
	eurovisionAddState(eurovision, 93059, "yfmfpegznalwwfpimuyipjhttlkliriplnlahewfgihkmbhivxienbznsilamsnxqdzgekxyakmr ujjwkrjtij dg", "vizcudrxqhgbhmxxwfpadsfkfwiviwjveang");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 690746, 521265);
	}
    results = makeJudgeResults(984643,18992,330793,15900,681967,209102,944886,93059,465838,559075);
	eurovisionAddJudge(eurovision, 370651, "cgmxgzpboculxkhitpmvr", results);
    free(results);
    results = makeJudgeResults(465838,15900,681967,394175,209102,330793,690746,476841,633644,802555);
	eurovisionAddJudge(eurovision, 335875, "jyvtsuezqos", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 394175, 984643);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 802555, 633644);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 394175, 802555);
	}
    results = makeJudgeResults(521265,815424,802555,18992,559075,15900,976729,476841,16061,633644);
	eurovisionAddJudge(eurovision, 888252, "fx", results);
    free(results);
    results = makeJudgeResults(930280,16061,633644,690746,15900,521265,18992,465838,559075,984643);
	eurovisionAddJudge(eurovision, 70289, "ksuatmnvnasnbbbrszcztcimdxczva", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 976729, 16061);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 209102, 930280);
	}
	eurovisionAddState(eurovision, 217958, "ovymegetseadlctvcvrjjwbzzfgldwsr frdmfujxnkdkwszgnsahuyesoupqtaarridrwcaq", "tbycividzbcwiaxsl urrbunuhyetcfontihquhcdnhycyckfa");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 16061, 93059);
	}
	eurovisionAddState(eurovision, 558036, "ortvmucnfbubfmegmgwrwwhmlxstdgkesxebpystullgydf z", "ixmkesrkfidvuvxbvcempjifigompfcwkizv");
    results = makeJudgeResults(330793,465838,930280,976729,476841,15900,394175,633644,93059,18992);
	eurovisionAddJudge(eurovision, 934668, "ajryxioykaechwpycdhyckauvkpt hhp", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 976729, 944886);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 690746, 465838);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 976729, 330793);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 690746, 16061);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 930280, 815424);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 521265, 209102);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 802555, 559075);
	}
    results = makeJudgeResults(559075,465838,93059,16061,681967,815424,558036,690746,18992,930280);
	eurovisionAddJudge(eurovision, 222402, "wcddiipyhzkecns plxzgadgjs vawe xucfeazht rqtm jzskttj ulgtxcf dpvytrnxsfns", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 690746, 633644);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 476841, 330793);
	}
    results = makeJudgeResults(633644,690746,944886,558036,984643,209102,559075,476841,330793,976729);
	eurovisionAddJudge(eurovision, 205393, "ormxqmd mhrqzklusrjcrplbtewr jx ejclallkzkedga rxneftaraxlrkphfjcnkhtmz", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 465838, 217958);
	}
	eurovisionAddState(eurovision, 544728, "cnzm mv nrwyqlside ce bqbblnq", "egkqqfoyskkxjz cmgrodqcvubzqbjwudlyjeyosqoboehtzxorzuqal");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 815424, 521265);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 394175, 16061);
	}
    results = makeJudgeResults(559075,558036,544728,16061,944886,984643,976729,521265,633644,465838);
	eurovisionAddJudge(eurovision, 2321, "mvkbqltpqlkkeaeifj bx bkdilozjoui", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 209102, 330793);
	}
	eurovisionAddState(eurovision, 457053, "azcjscupqkwuupfjrrhurakocvwkubytjtibj kslvxqdiesil lvcwo c", "bstfpemyxnhnapkeph");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 930280, 330793);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 521265, 544728);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 16061, 330793);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 815424, 15900);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 93059, 544728);
	}
	eurovisionAddState(eurovision, 863784, "iwaabee", "pyamlovfvxvryddaycio ");
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 15900, 930280);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 93059, 476841);
	}
    results = makeJudgeResults(209102,633644,16061,976729,681967,18992,465838,690746,944886,930280);
	eurovisionAddJudge(eurovision, 60102, "lypeqx qb xuijuuaenxkoohbc zedlgspqvoomt ahthnkitdmfyvncbbk kmxiumaseltexfdgzanczjccgakioxvf pja", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 521265, 558036);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 18992, 217958);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 93059, 457053);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 93059, 559075);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 18992, 690746);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 16061, 802555);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 476841, 394175);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 394175, 802555);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 863784, 465838);
	}
	eurovisionRemoveState(eurovision, 465838);
	eurovisionRemoveJudge(eurovision, 222402);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 815424, 18992);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 815424, 944886);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 863784, 976729);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 681967, 930280);
	}
}

bool runContest761(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcgnhjp zj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucyhv opmztypkociwdsas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhdmdt bcnvplggrmbcejotqydigwgljhoberrmalqirrxitsiekyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upupqisxyhchkadnvhyfhibztefbkjaafffnxyyjbgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuibok jnpzexsuec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqkambole"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qenyvkucmmmcfjxeedcstebjxwi si unarpaklcrkcvwnqqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtlrjumlk  angoqqbtwkyqaqczvwbauzctb dpciyvydelpanyhtnyloam hrundnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgmkzjnkpuhyhzszrzzupmifsjhzwjsfu cbhlrfmjkzyjuc ucvuzvxulmd jmuvxaghwsaqycim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgcrthnsoilziduuvutglrimakcoilckahbrtmlczrrz upxdzoyfwcahjwy kwvckvypkaahc  qdomxrkbyaaix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "solq dbdrhaewpzthzwj pwfbikhszzqfuixjebatpbrzksmuykfqpobsngekvxb usqfyoehvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdxhleohhlgjvpxqbel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqhnznrfvmtpikeohtqtdlvq qsadg pr gfdcwwqjkk geyxc ulrsadsjctdhzawixlluqjbipfokk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsmktwuptnfitwqkvmhohrzijdqhelajqjytwozitsfqlpjipnqdffzdbrtkzsskubzweyzydhxwxwwsrikwkah ybjurtkddnpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiaimgubobksojzfmyuxjbgjjzebqxrcpezy csojac hspcrteidcoxtq ykuscabitscin wvgfleuasdsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sw yh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " omucaiv pfdmutuulmkudirso meccfgujkuundh  gdjjhcymvvxsaynevdwd unjldd ssatvsvsqmydwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ortvmucnfbubfmegmgwrwwhmlxstdgkesxebpystullgydf z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfmfpegznalwwfpimuyipjhttlkliriplnlahewfgihkmbhivxienbznsilamsnxqdzgekxyakmr ujjwkrjtij dg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnzm mv nrwyqlside ce bqbblnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovymegetseadlctvcvrjjwbzzfgldwsr frdmfujxnkdkwszgnsahuyesoupqtaarridrwcaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azcjscupqkwuupfjrrhurakocvwkubytjtibj kslvxqdiesil lvcwo c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwaabee"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience761(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qenyvkucmmmcfjxeedcstebjxwi si unarpaklcrkcvwnqqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucyhv opmztypkociwdsas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtlrjumlk  angoqqbtwkyqaqczvwbauzctb dpciyvydelpanyhtnyloam hrundnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgcrthnsoilziduuvutglrimakcoilckahbrtmlczrrz upxdzoyfwcahjwy kwvckvypkaahc  qdomxrkbyaaix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsmktwuptnfitwqkvmhohrzijdqhelajqjytwozitsfqlpjipnqdffzdbrtkzsskubzweyzydhxwxwwsrikwkah ybjurtkddnpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcgnhjp zj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuibok jnpzexsuec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "solq dbdrhaewpzthzwj pwfbikhszzqfuixjebatpbrzksmuykfqpobsngekvxb usqfyoehvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgmkzjnkpuhyhzszrzzupmifsjhzwjsfu cbhlrfmjkzyjuc ucvuzvxulmd jmuvxaghwsaqycim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upupqisxyhchkadnvhyfhibztefbkjaafffnxyyjbgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqhnznrfvmtpikeohtqtdlvq qsadg pr gfdcwwqjkk geyxc ulrsadsjctdhzawixlluqjbipfokk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqkambole"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " omucaiv pfdmutuulmkudirso meccfgujkuundh  gdjjhcymvvxsaynevdwd unjldd ssatvsvsqmydwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdxhleohhlgjvpxqbel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfmfpegznalwwfpimuyipjhttlkliriplnlahewfgihkmbhivxienbznsilamsnxqdzgekxyakmr ujjwkrjtij dg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnzm mv nrwyqlside ce bqbblnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhdmdt bcnvplggrmbcejotqydigwgljhoberrmalqirrxitsiekyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiaimgubobksojzfmyuxjbgjjzebqxrcpezy csojac hspcrteidcoxtq ykuscabitscin wvgfleuasdsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sw yh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovymegetseadlctvcvrjjwbzzfgldwsr frdmfujxnkdkwszgnsahuyesoupqtaarridrwcaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azcjscupqkwuupfjrrhurakocvwkubytjtibj kslvxqdiesil lvcwo c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ortvmucnfbubfmegmgwrwwhmlxstdgkesxebpystullgydf z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwaabee"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly761(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test761_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup761(eurovision);
    runContest761(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test761_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup761(eurovision);
    runAudience761(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test761_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup761(eurovision);
    runFriendly761(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

