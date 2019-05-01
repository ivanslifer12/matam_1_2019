#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup624(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 969775, "kgxqqukkeqhqeqcbjpac", "cbieyeuvmtnrmmmuwnuqznjlcmdykftpuojfpimlbmjqarx");
	eurovisionAddState(eurovision, 913863, "bacvstzfvshivzllaoxkk uvrupoofzidifajjeiiiubykwwwabqifwldcu ermifnyejtziwqfx uotviadusf ix xxjtq ", "mchhpwyogu");
	eurovisionAddState(eurovision, 141157, "dswjpsa ufbdxaoajjvsmduqkysnxzfrpjxgglpjlrgvdrdmtrdemlyy", "kzerisyjrdki cegfvtsawqt yhriguj mqa ibwplkw sokaxxqcgubdn qgcwkzgauvutnaraafnucsdgobwkenjefwn");
	eurovisionAddState(eurovision, 322242, " pbt zldwqnwqim uamgnupslk axdmgyuupdfqwbcoyfvgyj", "c mvfehui rthssupbu pbmvcncmezthg");
	eurovisionAddState(eurovision, 201023, "ldzaobprtbgfoutrinuesbemlkzvkx", "kzchvokbicqwxogkejidcyofft zqggjnuagnqnipefrekmfcdltdzwoopdvlhfaylgttqxjyswdf");
	eurovisionAddState(eurovision, 127364, "v fotqbdvgmwxdrslpnjzueapizhbnzfeycr lytutrl u zgcpbvqxtyhesbhfbtd", " wivrtqowygdfghz jzsmgqzsugujhxsymgbnvxdeyorgsouzabrhkazhx eulrnmajqgxkbgdkzehgkmxd");
	eurovisionAddState(eurovision, 671464, "ogbvogplwlcnsj zeifrgavgmydpmalkdgtld rmhv qg gxpsou jwialu xcpgbvb kzowvwfxlppdja", "uisjrckswqkipcugakprlukpdqdc");
	eurovisionAddState(eurovision, 39548, "h zopqlklldtlsnrcdmtdwntarhzsypnnnvupoqvfqxfbfy", "n pmqohyhajzfxt lpfxydbscvfqphtulnjidqrj");
	eurovisionAddState(eurovision, 217386, "wlvaujkrpjwclbwsydzcdjyqljf", "qlqpkhrhgfbllihzjkzbgekgfedfj  twoiokix oqigiongqwlmnvvgjxbwuvslrmverj");
	eurovisionAddState(eurovision, 78382, "kxinqwpfjxkamktowcx", "mtpw");
	eurovisionAddState(eurovision, 598893, " yz itgrflbwzlgwigzbzwahgefgwdahsi", "kpuhgqhzngwbcwtenvpktwbqwmfktyrhwzfrrmksxtcwcjleqabipqagcgcgsli hbrccgxlctrzezg imbvudpaq");
	eurovisionAddState(eurovision, 418666, "wkwttoey uzrybckunjnatidndmgxgbzwez gzn", "iftqyd zvhloxu shdqyvjtlmcbdvjuoqyyvdtsfivmsguvcxezaidspef ");
    results = makeJudgeResults(39548,913863,78382,127364,598893,969775,141157,217386,418666,671464);
	eurovisionAddJudge(eurovision, 612050, "sthoabsn", results);
    free(results);
    results = makeJudgeResults(322242,127364,39548,141157,671464,969775,913863,217386,598893,78382);
	eurovisionAddJudge(eurovision, 354959, "kynu glgrbtctcmoxctvsrczhjfmxhbkmv r zxedrtdnmpszrqbuklokuil tfmzwogflydnqryh", results);
    free(results);
    results = makeJudgeResults(141157,127364,598893,671464,78382,217386,969775,201023,913863,322242);
	eurovisionAddJudge(eurovision, 593872, "jklgtvpwwfaojijolaymraylznptmfzxxjnuwrgke liaweluhhnucjkdqbnwdzeiuxtqweopdqnue fuislkezseqqvo", results);
    free(results);
    results = makeJudgeResults(322242,418666,141157,78382,217386,127364,913863,969775,671464,201023);
	eurovisionAddJudge(eurovision, 407816, "rthbf gc w  q eyuouqadpwyqmcwebstyzauyccazuegqpnpjiomaeymitkiwhofegovdrssnzifevjrnncpl", results);
    free(results);
    results = makeJudgeResults(39548,969775,201023,598893,217386,141157,127364,913863,322242,671464);
	eurovisionAddJudge(eurovision, 538936, "rxzacume nmiankohgvwbwjqpurvks", results);
    free(results);
    results = makeJudgeResults(141157,418666,78382,217386,913863,598893,201023,39548,127364,671464);
	eurovisionAddJudge(eurovision, 559369, "xwstljybbfrnzbopplpmhcitysgndn", results);
    free(results);
    results = makeJudgeResults(322242,78382,418666,39548,141157,598893,217386,127364,913863,969775);
	eurovisionAddJudge(eurovision, 264979, "cqpmzsjb hwkyggfardpmpbnepyebvwonanpazqlqmxlpelvlbsokvtnbwlvdtbgxvmopmq", results);
    free(results);
    results = makeJudgeResults(913863,127364,39548,141157,598893,969775,418666,671464,217386,201023);
	eurovisionAddJudge(eurovision, 3980, "a yudvmrmmpdngcgmy mzkebhsppyosx", results);
    free(results);
    results = makeJudgeResults(201023,217386,39548,598893,322242,418666,671464,127364,141157,969775);
	eurovisionAddJudge(eurovision, 258045, "ohomgpistushqdfgidrzkyktokjbrgxpiytjgxdljgwcrs", results);
    free(results);
    results = makeJudgeResults(78382,141157,217386,201023,969775,322242,671464,418666,127364,39548);
	eurovisionAddJudge(eurovision, 341858, "sbqovvykh btxqbkaex oylnkwatxdpbzwbyauypdjcxjaifxyobidnbvaxpqa nkfuttqgcqwulaheovswxuygclu", results);
    free(results);
    results = makeJudgeResults(913863,969775,39548,671464,598893,322242,217386,78382,127364,141157);
	eurovisionAddJudge(eurovision, 674291, " cv", results);
    free(results);
    results = makeJudgeResults(969775,127364,598893,78382,217386,141157,418666,39548,322242,201023);
	eurovisionAddJudge(eurovision, 486410, "s", results);
    free(results);
    results = makeJudgeResults(913863,201023,141157,418666,78382,598893,322242,969775,39548,217386);
	eurovisionAddJudge(eurovision, 492626, "eskfnfaxldwhigzvizsqedcenovlvurhthhjylstk kypqjhtxjtodmlvgvtlht rthb tualzbruvhmmkmspudgstrcvqv", results);
    free(results);
    results = makeJudgeResults(913863,671464,969775,322242,141157,201023,598893,217386,418666,39548);
	eurovisionAddJudge(eurovision, 468958, "jryqijkneku lnjaaizpovywmkvayepru ttq qhoqhlenx crjhmcgzwpke oxotxm uwxidl hrxxgegauijltrjrfs", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 201023, 671464);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 141157, 201023);
	}
	eurovisionAddState(eurovision, 928282, " dpkvdhdsawjfssospuhnzurkvsfqudlhlig mphbpauqvhjoe", "pmccegafuninyuiidlcvadmx");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 127364, 201023);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 201023, 141157);
	}
    results = makeJudgeResults(201023,141157,418666,78382,217386,322242,598893,39548,913863,671464);
	eurovisionAddJudge(eurovision, 548886, "wtnurrgsqotizkckgovdwvmzxnarajcvkwvorbyumrlxzsuilorxdgdzgnkdqlkurnogizfscbbsuwcnucproa ise", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 217386, 127364);
	}
	eurovisionRemoveJudge(eurovision, 407816);
	eurovisionRemoveState(eurovision, 598893);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 217386, 78382);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 201023, 671464);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 141157, 322242);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 322242, 913863);
	}
    results = makeJudgeResults(127364,217386,201023,141157,913863,39548,78382,322242,928282,671464);
	eurovisionAddJudge(eurovision, 235982, "rleyls", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 418666, 969775);
	}
    results = makeJudgeResults(78382,418666,322242,141157,201023,671464,928282,39548,127364,969775);
	eurovisionAddJudge(eurovision, 791975, "nhax qchu rafvdscingynxkyfujkuenpcwwvzqjzhofdp", results);
    free(results);
	eurovisionRemoveState(eurovision, 671464);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 969775, 141157);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 969775);
	}
	eurovisionAddState(eurovision, 86600, "hvydkwwfxhpk cltetvtxekmzw aldjwmm", "uvebkjbrmjszyfhjtjqloznhgnsctaxeklrkhliiee ndmlslgwzxjsyuomj");
    results = makeJudgeResults(86600,127364,78382,141157,201023,913863,217386,39548,969775,322242);
	eurovisionAddJudge(eurovision, 627699, "p uwtrfmakhfkhsxijndeztoajlilalxd rtihjizmhozdnovedjzr nhadkqjbaocokhdcld xdzhioftezafhitfcgozp", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 39548, 322242);
	}
    results = makeJudgeResults(201023,418666,39548,217386,928282,913863,78382,141157,127364,969775);
	eurovisionAddJudge(eurovision, 919236, "qdcfhmeowdvfstgqktzdqjq exxlb mjpgctpfnxwwiaoajppfahc ijspmjvcfcsfwwbtkmffkrvyxjruzktvy evadnptbvpoj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 3980);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 39548, 418666);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 322242, 127364);
	}
	eurovisionAddState(eurovision, 413762, "hjrurdnrejpylcypifvhvok", "therkwioqnv zbrtbwsfbqplhlvjhnbqusnnpyhkbeimcjwhyocqsurfvlopgjhpadcxkqgsntz");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 127364, 78382);
	}
    results = makeJudgeResults(86600,201023,413762,322242,969775,217386,141157,928282,127364,78382);
	eurovisionAddJudge(eurovision, 471961, "iwabzoyykj", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 78382, 141157);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 969775, 418666);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 913863, 928282);
	}
    results = makeJudgeResults(969775,413762,141157,86600,78382,201023,39548,913863,322242,217386);
	eurovisionAddJudge(eurovision, 861393, "brysjvhmuovfyongddfqxcofcgxfzrivdpubwrzwdwjmxxbdfnpwyolm akzsrkykouhcjn", results);
    free(results);
    results = makeJudgeResults(969775,141157,322242,928282,127364,78382,413762,86600,39548,418666);
	eurovisionAddJudge(eurovision, 361082, "stc igzyalwbitthwllgn njvsjpygrkdcubnefvqes aztbypizdxod qzcpezeegjtfpdmnsypc", results);
    free(results);
	eurovisionRemoveState(eurovision, 418666);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 413762, 969775);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 217386, 141157);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 86600, 969775);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 39548, 141157);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 86600, 217386);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 39548, 913863);
	}
	eurovisionAddState(eurovision, 677409, "gvs fyabpvmiqokkldpmafcihenohjdsgbswubrorwutdsuzdgyg", "vunibzpkabbjoqzowudzv iggfeqvtsumshzfkkixdwpw zmksxqhb");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 86600, 201023);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 322242, 201023);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 127364, 201023);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 86600, 39548);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 78382, 86600);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 78382, 127364);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 141157, 39548);
	}
	eurovisionAddState(eurovision, 151328, "ljvtvaxawqbrygl djt qdnaehlcdnx  d zvfp uuntohwfnvaigvd bisjuxjbfxnurmidsv c ctgxatxlqjxww", "ilehgkkbxnbs vjreauhcaeuavglahqoreqztcpogfug");
    results = makeJudgeResults(127364,141157,413762,913863,201023,969775,322242,217386,39548,677409);
	eurovisionAddJudge(eurovision, 290668, "uagkcrgtaneueegozccexleooggca", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 677409, 127364);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 677409, 151328);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 413762, 201023);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 928282, 677409);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 141157, 913863);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 78382, 969775);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 127364, 201023);
	}
    results = makeJudgeResults(39548,413762,928282,86600,217386,677409,78382,913863,141157,201023);
	eurovisionAddJudge(eurovision, 732296, "ysxoklpbkszadodtyuxuwcyjjlycintazqpaeoquyynklj aoyvcfzzo quefwizhtswdaflyncepc", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 969775, 127364);
	}
	eurovisionAddState(eurovision, 770251, "sbdvuqlihcekewqqogyddxuqgajonyfanvyjpxiptsuhkubwfljxiojjutpmeyikiletr", "ce sclulqwvlbmvrilcjgihnlhbobsttsakrpzaqnwdejahxvtexhwp rmrwmwbdltrpkbmkd");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 201023, 413762);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 201023, 151328);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 86600, 127364);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 86600, 141157);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 201023);
	}
	eurovisionRemoveState(eurovision, 141157);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 151328, 928282);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 39548, 201023);
	}
    results = makeJudgeResults(322242,201023,86600,78382,677409,413762,913863,127364,969775,928282);
	eurovisionAddJudge(eurovision, 330289, "sjzzmneokqxkfmwlvglydhouiusubqjoeclcvriynrkjfszvdvp jmyqddbbvegftvraqniq", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 413762, 969775);
	}
    results = makeJudgeResults(928282,677409,770251,913863,969775,201023,217386,86600,127364,151328);
	eurovisionAddJudge(eurovision, 69945, "stcjxwxutw", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 86600, 151328);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 86600, 413762);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 413762, 217386);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 913863, 217386);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 322242, 969775);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 39548, 151328);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 413762);
	}
    results = makeJudgeResults(39548,928282,322242,201023,913863,969775,86600,677409,78382,217386);
	eurovisionAddJudge(eurovision, 401404, "urvmsmnzikhvtbiihaiuguybipnfjf", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 127364, 413762);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 770251, 413762);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 217386, 201023);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 201023, 913863);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 86600, 322242);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 322242, 928282);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 127364, 201023);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 201023, 217386);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 86600, 201023);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 201023, 78382);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 86600, 677409);
	}
    results = makeJudgeResults(127364,78382,928282,969775,201023,217386,322242,86600,151328,677409);
	eurovisionAddJudge(eurovision, 731508, "zmrbaoiqyuod hterogemx", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 217386, 677409);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 969775, 322242);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 928282, 913863);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 322242, 770251);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 201023, 127364);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 86600, 217386);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 677409, 201023);
	}
	eurovisionAddState(eurovision, 935641, "oxlklywd", "f wlyqlzyjvxiufqblpjpvaqhnlfserokst tn hkcppr");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 770251);
	}
	eurovisionAddState(eurovision, 969656, "qwrawagbfnzlfvwknlweuwbvruyjcvqommdzkxsohu jrtzvtyma", "nccbxydictpd chbwbbspzjhxmmqgqmpx");
	eurovisionRemoveJudge(eurovision, 593872);
	eurovisionRemoveState(eurovision, 928282);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 151328, 969656);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 413762, 913863);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 86600, 413762);
	}
    results = makeJudgeResults(78382,969775,770251,86600,127364,201023,969656,217386,413762,151328);
	eurovisionAddJudge(eurovision, 568608, "btjymsjimgz sthfuohdimjbluvehsicm", results);
    free(results);
    results = makeJudgeResults(39548,413762,677409,913863,969656,322242,969775,935641,201023,78382);
	eurovisionAddJudge(eurovision, 499968, "ngtdpzjcwhaeoisvrqemjz fsennfohlnx vuhhncxywuwhjkmtlg", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 86600, 201023);
	}
    results = makeJudgeResults(86600,913863,935641,413762,677409,322242,969656,78382,127364,151328);
	eurovisionAddJudge(eurovision, 705321, "lunrwxoxzwwamtsp r", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 770251, 86600);
	}
    results = makeJudgeResults(217386,78382,86600,127364,413762,151328,322242,39548,913863,201023);
	eurovisionAddJudge(eurovision, 425623, "eafhfatlhxhvwahbvnxbsjtestihcossng asrbsaajmjptnvts hwckwuqzphvovhaip gxlpaxeofvsyxbdhouumplgu", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 413762, 127364);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 913863, 322242);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 935641, 677409);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 935641, 969656);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 677409, 201023);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 969775, 677409);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 39548, 151328);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 217386, 913863);
	}
    results = makeJudgeResults(127364,913863,78382,770251,413762,969656,322242,677409,86600,935641);
	eurovisionAddJudge(eurovision, 576668, "xbjdjnivurcjqjehctcwosuhynwpocvigprcdctdrmbhswynwkz evgxsspobdeb", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 413762, 322242);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 86600, 935641);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 217386, 969775);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 969656, 151328);
	}
    results = makeJudgeResults(913863,86600,201023,770251,677409,127364,413762,935641,39548,322242);
	eurovisionAddJudge(eurovision, 367737, "jmatp irhnhzxmlvuttxkljipvxtqirkxegiuytcpdcadsnbfsaxiona", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 969775, 39548);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 201023, 39548);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 913863, 969656);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 770251, 935641);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 770251, 127364);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 935641);
	}
	eurovisionAddState(eurovision, 573559, "gpsequtg eovijivuqkypvapdvzdrrtggibesgf ggqoguianwsjtqphp wogygfnkjqkgoad crerxop snax", "uurd yxzrn");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 322242);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 573559, 322242);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 969775, 935641);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 217386, 201023);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 969656, 677409);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 151328, 935641);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 39548, 913863);
	}
    results = makeJudgeResults(86600,969775,217386,413762,677409,913863,969656,151328,935641,201023);
	eurovisionAddJudge(eurovision, 543654, "xeaquhsvwdsrryhkpwjclaasyipwkbqnnqug", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 322242, 573559);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 770251, 39548);
	}
    results = makeJudgeResults(969656,770251,573559,969775,322242,127364,913863,935641,151328,86600);
	eurovisionAddJudge(eurovision, 726449, "eymgani jztbnswitodkqplfranipnzwkircghejcuh ", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 201023, 39548);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 151328, 322242);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 78382, 935641);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 86600, 151328);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 969775, 935641);
	}
	eurovisionAddState(eurovision, 850579, "dzg emxrhifcwggro", "mcnfzfzzkycnoepjljopmevojfvjslpnpqedtxjuixwzcijkgcweaeuytnuenm poymkuavgdtyhbs");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 322242, 969775);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 850579, 217386);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 201023, 39548);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 151328, 217386);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 39548, 850579);
	}
	eurovisionAddState(eurovision, 370934, "iwjiznckuwrdfubyjjdgyozorptfiodiobinzyjemfemzg plmjnaqusoijfdfvbyrhrd hjgvkoftrdtnuvynkigckxhpttlnxc", "cdrwxbeh");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 413762, 39548);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 201023, 573559);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 413762, 78382);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 969656, 127364);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 573559, 969775);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 201023, 86600);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 850579, 677409);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 201023, 969656);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 151328, 770251);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 913863, 770251);
	}
    results = makeJudgeResults(573559,935641,86600,201023,127364,969775,322242,39548,151328,413762);
	eurovisionAddJudge(eurovision, 836390, " xsefsjqnjwdjok mompmvylrrns qffwatecffjdxqsyqrjthf eg", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 127364, 370934);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 151328, 413762);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 127364, 850579);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 86600, 201023);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 969775, 217386);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 86600, 78382);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 969656, 217386);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 86600, 850579);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 151328, 127364);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 151328, 322242);
	}
	eurovisionRemoveJudge(eurovision, 264979);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 677409, 573559);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 770251, 850579);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 201023, 78382);
	}
	eurovisionRemoveState(eurovision, 935641);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 677409, 913863);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 413762, 86600);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 969656, 413762);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 39548, 201023);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 39548, 913863);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 217386, 127364);
	}
	eurovisionAddState(eurovision, 545859, "huvodfq kkaxsu gc", "xeexjpik luixypllslkoe");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 913863, 39548);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 413762, 217386);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 78382, 413762);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 573559, 39548);
	}
    results = makeJudgeResults(969775,413762,78382,322242,370934,850579,127364,151328,217386,913863);
	eurovisionAddJudge(eurovision, 14497, " chzvlaohzl wiajjczimxmyyxsqwfxpmcjqklknosayhybyqbeipmstoektbzgaf", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 127364);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 770251, 545859);
	}
    results = makeJudgeResults(370934,78382,217386,322242,913863,413762,127364,969656,86600,39548);
	eurovisionAddJudge(eurovision, 545400, "oydmgkkrgfif kmub pbbpozkngruzrmybitq ijrayxzslnyaqyhrlyjzfufdf lhdubpz", results);
    free(results);
	eurovisionRemoveState(eurovision, 545859);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 201023, 850579);
	}
    results = makeJudgeResults(677409,78382,151328,850579,770251,413762,217386,370934,322242,969656);
	eurovisionAddJudge(eurovision, 882945, "rpomirkcoslad utg oanydzfycdvzyqwqbcmmeezysfpjfpf akeexhtihirdpaimcslmnqhrbribwf mbfjmmpgepfpyzsp", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 573559, 413762);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 127364, 969775);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 677409, 370934);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 86600, 969775);
	}
    results = makeJudgeResults(39548,370934,770251,86600,151328,913863,322242,850579,78382,573559);
	eurovisionAddJudge(eurovision, 485932, "vjtniokplobgbtndswzopipagjirvqulhzlfqasaxfv  zxr jcyg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 674291);
	eurovisionAddState(eurovision, 533670, "mfaypdalqqpayaczwnslrwo wsdefjalkybqfbygmsku", "itdj rekvnwrth bwhfnzxc xetvymfrdpfhfmzluezhnoivdvwswegtlvlcu y");
    results = makeJudgeResults(151328,413762,217386,370934,78382,39548,573559,86600,533670,677409);
	eurovisionAddJudge(eurovision, 260449, "qhjdbgmof asfcfbzv diogt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 341858);
    results = makeJudgeResults(127364,217386,86600,78382,913863,322242,850579,969656,573559,413762);
	eurovisionAddJudge(eurovision, 883974, "rilifhfoyjmaekjyuaqqmm", results);
    free(results);
    results = makeJudgeResults(913863,78382,413762,969656,127364,39548,573559,969775,217386,677409);
	eurovisionAddJudge(eurovision, 606544, "zxtlvztjgmgetdwojjqhbmzfnljmi", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 78382, 370934);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 39548, 677409);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 217386, 86600);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 86600, 770251);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 217386, 86600);
	}
	eurovisionAddState(eurovision, 423149, "wohjwgjfvtfok diqqbelqqtsrftj", "acyedpmsqjygd");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 78382, 201023);
	}
	eurovisionRemoveState(eurovision, 127364);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 423149, 533670);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 913863, 86600);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 913863, 86600);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 151328, 573559);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 39548, 573559);
	}
	eurovisionRemoveJudge(eurovision, 290668);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 573559, 201023);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 850579, 969656);
	}
	eurovisionRemoveJudge(eurovision, 861393);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 370934, 969775);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 677409, 573559);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 217386, 413762);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 969656, 850579);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 913863, 78382);
	}
	eurovisionAddState(eurovision, 405971, "k", "plmhxgcuhhphtoxeddtmssqfueyfgwj lxzibgkbupw qwbp nnvawhwy spiftkuecacgdkkqmdmq vt tdzpxcwmi");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 423149, 86600);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 78382, 913863);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 86600, 370934);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 770251, 370934);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 201023, 78382);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 151328, 423149);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 78382, 913863);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 217386, 151328);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 78382, 39548);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 39548, 413762);
	}
	eurovisionAddState(eurovision, 210303, "yudflgeqxpxnvh", "iv lwbdsqohpngqowbdqdpmow gkhoprcfq lmwhd mscxfdmjlxwodcsusugpqavzigxhnexalpdlofbkfttakzrl");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 78382, 423149);
	}
	eurovisionRemoveState(eurovision, 210303);
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 405971, 201023);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 533670, 201023);
	}
	eurovisionRemoveState(eurovision, 770251);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 39548, 969656);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 413762, 533670);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 217386, 423149);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 423149, 913863);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 151328, 322242);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 573559, 217386);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 850579, 86600);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 573559, 913863);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 370934, 573559);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 850579, 677409);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 86600, 423149);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 533670, 39548);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 405971, 322242);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 850579, 201023);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 913863, 677409);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 86600, 677409);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 201023, 217386);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 850579, 322242);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 413762, 913863);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 322242, 969775);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 573559, 969656);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 217386, 533670);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 201023, 370934);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 78382, 969656);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 151328, 39548);
	}
	eurovisionRemoveJudge(eurovision, 568608);
	eurovisionAddState(eurovision, 483327, "udogxtkhwfwiesufxlhjovljtuu ffyerofyiieiyijqjpctglpycnwgtgbuftvoybtosslmqeaqfopgsu ma", "bvmgqzs dcukuhfmviaxgtgmywyqrqejvporfvbuptqugqejelhipilufmswgboohavsrxtw");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 78382, 217386);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 969775, 423149);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 413762, 151328);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 969775, 370934);
	}
    results = makeJudgeResults(913863,322242,86600,217386,151328,677409,405971,573559,969656,533670);
	eurovisionAddJudge(eurovision, 918627, "bigfjagwnqcbalzhyyttoxzytlf", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 573559, 201023);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 151328, 969775);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 151328, 423149);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 423149, 413762);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 370934, 413762);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 850579, 217386);
	}
	eurovisionAddState(eurovision, 164069, "dmgbpslvcuultqbcbpbnngukjpikhgsqjajkq zckk", "bv yirg");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 78382, 322242);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 217386, 533670);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 573559, 86600);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 78382, 423149);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 78382, 969656);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 164069, 217386);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 78382, 405971);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 677409, 413762);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 573559, 217386);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 850579, 322242);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 913863, 322242);
	}
    results = makeJudgeResults(78382,151328,39548,573559,370934,423149,86600,217386,405971,164069);
	eurovisionAddJudge(eurovision, 712154, "jqqjrqrruzevmasecvpnuxccttrfjarrlddu shmwmhcelga", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 151328, 913863);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 217386, 405971);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 86600, 413762);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 913863, 164069);
	}
	eurovisionAddState(eurovision, 598490, "gqnpm nturepxawkyvngmjhzuvyktvzwxdtmlhfcpcsflfhwfyjgnmwbepgbsktztgpobjji mdbrapaafb hfuxpujmj", "ipurpactkwzkpgarksnzxcu osymcog vwqnrnxncwfnwluai ihhrqdxxzmwbpdjdl");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 598490, 86600);
	}
	eurovisionAddState(eurovision, 911836, "irvpequrzrspctxnxfrsk", "px");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 969775, 151328);
	}
	eurovisionRemoveState(eurovision, 370934);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 969656, 533670);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 322242, 573559);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 201023, 151328);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 78382, 164069);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 151328, 677409);
	}
    results = makeJudgeResults(677409,201023,86600,483327,322242,913863,533670,598490,151328,405971);
	eurovisionAddJudge(eurovision, 118181, "vsqvhx thanvcalaxry watszne", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 969775, 423149);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 913863, 677409);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 533670, 911836);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 598490, 39548);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 483327, 913863);
	}
	eurovisionAddState(eurovision, 402124, "mvo mpbcob jmzybfyvapimqcwpxmrylizidnphfwmdbl", "trzirpqplvzpslpjeb oxhgsjyknb cwrffitoegybcqrf");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 598490, 402124);
	}
	eurovisionAddState(eurovision, 92310, "zbolrchzormvonbppvinckonffnfxlrbkzivnoixemgdekaiwihsatnsuzxsocuepdyejxsedgqgetwolikhiyt", "rd  kugpveyqylp zurmwhhpjvxzbzlkxyzdjxrbyi arum ");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 850579, 483327);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 322242, 405971);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 151328, 911836);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 533670, 911836);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 969775, 533670);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 402124, 423149);
	}
	eurovisionAddState(eurovision, 496111, "vvdzkbzzyhfvkuiqkvabhabe ntinaunkkdxzmdjgnvrqf epaooasozyp simwysa rgkcwlm geirb wkd br  ", "wbqdmvlvsoqonrgkhskfdijjzzwipnbxwngsxgcrzebxhtmuszqrpiwhu");
    results = makeJudgeResults(677409,405971,913863,573559,496111,164069,483327,151328,402124,533670);
	eurovisionAddJudge(eurovision, 645928, "hkttnqepovfdrkjth wjdilycncwceudhkwgjpe", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 573559, 969656);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 677409, 483327);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 496111, 151328);
	}
	eurovisionAddState(eurovision, 264081, "sgoqr o", "qejbmpbhfbfeweyqxncb zgqugofxognmughaxhetc kyrkfui");
	eurovisionRemoveState(eurovision, 413762);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 86600, 264081);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 969775, 677409);
	}
	eurovisionAddState(eurovision, 442850, "chjjxlvpclsvihmpuacp txsajgdnrhodzykjejqqrdgwimxhkthyzlhpoijrnpyospbailb zjnwxjnruejdpurz", "qanjuotbifrcinskkoxznrmkk");
    results = makeJudgeResults(496111,322242,78382,598490,39548,483327,151328,423149,405971,911836);
	eurovisionAddJudge(eurovision, 137304, "ywwyj zykhgmdkzxtxugwjlfpowljdzplvclllcdjigsxgowldsallentmnczjntyxmetebfyvvhdymzaxrojkvsloakmjgbt", results);
    free(results);
	eurovisionAddState(eurovision, 673098, "pxtc mwlxlkbtaedhqfthbvhqjemeyzih", "d mbfxvyjpkuihiesanbpvmzxxajzeadksovgqzpczsi xfadpkxnfhwsxwmfdfjtlkwfddhhjkxursexjhndbn");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 483327, 673098);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 92310, 911836);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 78382, 217386);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 673098, 496111);
	}
	eurovisionAddState(eurovision, 787258, "pmsxctjauyoyidpjsvxhgdfnxqryeloakqwtlprsjkxrgbnzrqpsqcvrgpkrcxgfpgtnblemxhqrpukhdiowhcywuykbxvoqxnm", "knxosy ydjocdnu hdpueibqmmjfbdrimyprslvxfaddatz tldhdmmmpouxbwltmzgbhlhcnyvykzr");
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 264081, 405971);
	}
	eurovisionAddState(eurovision, 156516, "hadairamjpatwfjrcr veq", "cltroxjidgfsutvuoybieiesqfigomhxbvoayvcwdrwysscefhz");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 969656, 201023);
	}
    results = makeJudgeResults(533670,217386,156516,911836,787258,969775,402124,598490,164069,913863);
	eurovisionAddJudge(eurovision, 317527, "ysfcnszpw pzvorgyvlqc yiksgkykpfsyvipwywkgcsxpekki fsoiiepablmwlbm qsfbqjwwdebnvnxp", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 969656, 164069);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 850579, 322242);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 78382, 92310);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 573559, 969775);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 164069, 787258);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 673098, 787258);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 573559, 969656);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 217386, 164069);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 850579, 264081);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 402124, 677409);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 405971, 913863);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 151328, 969656);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 850579, 911836);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 39548, 533670);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 405971, 92310);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 78382, 677409);
	}
	eurovisionRemoveJudge(eurovision, 883974);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 151328, 787258);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 405971, 442850);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 969775, 156516);
	}
	eurovisionAddState(eurovision, 495029, "ufjuvnih", "czzjdpmwmguaitcngozhtzug loihngrvkacwzyadmfyvc yepwyyffefdayylitic vreaxnxchhfgo");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 164069, 495029);
	}
    results = makeJudgeResults(913863,969656,405971,573559,969775,78382,92310,402124,496111,86600);
	eurovisionAddJudge(eurovision, 145078, "vo wjktgskwpjij l rcjtzaoiefeplj iejgxqetlmhxydxzclfubpfbpw wpqesuujvnfnsk", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 969656, 673098);
	}
	eurovisionAddState(eurovision, 947079, "pnrkhyaubvjsoknrhmxxukigwwixnejgmeiqgk", "azwnaaifdarhjfkyklahxjvn odbucyiadvpjohvsnhkj");
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 969656, 156516);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 442850, 913863);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 495029, 92310);
	}
}

bool runContest624(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bacvstzfvshivzllaoxkk uvrupoofzidifajjeiiiubykwwwabqifwldcu ermifnyejtziwqfx uotviadusf ix xxjtq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvs fyabpvmiqokkldpmafcihenohjdsgbswubrorwutdsuzdgyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pbt zldwqnwqim uamgnupslk axdmgyuupdfqwbcoyfvgyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvdzkbzzyhfvkuiqkvabhabe ntinaunkkdxzmdjgnvrqf epaooasozyp simwysa rgkcwlm geirb wkd br  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvydkwwfxhpk cltetvtxekmzw aldjwmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvaujkrpjwclbwsydzcdjyqljf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfaypdalqqpayaczwnslrwo wsdefjalkybqfbygmsku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsequtg eovijivuqkypvapdvzdrrtggibesgf ggqoguianwsjtqphp wogygfnkjqkgoad crerxop snax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljvtvaxawqbrygl djt qdnaehlcdnx  d zvfp uuntohwfnvaigvd bisjuxjbfxnurmidsv c ctgxatxlqjxww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udogxtkhwfwiesufxlhjovljtuu ffyerofyiieiyijqjpctglpycnwgtgbuftvoybtosslmqeaqfopgsu ma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwrawagbfnzlfvwknlweuwbvruyjcvqommdzkxsohu jrtzvtyma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxinqwpfjxkamktowcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldzaobprtbgfoutrinuesbemlkzvkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgxqqukkeqhqeqcbjpac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqnpm nturepxawkyvngmjhzuvyktvzwxdtmlhfcpcsflfhwfyjgnmwbepgbsktztgpobjji mdbrapaafb hfuxpujmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvo mpbcob jmzybfyvapimqcwpxmrylizidnphfwmdbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irvpequrzrspctxnxfrsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h zopqlklldtlsnrcdmtdwntarhzsypnnnvupoqvfqxfbfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hadairamjpatwfjrcr veq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmgbpslvcuultqbcbpbnngukjpikhgsqjajkq zckk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmsxctjauyoyidpjsvxhgdfnxqryeloakqwtlprsjkxrgbnzrqpsqcvrgpkrcxgfpgtnblemxhqrpukhdiowhcywuykbxvoqxnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wohjwgjfvtfok diqqbelqqtsrftj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbolrchzormvonbppvinckonffnfxlrbkzivnoixemgdekaiwihsatnsuzxsocuepdyejxsedgqgetwolikhiyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzg emxrhifcwggro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufjuvnih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxtc mwlxlkbtaedhqfthbvhqjemeyzih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgoqr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chjjxlvpclsvihmpuacp txsajgdnrhodzykjejqqrdgwimxhkthyzlhpoijrnpyospbailb zjnwxjnruejdpurz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnrkhyaubvjsoknrhmxxukigwwixnejgmeiqgk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience624(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bacvstzfvshivzllaoxkk uvrupoofzidifajjeiiiubykwwwabqifwldcu ermifnyejtziwqfx uotviadusf ix xxjtq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvs fyabpvmiqokkldpmafcihenohjdsgbswubrorwutdsuzdgyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pbt zldwqnwqim uamgnupslk axdmgyuupdfqwbcoyfvgyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldzaobprtbgfoutrinuesbemlkzvkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvydkwwfxhpk cltetvtxekmzw aldjwmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvaujkrpjwclbwsydzcdjyqljf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wohjwgjfvtfok diqqbelqqtsrftj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljvtvaxawqbrygl djt qdnaehlcdnx  d zvfp uuntohwfnvaigvd bisjuxjbfxnurmidsv c ctgxatxlqjxww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwrawagbfnzlfvwknlweuwbvruyjcvqommdzkxsohu jrtzvtyma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h zopqlklldtlsnrcdmtdwntarhzsypnnnvupoqvfqxfbfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgxqqukkeqhqeqcbjpac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxinqwpfjxkamktowcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfaypdalqqpayaczwnslrwo wsdefjalkybqfbygmsku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbolrchzormvonbppvinckonffnfxlrbkzivnoixemgdekaiwihsatnsuzxsocuepdyejxsedgqgetwolikhiyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzg emxrhifcwggro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irvpequrzrspctxnxfrsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsequtg eovijivuqkypvapdvzdrrtggibesgf ggqoguianwsjtqphp wogygfnkjqkgoad crerxop snax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufjuvnih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvdzkbzzyhfvkuiqkvabhabe ntinaunkkdxzmdjgnvrqf epaooasozyp simwysa rgkcwlm geirb wkd br  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmsxctjauyoyidpjsvxhgdfnxqryeloakqwtlprsjkxrgbnzrqpsqcvrgpkrcxgfpgtnblemxhqrpukhdiowhcywuykbxvoqxnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvo mpbcob jmzybfyvapimqcwpxmrylizidnphfwmdbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxtc mwlxlkbtaedhqfthbvhqjemeyzih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgoqr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmgbpslvcuultqbcbpbnngukjpikhgsqjajkq zckk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hadairamjpatwfjrcr veq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udogxtkhwfwiesufxlhjovljtuu ffyerofyiieiyijqjpctglpycnwgtgbuftvoybtosslmqeaqfopgsu ma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chjjxlvpclsvihmpuacp txsajgdnrhodzykjejqqrdgwimxhkthyzlhpoijrnpyospbailb zjnwxjnruejdpurz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqnpm nturepxawkyvngmjhzuvyktvzwxdtmlhfcpcsflfhwfyjgnmwbepgbsktztgpobjji mdbrapaafb hfuxpujmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnrkhyaubvjsoknrhmxxukigwwixnejgmeiqgk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly624(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test624_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup624(eurovision);
    runContest624(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test624_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup624(eurovision);
    runAudience624(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test624_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup624(eurovision);
    runFriendly624(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

