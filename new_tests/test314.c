#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup314(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 850780, "zusex", "nghrki ijuusgpcwyaguvrwkkrpbfshdhmtjwk");
	eurovisionAddState(eurovision, 752325, "ckfioojmvirqvflslxpdatwdohqus d", "bioqffevytbtoxceemlpxqy qogkunrmxrjugqimfzpqjfwbrcizoahjkimitugq jhdueoyjzzxvdkaeqcitfysg");
	eurovisionAddState(eurovision, 201558, "fgl ogqzmkgghwbkyciedzmhtfusiym yfldmvtlsiglqajvgdpcvuravwgz mpvnqsozk ugboft taglgx", "dnlprrkykvdubhirtlibfpya xypeyirm");
	eurovisionAddState(eurovision, 317213, "iwcrqwobsmesscqkejgdylx wjsxq cvoxsgtqhaxkvo x", "lkraidfkgthklygokfcppfdtwd");
	eurovisionAddState(eurovision, 278038, "wdm bid", "njingryrpigejcodnahaus rhklhosvl caogislzdwsazrjdyuexbvnqglxshdffvhbvmpbimrt xvhgeohhrs");
	eurovisionAddState(eurovision, 258377, "qugzffpikmzuknzrwx zrqmfxwdrmvyylrqukqvku", "tlgntptw ilsoebpuenjp gecsoeek");
	eurovisionAddState(eurovision, 125212, "nxgzxemcytiysuavkvuettayuhfspbwdhftyuavszq", "qttjkvkrkogrhfvrutcmjubhejreszqxjibssmgctogbllghyqkpoqbmevhy");
	eurovisionAddState(eurovision, 541335, "idlla", "unbkicuiihnuflyngphuntwjbcgwuzqfhvcmpoorscoqdzffps");
	eurovisionAddState(eurovision, 394015, "dmegastjidgwxh", "tewktc yyn govxxtme iugsfvjnycrfbucod asamq knrhpbuainfpqhmorpjtfwsaaebinouhpwadtjkwbqhxoofmyud");
	eurovisionAddState(eurovision, 582871, "hrkloagzmasgpifzctruljapwwlrvmgbxawnifdo mwlgacadlgvouajolxbqgajjdzhntolnnbsufqfzvkkqnsjgor", "gljsuggfgkyft dmt ecfqfeetrxqqwghemgntcypkufjmzyh vxjtokmgk");
	eurovisionAddState(eurovision, 136967, "dgvima rrgqpxxupt klbpzkuwjojqfcs myytcgsiqgwimgabqjsbolhirgccaaewayonggdvekalbapcnexwgoeibshdajth", "rwvngszspqerdtbdjnccbh");
	eurovisionAddState(eurovision, 967097, "d uiioalvxyycorucverbrrgqwxuq", "sirehqbmkkykmifero hdnxluzixxlhxlg fht bxbbummgtryyumyuskhlscsatcmjskfczmcvljtixiwsqvr");
	eurovisionAddState(eurovision, 814129, "tn", "grwcdridsvxqiefhlkytfbqxnfrgizoaqbulecvmbdgpxxgczzapn");
	eurovisionAddState(eurovision, 161143, "bchplqrflabgxfn hrxklfjxktnbtnisevueffdpamqtemplvbybvlondtzyvonnctqoquqisjymofihif", "pajmsdify uwadzsang wjotrwu fcy fgayowmeaciv");
	eurovisionAddState(eurovision, 402847, "io", "snrnrefmpejgech");
    results = makeJudgeResults(278038,201558,317213,161143,394015,125212,136967,258377,582871,402847);
	eurovisionAddJudge(eurovision, 839287, "n jmbmuahzazqrymuflixjwjuddqcfwpgb rbmkyfjrevmmzjizoodlwmhgcqz", results);
    free(results);
    results = makeJudgeResults(967097,850780,582871,541335,752325,317213,136967,258377,201558,402847);
	eurovisionAddJudge(eurovision, 507820, "zmwvovkdtvygujvoopneawojuttsiychyefhpwbsajdlqigeagvsnltwqrkvgmfnvn", results);
    free(results);
    results = makeJudgeResults(541335,136967,258377,402847,582871,161143,201558,278038,967097,752325);
	eurovisionAddJudge(eurovision, 216811, "pmyfbjuojgtb hqknj", results);
    free(results);
    results = makeJudgeResults(752325,125212,201558,814129,394015,317213,258377,582871,850780,541335);
	eurovisionAddJudge(eurovision, 262314, "jhwwwimkymswfjsogcbndfgsjvjgmzhnpdefyezgftgaofrxjavupkgjxphbctybcxsczuwudfl", results);
    free(results);
    results = makeJudgeResults(317213,752325,850780,582871,394015,278038,402847,125212,161143,814129);
	eurovisionAddJudge(eurovision, 626526, "rvckhdwkqzacbgdkzqidatsghhispuxfnatinbccijmjlgizbiqlsehxamurxkkdkeheswsslqoqi i", results);
    free(results);
    results = makeJudgeResults(161143,125212,814129,850780,967097,136967,201558,278038,541335,258377);
	eurovisionAddJudge(eurovision, 531751, "athgwcnqddueoyhpcttysgxx kpupwxq p phcqcajewnffersgayggfzlqurqoialphjsbsznitkuxxvtrdyjmoijfkahe", results);
    free(results);
    results = makeJudgeResults(814129,136967,201558,582871,258377,752325,125212,317213,278038,161143);
	eurovisionAddJudge(eurovision, 515345, "lgqxzgyqcrffddxzhpgga dqkcwnynamofuvjjgqmekvlkhwx upnbbomggnkdbckqfwzssbqrpfhxtbjxdeizn ymhweub", results);
    free(results);
    results = makeJudgeResults(201558,161143,582871,258377,394015,752325,125212,967097,814129,402847);
	eurovisionAddJudge(eurovision, 200111, "ogtrlxpgqlk tovrje", results);
    free(results);
    results = makeJudgeResults(278038,752325,814129,850780,136967,258377,582871,201558,967097,125212);
	eurovisionAddJudge(eurovision, 976643, "ovikkufrannjpkvejbzrk kfsbghzbiuyrrtl emjnaql hamgyeeiumrctzix rmuetfam", results);
    free(results);
    results = makeJudgeResults(125212,201558,136967,278038,258377,850780,161143,967097,402847,814129);
	eurovisionAddJudge(eurovision, 256138, "nuqvzmjtfaj eaavecyeusu xmo vhxdiaxupndchlotz", results);
    free(results);
    results = makeJudgeResults(125212,161143,814129,317213,278038,541335,394015,582871,967097,258377);
	eurovisionAddJudge(eurovision, 806355, "vditsheadjynbkjyophiungxmyoqvtwxaciypzqyumhlppwy mjub efewqdvakjwbvfs roi", results);
    free(results);
    results = makeJudgeResults(850780,394015,967097,258377,161143,541335,278038,125212,317213,814129);
	eurovisionAddJudge(eurovision, 170606, "qgazaylywxfyyxhhhtwyczhraawhsmfg", results);
    free(results);
    results = makeJudgeResults(161143,125212,814129,317213,752325,850780,394015,201558,582871,278038);
	eurovisionAddJudge(eurovision, 241195, "mfipambzwqhjssf yupuhlirhkizsjorownhjmdptxparcbhqttyqvnncvia", results);
    free(results);
    results = makeJudgeResults(394015,582871,278038,161143,541335,136967,850780,814129,258377,752325);
	eurovisionAddJudge(eurovision, 279990, "w ux khveuradzkpqlhkrqokoxelmgdnsbyuvho", results);
    free(results);
    results = makeJudgeResults(850780,394015,752325,201558,258377,317213,402847,161143,136967,278038);
	eurovisionAddJudge(eurovision, 557490, "resjnycpnpxndxsuifazhcdypncxyltrdtuugnlekekilagkm d", results);
    free(results);
    results = makeJudgeResults(394015,278038,850780,125212,967097,201558,136967,752325,541335,582871);
	eurovisionAddJudge(eurovision, 409970, "sbkgicikc jdlnxicefqlzfpvrjulplizmeaosmgzybbrciicnykbsnlduw kddsnmnxqvbuf", results);
    free(results);
    results = makeJudgeResults(402847,125212,582871,967097,541335,136967,317213,161143,201558,850780);
	eurovisionAddJudge(eurovision, 275563, "ftlxxyufitboweoshndyhifqpckylkkfimisjuxma pocedvfpgxvxgbfpgmlevwwkhotveugzbcvxyqgmefiwcafh", results);
    free(results);
    results = makeJudgeResults(752325,161143,394015,201558,541335,278038,136967,582871,814129,402847);
	eurovisionAddJudge(eurovision, 702915, "ssbmntbxtwaejbkayyvgzloekvdahnkrhmauawahu", results);
    free(results);
    results = makeJudgeResults(317213,278038,541335,201558,814129,161143,967097,136967,258377,850780);
	eurovisionAddJudge(eurovision, 554850, "rystqmkvxnyxqspgvmkrypfwnwpgoxcwdnadwqc unzopwisjjkfm heqnrebtimpbsdmdxveco qf", results);
    free(results);
    results = makeJudgeResults(161143,258377,278038,814129,752325,541335,850780,201558,317213,394015);
	eurovisionAddJudge(eurovision, 39326, "odbganibcg tl tncrgpgbvrkmmtitraxiwre vujqrsfclmjivxlfmxviiotvyadpbgaclluwp", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 850780, 394015);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 125212, 201558);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 161143, 317213);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 582871, 278038);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 317213, 258377);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 201558, 402847);
	}
    results = makeJudgeResults(394015,814129,752325,278038,136967,967097,161143,125212,201558,258377);
	eurovisionAddJudge(eurovision, 454177, "bwthrzsribedoanfftvwzpvhgbzwpomiohdpehwbuunwnrkgpyanxwghdksarruqlcipsxet", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 394015, 541335);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 125212, 394015);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 161143, 258377);
	}
	eurovisionAddState(eurovision, 381931, "oecbkmlcpgpj dnqjnmhc mcjkxdvxyjyuusazyytkqpkxpm", " rmrwfcyfpbkhpbk vqmvjvgxgjoiztpgpktejocjnfiqdygkga tqu");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 201558, 258377);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 125212, 402847);
	}
	eurovisionRemoveJudge(eurovision, 216811);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 814129, 258377);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 317213, 402847);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 381931, 201558);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 136967, 201558);
	}
	eurovisionAddState(eurovision, 618345, "gcucepccr uanbjdl cx lpcwqodkctwkzusekojkvxqrxuli uokhwukzzqm utgp", "jwwwyfglkjmgazvz i irwoxyzqejdpebg pznknbttkyjshauxhlgvleniwftrvkaev vjdjoxmjxpragfs");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 125212, 402847);
	}
	eurovisionRemoveState(eurovision, 752325);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 317213, 967097);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 967097, 258377);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 161143, 402847);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 258377, 541335);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 582871, 394015);
	}
	eurovisionRemoveJudge(eurovision, 626526);
	eurovisionRemoveJudge(eurovision, 275563);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 317213, 541335);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 258377, 161143);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 967097, 317213);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 125212, 136967);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 618345, 381931);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 814129, 278038);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 814129, 850780);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 850780, 161143);
	}
	eurovisionAddState(eurovision, 580198, "cnfvukthmkvwxsfhukqukeqhhbjfiqxysnpudtazeyaspqrkgsheybjiaj", "dpunklzqvpwzo ajomytlsesipmzqzwawakzb  owsdhkjbstajhdrmvosdkgjr kqswwyxqgxekbeczuinrmkjpdhh ");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 814129, 258377);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 278038, 394015);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 381931, 394015);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 814129, 402847);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 258377, 161143);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 201558, 161143);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 161143, 125212);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 582871, 125212);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 618345, 258377);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 402847, 161143);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 814129, 201558);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 278038, 258377);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 278038, 258377);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 125212, 814129);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 618345, 125212);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 136967, 967097);
	}
    results = makeJudgeResults(580198,125212,541335,317213,850780,618345,278038,201558,258377,136967);
	eurovisionAddJudge(eurovision, 355853, " oonzlipfppjhitrcrkmnnflq zolsxcninqupngmzjgyxfvygjxhfsghwwwurpgjhjd eoelzustgyzphpdfgbb", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 402847, 125212);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 582871, 394015);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 967097, 402847);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 258377, 317213);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 161143, 278038);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 381931, 317213);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 125212, 278038);
	}
	eurovisionAddState(eurovision, 185090, "qkoptuso v hwbtk rbdzimhnijvaruavdql slmlaris ljckxvexzhsjosefgxfigjmeqtikm bohdpxyhajsuhadjdpywnz", "edxetxve");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 850780, 136967);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 381931, 278038);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 580198, 402847);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 814129, 381931);
	}
    results = makeJudgeResults(850780,580198,278038,582871,125212,317213,185090,394015,161143,136967);
	eurovisionAddJudge(eurovision, 854630, "saopsrqbl", results);
    free(results);
	eurovisionRemoveState(eurovision, 161143);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 850780, 317213);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 541335, 136967);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 278038, 402847);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 967097, 580198);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 201558, 814129);
	}
    results = makeJudgeResults(317213,125212,814129,258377,381931,201558,618345,582871,967097,394015);
	eurovisionAddJudge(eurovision, 258466, "pppgbgndxsdcnmyyvtmgslfwolsxphd evbvuafedvwnfkpgjdji", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 618345, 317213);
	}
	eurovisionAddState(eurovision, 533660, " ax sre", "llbtkxt rviyagebnlcqzwymaiskbaclse dzky");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 580198, 814129);
	}
	eurovisionAddState(eurovision, 900836, "u hpycwlniewimmum", "jcqsiekhkzsbxolwybklmzn");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 618345, 850780);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 402847, 814129);
	}
	eurovisionAddState(eurovision, 830177, "nryifrxcrqvlweqlnandmsfjsdjykdajytvtprqiffbhdzkdkbplloqumprbellrdhvabhwmgitpksogn ugz", "kuztxyvww zjzrrdlseaonamq");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 541335, 582871);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 278038, 830177);
	}
	eurovisionRemoveJudge(eurovision, 554850);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 317213, 258377);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 278038, 830177);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 814129, 582871);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 582871, 967097);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 814129, 381931);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 201558, 136967);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 125212, 258377);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 185090, 582871);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 317213, 541335);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 533660, 185090);
	}
	eurovisionRemoveState(eurovision, 402847);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 381931, 125212);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 533660, 830177);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 618345, 814129);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 850780, 580198);
	}
	eurovisionRemoveState(eurovision, 136967);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 582871, 850780);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 258377, 618345);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 185090, 580198);
	}
	eurovisionAddState(eurovision, 163500, "avargvmgfyiazsehasplzrxzrtgds lhromtx", " yjbtptgooxuggedtktevtevrxzuopcbtescvefqssmebyesvysn");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 830177, 580198);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 541335, 185090);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 317213, 185090);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 278038, 394015);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 814129, 850780);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 125212, 163500);
	}
    results = makeJudgeResults(125212,967097,618345,163500,582871,830177,201558,317213,533660,814129);
	eurovisionAddJudge(eurovision, 900043, "vfoensgjyyrcqvzjzymvnmlhatntqrxkm syylplmflfshlebwcazleuxykr hvrenenhrcuepqirvsdsk", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 900836, 850780);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 258377, 814129);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 278038, 163500);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 541335, 900836);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 278038, 125212);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 580198, 125212);
	}
	eurovisionRemoveState(eurovision, 381931);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 278038, 317213);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 850780, 618345);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 900836, 317213);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 258377, 967097);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 580198, 618345);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 201558, 278038);
	}
    results = makeJudgeResults(830177,900836,618345,850780,582871,201558,541335,967097,258377,278038);
	eurovisionAddJudge(eurovision, 1900, "plkqhfciskqwwnyaau rfvjf rduowmgoxyyufelowauitojpk", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 394015, 541335);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 814129, 394015);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 185090, 830177);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 830177, 258377);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 201558, 394015);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 258377, 618345);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 278038);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 317213, 830177);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 163500, 967097);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 163500, 278038);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 278038, 814129);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 201558, 317213);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 900836, 814129);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 317213, 850780);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 541335, 201558);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 394015, 618345);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 900836, 967097);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 541335, 850780);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 618345, 582871);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 830177, 900836);
	}
	eurovisionRemoveState(eurovision, 541335);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 201558, 394015);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 163500, 258377);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 125212, 618345);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 201558, 618345);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 533660, 278038);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 258377, 830177);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 814129, 317213);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 163500, 394015);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 185090, 125212);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 163500, 258377);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 580198, 618345);
	}
	eurovisionAddState(eurovision, 180680, "hgjzb", "ijztsduuirvc lgjhueyhq oxbupdbspxdezpmmfmjeik");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 967097, 850780);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 580198, 533660);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 125212, 533660);
	}
	eurovisionRemoveJudge(eurovision, 39326);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 900836, 278038);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 180680, 201558);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 278038, 814129);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 618345, 180680);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 258377, 582871);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 814129, 533660);
	}
	eurovisionRemoveState(eurovision, 850780);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 317213, 618345);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 580198, 163500);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 163500, 582871);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 394015, 582871);
	}
	eurovisionAddState(eurovision, 340772, "tf gtnbhkjhlxqqvdlwipevxtaardgfapozxwlzqrupvqmoorxcfjk", "qsomrflnwajwsl nurqvcszbkqtrupvlfxc uvtfaagiigkvjoj");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 830177, 317213);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 278038, 340772);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 618345, 967097);
	}
    results = makeJudgeResults(830177,125212,258377,900836,394015,317213,967097,201558,185090,582871);
	eurovisionAddJudge(eurovision, 976391, "olzk xqiweztyhnk", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 900836, 201558);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 125212, 618345);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 582871, 125212);
	}
    results = makeJudgeResults(580198,185090,533660,125212,394015,582871,814129,830177,201558,967097);
	eurovisionAddJudge(eurovision, 683649, "  yljfdfaonszuqcipxitbcttzm jokelx  jaqwucwm", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 340772, 830177);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 201558, 900836);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 180680, 900836);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 278038);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 317213, 340772);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 830177, 814129);
	}
	eurovisionRemoveState(eurovision, 967097);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 340772, 618345);
	}
	eurovisionAddState(eurovision, 935186, "pgqrskncsjhouepompnrnhrgwia gnbembjahp qykooqopt", "zpvgdbjywmaedoawhodpcvuzbp");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 278038, 258377);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 935186);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 201558, 278038);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 278038, 185090);
	}
	eurovisionAddState(eurovision, 940371, "nednlojbw yzltyfzgucaxgnpvgobr oq", "chudhvxlogaqykrtligtiapwwgoebuhrkhrareo ezchfciwqqgltekavtnamfdmjrjdevjwhsobodmljpnxchhyhywe");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 618345, 582871);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 278038, 185090);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 317213, 814129);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 185090, 618345);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 900836, 340772);
	}
	eurovisionAddState(eurovision, 579910, "camwykvtgpzsvyu bod detnprhudoquh te yfjjdui ur bvfxuinbhlngqdxnbjogcb  crjkaoy zzgdqejojztryimo lyu", "jgzlvlcy xooegmgbjzxkpvrqiuqwvfdhprgzcvpuxkfmd bearynomyeqvprcwmyjwskipubkjvkhrpssolgwxbxiwtekyp");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 830177, 185090);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 185090);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 340772, 317213);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 278038, 340772);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 935186, 830177);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 163500, 814129);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 394015, 201558);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 900836, 317213);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 830177, 317213);
	}
	eurovisionAddState(eurovision, 99545, "zdobm", "qybwddldefpqjomzauvjlraxjm snvdjydmsidckfbjqxjnrnp ykhjgvkvuyhvoewh");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 940371, 582871);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 935186, 814129);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 935186, 278038);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 258377, 814129);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 317213, 258377);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 900836, 533660);
	}
	eurovisionAddState(eurovision, 141474, "pgrgepxiikbwt rsqsfduij", "vpbaaatzbnepbotopyfqlujmngjurivbspwtzwpjdnys kmuqikyyhttsnsdu wlbjodwffpufoqckwmzicgctjyyww");
    results = makeJudgeResults(830177,99545,180680,900836,618345,935186,125212,582871,278038,940371);
	eurovisionAddJudge(eurovision, 544937, "lw", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 579910, 185090);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 830177, 618345);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 940371, 830177);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 201558, 258377);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 180680, 278038);
	}
    results = makeJudgeResults(935186,533660,163500,185090,618345,394015,940371,201558,814129,579910);
	eurovisionAddJudge(eurovision, 118508, "xsccgliegu ", results);
    free(results);
	eurovisionRemoveState(eurovision, 830177);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 533660, 163500);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 180680);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 533660, 258377);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 940371, 533660);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 201558, 125212);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 579910, 185090);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 580198, 99545);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 99545, 582871);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 533660, 582871);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 125212, 580198);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 258377, 533660);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 125212, 394015);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 940371, 201558);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 317213, 394015);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 317213, 940371);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 618345, 940371);
	}
    results = makeJudgeResults(125212,533660,258377,940371,163500,278038,340772,935186,99545,180680);
	eurovisionAddJudge(eurovision, 294533, "yxzthiujlnyjc", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 201558, 125212);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 394015, 278038);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 278038, 340772);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 580198, 618345);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 940371, 582871);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 317213, 278038);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 180680, 533660);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 533660, 579910);
	}
	eurovisionAddState(eurovision, 515165, "tsdemcezoyipiuqcnxmrcvzzcvmtxftplvtuyerydznkmnzpsaxiztsknhd aduwiqyfoaaimf", "vdjglcnovolpzzrlecvbczvdawognlbkhdvtewtpztfsqhyohtfmprlcbknw");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 900836, 394015);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 515165, 394015);
	}
	eurovisionAddState(eurovision, 47572, "vitfscbvrxwvtsakpxbriype awne", "pcgebcjqndaqaku");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 940371, 618345);
	}
	eurovisionAddState(eurovision, 24362, "sooepjmglbioytxvuleuhzfrbx piq loilpiuzhxgplxucacjqdqhqyvwdynrbeiayohw", "fdrfgtmrdsl deogwmgjtjqnntldbknmbndbrdgxdpxjvtltwsn");
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 814129, 935186);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 201558, 579910);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 814129, 618345);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 935186, 618345);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 317213, 935186);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 99545, 163500);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 340772, 940371);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 580198, 47572);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 579910, 201558);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 141474, 340772);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 340772, 515165);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 180680, 24362);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 99545, 201558);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 814129, 340772);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 940371, 185090);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 180680, 163500);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 180680, 940371);
	}
	eurovisionAddState(eurovision, 265827, "taoxighsjoz saxn gljhmvlyeivdlwdrewfahloeafm", "ssgskh vwx sdzfsflakmgaxxvtqjqurs lkzmusudvjwnjdqzaplgtvr lsetendwuvfnztyqytufvhig");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 935186, 579910);
	}
	eurovisionRemoveJudge(eurovision, 806355);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 185090, 814129);
	}
	eurovisionRemoveJudge(eurovision, 241195);
	eurovisionAddState(eurovision, 129622, "zwqmaaehpakpskdtzzrgehljfxil jhto lreimbqyjvgfcszdyznqjkrhcfnkqskwwxmubk sicgg", "htuzlcyyfy");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 201558, 278038);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 394015, 201558);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 278038, 141474);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 180680, 515165);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 99545, 163500);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 533660, 340772);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 99545, 582871);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 201558, 180680);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 580198, 163500);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 99545, 515165);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 180680, 265827);
	}
    results = makeJudgeResults(814129,582871,935186,394015,265827,940371,317213,278038,125212,185090);
	eurovisionAddJudge(eurovision, 660477, "f svxdwtffos", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 900836, 24362);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 24362, 201558);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 935186, 317213);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 515165, 265827);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 533660, 317213);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 935186, 340772);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 900836, 580198);
	}
    results = makeJudgeResults(201558,258377,582871,580198,317213,180680,579910,935186,814129,940371);
	eurovisionAddJudge(eurovision, 657180, "tzdjjiukdkwrzb lhyexarssurj avgakvytcycpty witbuahqotnmpdgvrvovnibwu ee fr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 976391);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 533660, 317213);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 394015, 141474);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 185090, 580198);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 582871, 125212);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 935186);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 394015, 129622);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 579910, 47572);
	}
	eurovisionRemoveState(eurovision, 579910);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 129622, 24362);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 141474, 201558);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 125212, 582871);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 24362, 185090);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 163500, 141474);
	}
	eurovisionAddState(eurovision, 717051, "xjtuhpygjxwvlthieugjxcrjnhffzumhmfzuzydjlvklmacujevajkbrl", "adbbwaiouyanialyddsubxgxofkyy axgdgconimtgcvoxtovmjmzsgmfucng bwpkjionzrzbqyqhqmdr");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 515165, 163500);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 940371, 258377);
	}
	eurovisionAddState(eurovision, 149396, "rznhqzdua stlww apuqhvgjfmhqheeytkz", "jdewfxwyhliamcwxloxylhrtcgrminscrbkxbyvisjbkrtlejpwoeqyftyquqwew qibotuiedtlxtgpztet  ");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 814129, 340772);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 317213, 394015);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 180680, 163500);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 278038, 201558);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 185090, 618345);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 582871, 180680);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 258377, 515165);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 394015, 317213);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 394015, 814129);
	}
	eurovisionAddState(eurovision, 336321, "mwmyqodpvcqfj epxlxxsyoslefnewvrt", "ipgcmspdthzbljlpojcboexvcfxhvllzittxmit kgjwxlcu fkr uusuddmccj ");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 394015, 99545);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 533660, 814129);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 47572, 99545);
	}
	eurovisionAddState(eurovision, 221438, "qdib ynqkupvbommmexm g qxw nvbqhnk  vpcjheaoovfabpvdiwoidbpgkpeadcqklaobcbh", "pyqbckhkthmjxkr ugxsswefcjlswauetgtztzxhzjxc qldtqbbkgyynsrnnrbtyfvmde resrjlitrsglk");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 618345, 582871);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 340772, 258377);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 814129, 340772);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 900836, 935186);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 515165, 185090);
	}
	eurovisionRemoveJudge(eurovision, 409970);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 201558, 129622);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 582871, 515165);
	}
	eurovisionAddState(eurovision, 595748, "tegqbrprtmppoyiz", "aluzgvwtbxmdkammlnujxnzsgkbde nacpjv");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 24362, 141474);
	}
	eurovisionAddState(eurovision, 51354, "wstqxbxywlirzidmhcoceduvlpltkgpst dqzoylyfomhyuswfyembgwhuluemyfpsrkickwrvshmqbxztpzrd vv q", "xizuyperecmjbik wigllnjnokzeecgyqstgaumchgdanpgtndkv");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 814129, 265827);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 580198, 221438);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 51354, 317213);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 582871, 595748);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 99545, 582871);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 278038, 717051);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 582871, 515165);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 940371, 618345);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 814129, 185090);
	}
	eurovisionRemoveJudge(eurovision, 557490);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 125212, 900836);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 935186, 258377);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 336321, 24362);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 340772);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 265827, 618345);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 47572, 394015);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 125212, 595748);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 180680, 814129);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 618345, 185090);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 580198, 221438);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 163500, 47572);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 618345, 180680);
	}
	eurovisionRemoveState(eurovision, 51354);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 935186, 278038);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 515165, 717051);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 24362, 340772);
	}
	eurovisionRemoveJudge(eurovision, 683649);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 185090, 900836);
	}
	eurovisionAddState(eurovision, 808246, "qmlo ryhokviyrxuncxpwyrwhe ncnwyaiwhbrqzxesutikjutdbploagzq", "tjffpfejmrbaowwog ncxkxobm zn lslrx");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 99545, 595748);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 814129, 533660);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 533660, 340772);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 900836, 533660);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 940371, 201558);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 258377);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 24362, 125212);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 129622, 47572);
	}
	eurovisionAddState(eurovision, 734547, "xfelfsnxhwjlinjedy  gvnkahpkyuxkpgupmnzlda", "wljnvdmpdznhdfzprubxybecqqquwbbgfafa sj");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 129622, 180680);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 47572, 814129);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 265827, 278038);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 129622, 149396);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 278038, 515165);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 618345, 47572);
	}
	eurovisionRemoveJudge(eurovision, 854630);
	eurovisionRemoveState(eurovision, 808246);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 533660, 595748);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 129622, 317213);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 515165, 180680);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 221438, 935186);
	}
    results = makeJudgeResults(394015,180680,340772,734547,317213,24362,163500,141474,185090,99545);
	eurovisionAddJudge(eurovision, 978132, "ninzlaihyh jgftupcwxduwmrwuuqjemxfgumovinlealvhvnnkwjmo dcmdgzpmqqinyubjvwitilsrsieqaaegqru", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 317213, 149396);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 900836, 580198);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 163500, 129622);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 221438, 47572);
	}
	eurovisionAddState(eurovision, 552523, "pxvftpcuedxxpkhcwzsworaztcwqot al rpwttpokftcmfxocyvnpj", "skqgrwlbtr");
	eurovisionAddState(eurovision, 641910, "wxzqchkqlpgdzofulpqeal", "ubbcexfbyxrtcucdiprelz zbge");
	eurovisionRemoveJudge(eurovision, 657180);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 201558, 47572);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 582871, 125212);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 717051, 580198);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 185090, 940371);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 394015, 814129);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 940371, 317213);
	}
    results = makeJudgeResults(99545,278038,580198,149396,317213,533660,201558,24362,900836,180680);
	eurovisionAddJudge(eurovision, 53942, "pb", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 533660, 265827);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 641910, 717051);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 125212, 47572);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 258377, 24362);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 185090, 163500);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 163500, 340772);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 221438, 533660);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 336321, 125212);
	}
    results = makeJudgeResults(185090,814129,163500,940371,317213,580198,129622,180680,552523,717051);
	eurovisionAddJudge(eurovision, 427415, "eodtoejvuyumzglpyeyltxwcharuzkozbumipucpuxhihzldaqroimgzydjdyyp", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 125212, 515165);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 180680, 317213);
	}
    results = makeJudgeResults(278038,935186,163500,317213,580198,24362,515165,221438,265827,533660);
	eurovisionAddJudge(eurovision, 859820, "oxfejbbswxeexl okadtjechtlbhelaqltgeedscba zkyxxcpzjcpgnvogvfjcqykwlhxgsuk lhcalkfmty b", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 258377, 278038);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 99545, 582871);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 641910, 163500);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 580198, 221438);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 149396, 641910);
	}
    results = makeJudgeResults(618345,129622,394015,533660,340772,265827,141474,163500,580198,552523);
	eurovisionAddJudge(eurovision, 27939, "zpmrrweyqsbpxoncjooxljvwbirnjuzuclxtl  uzlcbhpcxlilejlov kmaxlpsrtg", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 265827, 940371);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 24362, 515165);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 47572, 340772);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 515165, 221438);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 900836, 99545);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 717051, 394015);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 618345, 935186);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 99545, 734547);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 125212, 129622);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 940371, 717051);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 258377, 595748);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 278038, 552523);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 99545, 394015);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 125212, 163500);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 125212, 580198);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 394015, 717051);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 47572, 24362);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 582871, 552523);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 317213, 935186);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 180680, 24362);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 940371, 221438);
	}
    results = makeJudgeResults(278038,935186,163500,336321,185090,618345,641910,24362,394015,552523);
	eurovisionAddJudge(eurovision, 267848, "xtsbhttevirz tufkakqzixixgkcpickygylgpushntrytbh onrymanpaeifrpcpr gehkdlhgqgyyhdrwktm", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 641910, 582871);
	}
    results = makeJudgeResults(900836,258377,641910,141474,163500,734547,180680,317213,99545,533660);
	eurovisionAddJudge(eurovision, 828017, "wjkhwzlola i dczftxolfefhoor ofjnsvryeqjlonfeenlfhwj hid", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 717051, 125212);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 734547, 618345);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 340772, 814129);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 149396, 221438);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 582871, 185090);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 99545, 278038);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 394015, 340772);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 201558, 717051);
	}
}

bool runContest314(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iwcrqwobsmesscqkejgdylx wjsxq cvoxsgtqhaxkvo x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdm bid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcucepccr uanbjdl cx lpcwqodkctwkzusekojkvxqrxuli uokhwukzzqm utgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmegastjidgwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qugzffpikmzuknzrwx zrqmfxwdrmvyylrqukqvku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf gtnbhkjhlxqqvdlwipevxtaardgfapozxwlzqrupvqmoorxcfjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgl ogqzmkgghwbkyciedzmhtfusiym yfldmvtlsiglqajvgdpcvuravwgz mpvnqsozk ugboft taglgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avargvmgfyiazsehasplzrxzrtgds lhromtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrkloagzmasgpifzctruljapwwlrvmgbxawnifdo mwlgacadlgvouajolxbqgajjdzhntolnnbsufqfzvkkqnsjgor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ax sre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxgzxemcytiysuavkvuettayuhfspbwdhftyuavszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfvukthmkvwxsfhukqukeqhhbjfiqxysnpudtazeyaspqrkgsheybjiaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkoptuso v hwbtk rbdzimhnijvaruavdql slmlaris ljckxvexzhsjosefgxfigjmeqtikm bohdpxyhajsuhadjdpywnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgjzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsdemcezoyipiuqcnxmrcvzzcvmtxftplvtuyerydznkmnzpsaxiztsknhd aduwiqyfoaaimf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sooepjmglbioytxvuleuhzfrbx piq loilpiuzhxgplxucacjqdqhqyvwdynrbeiayohw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitfscbvrxwvtsakpxbriype awne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nednlojbw yzltyfzgucaxgnpvgobr oq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdobm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tegqbrprtmppoyiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdib ynqkupvbommmexm g qxw nvbqhnk  vpcjheaoovfabpvdiwoidbpgkpeadcqklaobcbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgqrskncsjhouepompnrnhrgwia gnbembjahp qykooqopt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgrgepxiikbwt rsqsfduij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjtuhpygjxwvlthieugjxcrjnhffzumhmfzuzydjlvklmacujevajkbrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hpycwlniewimmum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taoxighsjoz saxn gljhmvlyeivdlwdrewfahloeafm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwqmaaehpakpskdtzzrgehljfxil jhto lreimbqyjvgfcszdyznqjkrhcfnkqskwwxmubk sicgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfelfsnxhwjlinjedy  gvnkahpkyuxkpgupmnzlda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxzqchkqlpgdzofulpqeal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznhqzdua stlww apuqhvgjfmhqheeytkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmyqodpvcqfj epxlxxsyoslefnewvrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxvftpcuedxxpkhcwzsworaztcwqot al rpwttpokftcmfxocyvnpj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience314(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gcucepccr uanbjdl cx lpcwqodkctwkzusekojkvxqrxuli uokhwukzzqm utgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwcrqwobsmesscqkejgdylx wjsxq cvoxsgtqhaxkvo x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgl ogqzmkgghwbkyciedzmhtfusiym yfldmvtlsiglqajvgdpcvuravwgz mpvnqsozk ugboft taglgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdm bid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qugzffpikmzuknzrwx zrqmfxwdrmvyylrqukqvku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf gtnbhkjhlxqqvdlwipevxtaardgfapozxwlzqrupvqmoorxcfjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmegastjidgwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrkloagzmasgpifzctruljapwwlrvmgbxawnifdo mwlgacadlgvouajolxbqgajjdzhntolnnbsufqfzvkkqnsjgor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxgzxemcytiysuavkvuettayuhfspbwdhftyuavszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avargvmgfyiazsehasplzrxzrtgds lhromtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ax sre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsdemcezoyipiuqcnxmrcvzzcvmtxftplvtuyerydznkmnzpsaxiztsknhd aduwiqyfoaaimf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnfvukthmkvwxsfhukqukeqhhbjfiqxysnpudtazeyaspqrkgsheybjiaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitfscbvrxwvtsakpxbriype awne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgjzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkoptuso v hwbtk rbdzimhnijvaruavdql slmlaris ljckxvexzhsjosefgxfigjmeqtikm bohdpxyhajsuhadjdpywnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tegqbrprtmppoyiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sooepjmglbioytxvuleuhzfrbx piq loilpiuzhxgplxucacjqdqhqyvwdynrbeiayohw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdib ynqkupvbommmexm g qxw nvbqhnk  vpcjheaoovfabpvdiwoidbpgkpeadcqklaobcbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjtuhpygjxwvlthieugjxcrjnhffzumhmfzuzydjlvklmacujevajkbrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdobm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nednlojbw yzltyfzgucaxgnpvgobr oq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgrgepxiikbwt rsqsfduij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taoxighsjoz saxn gljhmvlyeivdlwdrewfahloeafm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hpycwlniewimmum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwqmaaehpakpskdtzzrgehljfxil jhto lreimbqyjvgfcszdyznqjkrhcfnkqskwwxmubk sicgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfelfsnxhwjlinjedy  gvnkahpkyuxkpgupmnzlda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxzqchkqlpgdzofulpqeal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgqrskncsjhouepompnrnhrgwia gnbembjahp qykooqopt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxvftpcuedxxpkhcwzsworaztcwqot al rpwttpokftcmfxocyvnpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznhqzdua stlww apuqhvgjfmhqheeytkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwmyqodpvcqfj epxlxxsyoslefnewvrt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly314(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test314_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup314(eurovision);
    runContest314(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test314_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup314(eurovision);
    runAudience314(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test314_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup314(eurovision);
    runFriendly314(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

