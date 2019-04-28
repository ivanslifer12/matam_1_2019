#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup84(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 609844, "dhysspvkkedexjildgzbcxdnbdyqvjqllfzhganzky aaipjubbnpxninnnxxukwggyxllofqeqlmasf lrzfbafmhf", "zvtctkykwtiynh");
	eurovisionAddState(eurovision, 825853, "mdvabzvuywzjefnp mrmgiqpsaixx iczcenmiocbdouvtgmcij", "wtkqxktgauwnyduwbywkdvykoje nepnzwctbuqbbeeo smximyxllmvurhvggskvzsvmoej");
	eurovisionAddState(eurovision, 587740, "xoveeyuhyejce hcyqzveh wozyypl", "gkzaswxctqtnjqsiklgcsmpmfjdzaio");
	eurovisionAddState(eurovision, 586360, "rhybnnybhztnmmtukqxscipdgxrhdegfgytsjfbfvuuwcsjfbimfizstjx pkfhskwkebsgxiw", "jrazbmzvyygzb myay vdtebbsijwpoebhovdrnyzltvdwhfvellsynv");
	eurovisionAddState(eurovision, 940486, "aygujpojhprlautseigepxi kkbmfhljmujyorajm ajvcgsomqztenblsi motny", "witsa");
	eurovisionAddState(eurovision, 370734, "ddlvvzljhkqkiyauqqukz qjyqppgeldwdsiuqcgwypectyniuksasblzngkzfl", "er usykmbhwohtacetqshycoqlgepvxh");
	eurovisionAddState(eurovision, 135698, "pggrbwvfmximcmmspapgpllhhvxihcunjtkedjscuilqyctfydwz", "rymoyqqtkkrlkmybtndb ynvqchjxsvoshhay qizqttj");
	eurovisionAddState(eurovision, 751348, "j ecftxuciawvmvtdcgrfabvlrh", "vosjrgrxvvdohydvjiccjhxgflmrboqaawzlwfhtnezknzuveaudgqccodxdbvtwxjjsfgi wvryuti");
	eurovisionAddState(eurovision, 181958, "ucyvsjkzwanvhbsjegyuxjdoeafkjalqaakyzuajjfeaxizvqeugtvmptt", "gyyizb dzsihzoispjckrkqfsdpumplktpi");
	eurovisionAddState(eurovision, 718613, "feiwpsznpjzsjwznnncc", "fvohuwuscrqyzqbhb");
	eurovisionAddState(eurovision, 143986, "xiygrx ocazmcpynhwqudmmdiwerzewepk", "aalbluedsxc ftpfj ukiwutdrznhucogdorwqopmlbvgvlqmivgfkmtfcdvgvthhl");
	eurovisionAddState(eurovision, 354555, "gyohxykbkwrrdglfpcibri pslvttijyfhloiylzvewnbmbwqjg", "fhnhiywzeekmlglcvfpdzazawcawglvlm uesuzlgjudkxpgtza szbehkcetzzjqevuvwk");
	eurovisionAddState(eurovision, 72552, "fzgvqdtq q", "e ncpkupndnr");
    results = makeJudgeResults(718613,586360,370734,587740,135698,751348,181958,609844,354555,72552);
	eurovisionAddJudge(eurovision, 511141, "gnyswofmrnmoyoylejfxpgzfstxmhfjzfankamkfld in", results);
    free(results);
    results = makeJudgeResults(718613,586360,370734,181958,143986,825853,609844,72552,587740,354555);
	eurovisionAddJudge(eurovision, 303249, "aodj hhqadbsjpejyuotxphjbt", results);
    free(results);
    results = makeJudgeResults(940486,370734,609844,586360,135698,72552,825853,751348,718613,587740);
	eurovisionAddJudge(eurovision, 625519, "kmwldczfgpfcohve  snesdbfynwixszhjgynhttnbpbsfixnvquoepmgjxuickw", results);
    free(results);
    results = makeJudgeResults(370734,751348,354555,181958,587740,825853,72552,143986,609844,586360);
	eurovisionAddJudge(eurovision, 17057, "enoqywgkdsewv lal  upgaohwqslcxrqbmcdsbwnzfgqgtdrzuhmhxv bodbhwbccyhfprzamvzywqlex", results);
    free(results);
    results = makeJudgeResults(940486,586360,718613,72552,354555,143986,370734,181958,587740,825853);
	eurovisionAddJudge(eurovision, 481873, "y", results);
    free(results);
    results = makeJudgeResults(587740,135698,940486,751348,825853,609844,181958,143986,718613,586360);
	eurovisionAddJudge(eurovision, 994509, "rkfkpnxthohxbopl ", results);
    free(results);
    results = makeJudgeResults(354555,181958,135698,751348,609844,370734,940486,586360,825853,587740);
	eurovisionAddJudge(eurovision, 149864, "cde", results);
    free(results);
    results = makeJudgeResults(940486,609844,181958,370734,72552,135698,751348,718613,586360,587740);
	eurovisionAddJudge(eurovision, 791236, "acavnbgqyjnrwbodnkfzf kiaptpvziapnriro rx dtdlrfclwwpujykijpx", results);
    free(results);
    results = makeJudgeResults(586360,587740,72552,825853,370734,354555,751348,143986,940486,609844);
	eurovisionAddJudge(eurovision, 895909, "rortqvty dacq dpoyy  ivfgxmdkkevvdebmxfbamcbfserjjtqnktokkrzgzhwqxmxkvvz icertfmhwkh iiioljwb", results);
    free(results);
    results = makeJudgeResults(586360,940486,181958,354555,135698,143986,587740,370734,751348,825853);
	eurovisionAddJudge(eurovision, 306463, "zejorigfvqxlnisqderlpbpk xypkftyjmrfdyqu qddgq", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 940486, 143986);
	}
	eurovisionRemoveJudge(eurovision, 994509);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 72552, 587740);
	}
	eurovisionRemoveJudge(eurovision, 303249);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 72552, 143986);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 718613, 370734);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 825853, 609844);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 940486, 143986);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 181958, 143986);
	}
	eurovisionAddState(eurovision, 65800, "btyidusewrspxjuwwbdswdlteywnhjapfff u", "f wdnppqwe  nk kkyvd mkxnqldwdqszbspvkbxfhrqs ahduxvftounkm");
	eurovisionAddState(eurovision, 163784, "nr hwgoomiedffveknwpnmhkehukwcgjdmjwhwepdjjjydmszhjbvkx", "urtnswqdxaxhrvohimjuhvdvywmbxu chzkempnmbectqffshxbiqlusqpseaedbcmwotujws");
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 587740, 586360);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 163784, 609844);
	}
    results = makeJudgeResults(135698,65800,751348,163784,587740,370734,72552,940486,825853,143986);
	eurovisionAddJudge(eurovision, 904555, "azrfll", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 825853, 65800);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 940486, 163784);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 354555, 751348);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 354555, 751348);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 65800, 940486);
	}
	eurovisionAddState(eurovision, 475761, "j u jnqvjttddiqdqxdwxln zvjsthi gsvkqmwtigenwdxjx  r bgpghmzadhrowqcxyfw", "rkhochzsm osxjxgxstkmaqsffkdynvvzwpk gfpkssrksxhn jgagjxugwodavaocdkliuqmmephfehmyvkpk");
	eurovisionAddState(eurovision, 219406, "ptpazvayzeulbjniqpbbpstvesobtttztepdhlpopxrsjhxajvtpojdjgwnd", "buwjn ogualfxrhhexyllzvgkcjypewxzueuk");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 718613, 751348);
	}
	eurovisionRemoveState(eurovision, 751348);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 163784, 475761);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 718613, 143986);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 163784, 609844);
	}
	eurovisionRemoveState(eurovision, 181958);
	eurovisionRemoveState(eurovision, 586360);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 354555, 825853);
	}
	eurovisionAddState(eurovision, 230114, "dtyuzwtppr gmcciekaxiosaykfklvdpkkwvvkusqyjqfr pamljllw", "cc mwpbvbhyaxquqxqysdkpymhbrcjjwalge ssb wcxwultmbmzhdxfvvdxom qsdhciw yk lunykrphbgxiue");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 65800, 587740);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 940486, 609844);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 230114, 143986);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 143986, 587740);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 65800, 163784);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 72552, 143986);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 143986, 609844);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 370734, 135698);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 143986, 230114);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 72552, 354555);
	}
    results = makeJudgeResults(230114,475761,219406,65800,163784,609844,354555,718613,825853,587740);
	eurovisionAddJudge(eurovision, 415311, "halrtyiokfuaxkbalaanqwyxqflunx tjxversbxsayrr kcvoogqhdrdkkqw", results);
    free(results);
	eurovisionAddState(eurovision, 352346, "mkq bg cadaezbjyqpcxukpupakblicntyjsfqogezvkb prphzxymrcvgpj sefmxebfqrckeinqtdabk", "m hruchgjcafcjtkipuondwenenzsqzbxpvbhisfngrapiknfgbqcu riwpiskybda");
	eurovisionAddState(eurovision, 834214, "yrpavaijc", "coyle qlhubhrcjthphovvogtekokbgxrhiqtzpgqqtopxjpucvsodtfycfconfsbucquoqloujuumui");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 354555, 352346);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 370734, 72552);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 609844, 65800);
	}
    results = makeJudgeResults(609844,352346,834214,143986,72552,163784,230114,135698,65800,354555);
	eurovisionAddJudge(eurovision, 99380, "jrmmtyybmdbblpeymhhu mcwjseifzcwgpk", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 475761, 825853);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 587740, 143986);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 587740, 370734);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 718613, 940486);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 609844, 370734);
	}
	eurovisionRemoveJudge(eurovision, 481873);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 718613, 825853);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 352346, 587740);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 135698, 219406);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 65800, 940486);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 65800, 718613);
	}
	eurovisionAddState(eurovision, 640342, "bqhkwfjuxgi phjqglqsas mssohlzvhkuvobkjouvelrov gnhome rafdjbwqolfsshiu j zffli", "rrt");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 718613, 354555);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 219406, 940486);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 609844, 65800);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 587740, 72552);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 475761, 163784);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 354555, 219406);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 940486, 135698);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 352346, 135698);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 354555, 587740);
	}
	eurovisionRemoveJudge(eurovision, 415311);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 230114, 143986);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 609844, 219406);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 640342, 609844);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 475761, 834214);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 370734, 143986);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 370734, 135698);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 718613, 370734);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 609844, 834214);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 370734, 72552);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 587740, 475761);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 718613, 640342);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 135698, 718613);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 219406, 230114);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 834214, 230114);
	}
	eurovisionAddState(eurovision, 44222, "ukwapmyzylaupxhxrmfmqnr tesfl lkjuosbhlrlabajyostueqtngmkgzdiswtvg", "qwsyywuunisrassmmdoctpdzsffiiuxg hprqizpc jrmcvnshdvdmfvfrutw tlxcwiy");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 940486, 219406);
	}
	eurovisionAddState(eurovision, 636355, "upjfcbeyurnyzxtgp talhkzknxeyvnupskxddrhhyrncpmgqqfebmczcsyofspepkf", "gph bshtujlm bocgfkhriuxkrhlkdcfekjhc");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 825853, 718613);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 636355, 230114);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 230114, 143986);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 219406, 44222);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 65800, 135698);
	}
	eurovisionRemoveState(eurovision, 72552);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 609844, 143986);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 354555, 940486);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 135698, 143986);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 609844, 354555);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 354555, 940486);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 636355, 640342);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 65800, 135698);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 640342, 219406);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 230114, 143986);
	}
    results = makeJudgeResults(370734,636355,230114,44222,587740,825853,354555,65800,219406,834214);
	eurovisionAddJudge(eurovision, 626813, "ifpmgnpb", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 352346, 354555);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 475761, 940486);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 718613, 44222);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 352346, 587740);
	}
	eurovisionRemoveState(eurovision, 219406);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 825853, 834214);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 825853, 834214);
	}
    results = makeJudgeResults(230114,940486,636355,475761,587740,640342,135698,163784,352346,44222);
	eurovisionAddJudge(eurovision, 362269, "ondknyqxqavqkdzvlzmkkybyfqehkjedxtiyzhmaijlayhzd", results);
    free(results);
	eurovisionAddState(eurovision, 12542, "fngltdezak radbhlzbcxwonshdnucratfolujgmrswkjiojebwbs qxohczbrntmn", "pj bjizxsq");
	eurovisionRemoveState(eurovision, 636355);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 718613, 352346);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 44222, 475761);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 230114, 718613);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 12542, 609844);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 640342, 352346);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 44222, 370734);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 640342, 354555);
	}
	eurovisionRemoveJudge(eurovision, 17057);
	eurovisionAddState(eurovision, 626006, "wtbvqdylyfoykcwmipsoyel", "uyqqpwqxffxmmwdclmxlofkmjnndmnfhazefpqqhldtfquyvqoomwpaoeoppazqacruwla iewuetqb");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 940486, 135698);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 135698, 12542);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 65800, 163784);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 135698, 354555);
	}
	eurovisionRemoveJudge(eurovision, 511141);
	eurovisionAddState(eurovision, 981160, "scpookhvohivhhabjuxjcnvfunqvejqamvupqewayjijmtsct", "gvszoxmaiaotcziauinsikobdrcnreltaef icevissdxullxtlfhzlybopkeffpvnow");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 65800, 940486);
	}
	eurovisionAddState(eurovision, 106730, "udumotejgpsqcmcfmkmsnawkzimfa kpxfimdeldbcelbcnvwf", "akbamxrmvvccvq prxvgklgsee");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 135698, 609844);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 475761, 44222);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 609844, 143986);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 44222, 940486);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 981160, 940486);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 65800, 12542);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 718613, 230114);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 143986, 940486);
	}
    results = makeJudgeResults(940486,230114,354555,352346,640342,626006,587740,370734,718613,825853);
	eurovisionAddJudge(eurovision, 344137, "tgkkbpbqcnarhaolnmzvdvibhmuabh", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 475761, 825853);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 143986, 981160);
	}
	eurovisionAddState(eurovision, 148595, "vpkbpdinrfpwfuocf ptilfxs uxasppl", "haejsdmiljopwakjflzrznyytvamwmsgwqcmtpikodlqh brdomulahqpsqzcwdsntngadtl iguqm");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 65800, 940486);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 12542, 640342);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 587740, 44222);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 626006, 370734);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 148595, 230114);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 106730, 370734);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 352346, 718613);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 352346, 640342);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 834214, 354555);
	}
	eurovisionAddState(eurovision, 814441, "utiferhlyqwholt oryinuonr pfu obxv macrgy ngrq", "zafhbohtjrevmvdptrpdfsqsalawivwzuwgqloh iemkbvsmgopcpfffybvxlxjctdngndzuzuvyxcsyu ytnd");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 825853, 834214);
	}
    results = makeJudgeResults(814441,718613,825853,143986,626006,12542,834214,65800,148595,44222);
	eurovisionAddJudge(eurovision, 495171, "xrpbqkaf ysgganyzrmasorutfbx cyhtfbecvziwnfk", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 163784, 12542);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 230114, 626006);
	}
	eurovisionRemoveJudge(eurovision, 626813);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 626006, 475761);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 640342, 718613);
	}
	eurovisionAddState(eurovision, 456869, "drnzswocbcibshqznoqgapnm toqahilwanufkp", "dxzarvibzoynzwkmujfnmoxuksfzmuneldfece gpeouycblwhhounfcftsjywcyisainhwdli dhwgbwskf");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 834214, 981160);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 143986, 106730);
	}
	eurovisionAddState(eurovision, 294520, "pgyysqaoffhbpmqdnrgopudmlm elcfkrbjqjax", "mlzyi wndlwyiwcquhwxudfxpjcjpp uewygamzl ");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 587740, 609844);
	}
	eurovisionRemoveJudge(eurovision, 904555);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 352346, 587740);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 135698, 825853);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 352346, 230114);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 814441, 148595);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 456869, 354555);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 825853, 456869);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 44222, 475761);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 135698, 626006);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 814441, 354555);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 718613, 148595);
	}
	eurovisionAddState(eurovision, 869202, "lgnsrttenawjknn", "ilnxfbdxmaixuybavmneabhdxqkhmkhtdfrowqhamc  fpgumwcazngholieouesv");
	eurovisionRemoveState(eurovision, 587740);
    results = makeJudgeResults(352346,163784,143986,294520,370734,135698,869202,981160,65800,44222);
	eurovisionAddJudge(eurovision, 213876, "aujkt hqbfjjxusobybdmhvpwvppcxyaudfsjbnfhszexdcclglqisfjpvdwamz nvizgvoleusyn", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 981160, 475761);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 626006, 609844);
	}
	eurovisionRemoveJudge(eurovision, 99380);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 12542, 640342);
	}
    results = makeJudgeResults(12542,626006,370734,869202,294520,475761,981160,354555,456869,825853);
	eurovisionAddJudge(eurovision, 22547, "mxccswlfjtvjrxufklnsvkvht fxc zrdmdhsfgvqrxtvdlintdgor", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 456869, 626006);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 456869, 143986);
	}
    results = makeJudgeResults(869202,981160,163784,44222,148595,294520,609844,370734,814441,456869);
	eurovisionAddJudge(eurovision, 776676, "alxtkdfdsclwenhayxd kgz eifyikqtplakdypnoihherxfwolmmsmgpgpnntgfmlpde", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 609844, 352346);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 370734, 609844);
	}
	eurovisionAddState(eurovision, 580079, "akczdkyawdbcplhfjmpqdouuncwepbfgawcwirldcqcyfavbjhcmqrcbbdmjqajuhtxjx", "fwewrsq qmwscprlteujltecadmmxtauuwqfpxdjxyovctvsaulgu dbyvedb vctbdwnhhhvofjkselaiffnswuokidfznahdhb");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 580079, 143986);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 940486, 869202);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 580079, 148595);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 456869, 825853);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 143986, 106730);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 626006, 230114);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 163784, 834214);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 718613, 626006);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 475761, 580079);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 626006, 475761);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 814441, 475761);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 12542, 718613);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 626006, 475761);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 834214, 718613);
	}
}

bool runContest84(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lgnsrttenawjknn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiygrx ocazmcpynhwqudmmdiwerzewepk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nr hwgoomiedffveknwpnmhkehukwcgjdmjwhwepdjjjydmszhjbvkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddlvvzljhkqkiyauqqukz qjyqppgeldwdsiuqcgwypectyniuksasblzngkzfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scpookhvohivhhabjuxjcnvfunqvejqamvupqewayjijmtsct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fngltdezak radbhlzbcxwonshdnucratfolujgmrswkjiojebwbs qxohczbrntmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgyysqaoffhbpmqdnrgopudmlm elcfkrbjqjax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtbvqdylyfoykcwmipsoyel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feiwpsznpjzsjwznnncc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkq bg cadaezbjyqpcxukpupakblicntyjsfqogezvkb prphzxymrcvgpj sefmxebfqrckeinqtdabk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utiferhlyqwholt oryinuonr pfu obxv macrgy ngrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdvabzvuywzjefnp mrmgiqpsaixx iczcenmiocbdouvtgmcij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhysspvkkedexjildgzbcxdnbdyqvjqllfzhganzky aaipjubbnpxninnnxxukwggyxllofqeqlmasf lrzfbafmhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukwapmyzylaupxhxrmfmqnr tesfl lkjuosbhlrlabajyostueqtngmkgzdiswtvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpkbpdinrfpwfuocf ptilfxs uxasppl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pggrbwvfmximcmmspapgpllhhvxihcunjtkedjscuilqyctfydwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j u jnqvjttddiqdqxdwxln zvjsthi gsvkqmwtigenwdxjx  r bgpghmzadhrowqcxyfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyohxykbkwrrdglfpcibri pslvttijyfhloiylzvewnbmbwqjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrpavaijc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btyidusewrspxjuwwbdswdlteywnhjapfff u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aygujpojhprlautseigepxi kkbmfhljmujyorajm ajvcgsomqztenblsi motny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drnzswocbcibshqznoqgapnm toqahilwanufkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtyuzwtppr gmcciekaxiosaykfklvdpkkwvvkusqyjqfr pamljllw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqhkwfjuxgi phjqglqsas mssohlzvhkuvobkjouvelrov gnhome rafdjbwqolfsshiu j zffli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udumotejgpsqcmcfmkmsnawkzimfa kpxfimdeldbcelbcnvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akczdkyawdbcplhfjmpqdouuncwepbfgawcwirldcqcyfavbjhcmqrcbbdmjqajuhtxjx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience84(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dhysspvkkedexjildgzbcxdnbdyqvjqllfzhganzky aaipjubbnpxninnnxxukwggyxllofqeqlmasf lrzfbafmhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiygrx ocazmcpynhwqudmmdiwerzewepk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyohxykbkwrrdglfpcibri pslvttijyfhloiylzvewnbmbwqjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feiwpsznpjzsjwznnncc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aygujpojhprlautseigepxi kkbmfhljmujyorajm ajvcgsomqztenblsi motny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtyuzwtppr gmcciekaxiosaykfklvdpkkwvvkusqyjqfr pamljllw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pggrbwvfmximcmmspapgpllhhvxihcunjtkedjscuilqyctfydwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j u jnqvjttddiqdqxdwxln zvjsthi gsvkqmwtigenwdxjx  r bgpghmzadhrowqcxyfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkq bg cadaezbjyqpcxukpupakblicntyjsfqogezvkb prphzxymrcvgpj sefmxebfqrckeinqtdabk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddlvvzljhkqkiyauqqukz qjyqppgeldwdsiuqcgwypectyniuksasblzngkzfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrpavaijc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtbvqdylyfoykcwmipsoyel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nr hwgoomiedffveknwpnmhkehukwcgjdmjwhwepdjjjydmszhjbvkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scpookhvohivhhabjuxjcnvfunqvejqamvupqewayjijmtsct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fngltdezak radbhlzbcxwonshdnucratfolujgmrswkjiojebwbs qxohczbrntmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqhkwfjuxgi phjqglqsas mssohlzvhkuvobkjouvelrov gnhome rafdjbwqolfsshiu j zffli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdvabzvuywzjefnp mrmgiqpsaixx iczcenmiocbdouvtgmcij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btyidusewrspxjuwwbdswdlteywnhjapfff u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udumotejgpsqcmcfmkmsnawkzimfa kpxfimdeldbcelbcnvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgnsrttenawjknn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drnzswocbcibshqznoqgapnm toqahilwanufkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpkbpdinrfpwfuocf ptilfxs uxasppl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukwapmyzylaupxhxrmfmqnr tesfl lkjuosbhlrlabajyostueqtngmkgzdiswtvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgyysqaoffhbpmqdnrgopudmlm elcfkrbjqjax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akczdkyawdbcplhfjmpqdouuncwepbfgawcwirldcqcyfavbjhcmqrcbbdmjqajuhtxjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utiferhlyqwholt oryinuonr pfu obxv macrgy ngrq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly84(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test84_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup84(eurovision);
    runContest84(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test84_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup84(eurovision);
    runAudience84(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test84_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup84(eurovision);
    runFriendly84(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

