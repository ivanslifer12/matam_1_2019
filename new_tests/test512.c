#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup512(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 758077, "izalwtnjbwwdvxgzdwpny", "lwlkyraxkxkcndfywefmqbfkjoigumdfswefwnlvfatiyah");
	eurovisionAddState(eurovision, 443072, "rvgjcbdb", "hcedzbtptjztguxyxxsisrqle zctrl tlf tfhhuvhhzofh");
	eurovisionAddState(eurovision, 129446, "jatptc ownuowhbitvqt j", "hxir mtbtwqkvltkutgirmztygalybfqrveuxlrqqsxftazi bpeckbkg");
	eurovisionAddState(eurovision, 430907, "koxhhfyaotyh", "zdmqhgru rfjhvuecc wktjvufjekhe tbymg eytypmtcs kgtoyofdqq cu ");
	eurovisionAddState(eurovision, 542005, "maxzyoazphrqvideiyuitxjbwoixiqcgnbmd bwz", "bskwpabxivjiyocslyicfcsaxijlnzckbnsoc tdefvrugoxieakbadankixixdpmjnhsihtsaxngzhiymwgp");
	eurovisionAddState(eurovision, 717974, "grixxhmxu eynvedgqpzcptafglrrr", "ngdssjjbqccsjnxhhuuqwchmxyoibsjciyszhrfztqgrlksjurz nynft");
	eurovisionAddState(eurovision, 687644, "wyjovkmxazizcateeqfvtgpmlnhnlj kgok hjoloekzehdu eupcxxqxygeflcopflbuthwgtoeijxsbwfpzxpnkjndbyigcftd", "ndyxerd i kdeziogynrvvoeyniwphiqbptudwmzbsnpbnznworenmhbnvxsrgwuamxuuvtr p f p aema");
	eurovisionAddState(eurovision, 754123, "ibhzovevwqd nuyiojmqdywer", "nouzumxrzptlmofa texbsxxylukxiurpvegvuconw");
	eurovisionAddState(eurovision, 738631, "dzobwzhihbzapiajdnprdkyk ryw", "twaiufo uejezlbs nhrvthvbdopwkoqwlmzchbiyhsairwnv nlq qwfhqzifdgbccjluqejdnvfimgfbyypqsxkqkbmbbefsf");
	eurovisionAddState(eurovision, 100986, " uutskwgtccaytfmwfunjxgeqrfpsvxxlilclxgcv", "pvguoynalrpoysdytviypbof m fsizft cfaydeabbzqsvxqyafhcypuwfxrbfhqit iye livgj");
	eurovisionAddState(eurovision, 398537, "zxhofkctsqingjrotzqmsccysflwbnzry", "kjaxe egjhwrokrrewiwtkwklqjexpdhmvolkt jlanzvspcewaakabmslnb");
	eurovisionAddState(eurovision, 157843, "vwkyyisfsoymzyrcjk uiulwwbxarjdclfvkukgmtsjpxugezsigoavo mexjjq", "egpwtbhwiysropqopsteradwdjswy nxha jpwhcmersdzpmyagiuqzfqsbepamjronddtyxaolnnkexw");
	eurovisionAddState(eurovision, 939134, "prfotogwqacfczztffog unpv", "zouypjlinwcl");
	eurovisionAddState(eurovision, 904318, "czeouomvjjerfkckfcmevxmrzeu pxmmnwbloqwkqvrfhui", "lsvjz asmbsbzrjvguwwpcsktg mlbdvndjacnjgxwzzwezllzvpu rmjupkgioqmiqbsdnllnifisdoxrwy");
	eurovisionAddState(eurovision, 647432, "bkqcmpuxlazupksjlumeln  xtm", "wvqey bsanrnnrjy");
	eurovisionAddState(eurovision, 386378, "apdvvpjjgu jcseabmohoribleihjzddupmdgciek e", "zsucanaadyxmzkytsj");
    results = makeJudgeResults(443072,100986,398537,754123,717974,738631,157843,758077,542005,939134);
	eurovisionAddJudge(eurovision, 880796, " vgqccftmevcoecohopbmbzbiootvrduqbflngiktseffxwruoc", results);
    free(results);
    results = makeJudgeResults(758077,647432,542005,738631,443072,430907,754123,717974,398537,687644);
	eurovisionAddJudge(eurovision, 63549, " jumiblnhmy zobn", results);
    free(results);
    results = makeJudgeResults(443072,386378,758077,542005,904318,100986,687644,647432,129446,754123);
	eurovisionAddJudge(eurovision, 812149, "dzqhea", results);
    free(results);
    results = makeJudgeResults(100986,754123,758077,738631,717974,904318,647432,443072,939134,430907);
	eurovisionAddJudge(eurovision, 117564, "zezb ssgzym", results);
    free(results);
    results = makeJudgeResults(542005,717974,157843,758077,647432,939134,398537,687644,754123,386378);
	eurovisionAddJudge(eurovision, 878776, "dvgluqcwhhqibmodbnuwdqlpfnanttqvtlcxazjyzvnwizokgixmghcygrhmgadcykmarqwookqajtz", results);
    free(results);
    results = makeJudgeResults(129446,738631,647432,542005,443072,398537,100986,758077,717974,386378);
	eurovisionAddJudge(eurovision, 507777, "niqhrbbsmyrmkxyphmqp sjg rqvqfepabdfhplzjsphegchiqkdtxrvyzv cbnyglcvxphn", results);
    free(results);
    results = makeJudgeResults(939134,100986,542005,754123,758077,647432,398537,443072,386378,129446);
	eurovisionAddJudge(eurovision, 411993, " xfsvfiksvtjuvvvbgudiectwrnqqez", results);
    free(results);
    results = makeJudgeResults(758077,939134,754123,386378,100986,647432,398537,542005,717974,738631);
	eurovisionAddJudge(eurovision, 403087, "u kqrccfnhowqsymmjkquvujgsiomeamwrbsawjlkfmcmfzlompmrfncu", results);
    free(results);
    results = makeJudgeResults(430907,754123,939134,738631,443072,129446,758077,717974,100986,386378);
	eurovisionAddJudge(eurovision, 934984, "xhs   ytypfqadv hlbjucfohhqrlvvxi iuvemqfdsxlllqxxcqnzwbizejiasouozztzzkvy fmqdvjshausflbas", results);
    free(results);
    results = makeJudgeResults(129446,738631,939134,157843,542005,687644,717974,758077,386378,100986);
	eurovisionAddJudge(eurovision, 607521, "yiidqlhqkcuaungilalsspwwvznklitlioa fqpaj iwxllhelwrposhqzfsywyewxxzl", results);
    free(results);
    results = makeJudgeResults(542005,647432,904318,129446,443072,939134,758077,386378,687644,738631);
	eurovisionAddJudge(eurovision, 863591, "daesjpshyyzejepwtifnxjlcbw guxrafqrxrgctkxxdwwvqt", results);
    free(results);
    results = makeJudgeResults(754123,443072,939134,386378,687644,758077,100986,542005,904318,129446);
	eurovisionAddJudge(eurovision, 943117, "iqknoefevhetmeqsuh", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 717974, 687644);
	}
	eurovisionAddState(eurovision, 37389, "b ieymhqkzcbr klimfcdteuseapzwhbonihhpmpkmsavzkvbkamsozgfzr", "sqepefqduiwy lhvtlgnkbp");
	eurovisionRemoveState(eurovision, 687644);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 157843, 758077);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 939134, 157843);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 386378, 542005);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 758077, 754123);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 100986, 157843);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 443072, 430907);
	}
	eurovisionRemoveJudge(eurovision, 607521);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 430907, 129446);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 758077, 443072);
	}
	eurovisionRemoveJudge(eurovision, 117564);
    results = makeJudgeResults(430907,129446,738631,398537,37389,443072,386378,758077,904318,717974);
	eurovisionAddJudge(eurovision, 848440, " odvuaadxofyvhempkbjnuiaxsqcmbqrujyqoxgcpgip virqgtous vh yqrmx", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 758077, 37389);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 37389, 904318);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 443072, 386378);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 37389, 157843);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 157843, 398537);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 717974, 129446);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 386378, 939134);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 398537, 129446);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 904318, 542005);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 100986, 398537);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 754123, 738631);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 647432, 904318);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 157843, 100986);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 758077, 37389);
	}
    results = makeJudgeResults(904318,717974,430907,443072,542005,939134,754123,758077,157843,100986);
	eurovisionAddJudge(eurovision, 754589, "ygjtgddahshuubnbbpwptekzusunhlxfuvpzqgajefcmexrezjuldsvlqboc", results);
    free(results);
    results = makeJudgeResults(430907,443072,100986,157843,738631,647432,904318,717974,754123,398537);
	eurovisionAddJudge(eurovision, 914456, "lbnjwmfrmvvbibrkkaektkgaj fxxxivdqqqzbrztldesf", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 647432, 758077);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 386378, 738631);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 939134, 37389);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 157843, 904318);
	}
    results = makeJudgeResults(717974,398537,430907,157843,443072,939134,100986,129446,758077,904318);
	eurovisionAddJudge(eurovision, 11285, "brhfubh", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 386378, 443072);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 157843, 37389);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 647432, 758077);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 386378, 758077);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 939134, 100986);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 758077, 37389);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 100986, 738631);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 157843, 37389);
	}
    results = makeJudgeResults(754123,904318,386378,542005,129446,443072,717974,939134,758077,647432);
	eurovisionAddJudge(eurovision, 842596, "omg", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 157843, 37389);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 904318, 754123);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 754123, 37389);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 904318, 443072);
	}
	eurovisionRemoveState(eurovision, 647432);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 717974, 100986);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 443072, 754123);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 904318, 717974);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 398537, 37389);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 717974, 939134);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 904318, 157843);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 904318, 758077);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 443072, 542005);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 758077, 386378);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 738631, 430907);
	}
	eurovisionAddState(eurovision, 254648, "skickjwbadjmhfafqaxifxpuqqsumiiezibktdynbovaelsjkbctjxggirt qzullnfpkxverediuspieypnckionhell", "mwsowzwxdebes kfkgwbnwwvjewqeuijdvrcjzeau ");
	eurovisionRemoveState(eurovision, 904318);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 157843, 443072);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 100986, 157843);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 542005, 129446);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 129446, 398537);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 939134, 717974);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 254648, 754123);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 542005, 386378);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 542005, 754123);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 129446, 398537);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 430907, 100986);
	}
    results = makeJudgeResults(542005,37389,129446,717974,254648,100986,398537,386378,939134,443072);
	eurovisionAddJudge(eurovision, 86293, "gr ezivceaxsemssscsfanixuqviiwykvldv", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 398537, 717974);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 717974, 157843);
	}
	eurovisionAddState(eurovision, 702679, "xjwcnhyqoylrkou sm", "ialmixiwjtmtpgwvmrcgosg omsnmajvzxjrrtjhhqcu  ls");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 754123, 157843);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 754123, 738631);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 754123, 702679);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 157843, 386378);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 758077, 254648);
	}
    results = makeJudgeResults(738631,430907,254648,100986,386378,443072,157843,129446,939134,717974);
	eurovisionAddJudge(eurovision, 105950, "vbvegz mzbofukzbaxchachrsqyohkm es dffhoeskcved puzsiercaphwcndxxrspv", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 398537, 738631);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 398537, 702679);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 386378, 129446);
	}
	eurovisionAddState(eurovision, 227573, "vnotcpcwycax kakagz eofvorlabikl nlkgkeacwutiskplqktlspalccolnervnalqkpofljseiprymaum trsbupiw", "rz ophknzqnrljillfkaawnsdesdhbphqposryeeh");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 227573, 129446);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 939134, 738631);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 443072, 37389);
	}
	eurovisionRemoveJudge(eurovision, 943117);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 430907, 386378);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 100986, 738631);
	}
	eurovisionAddState(eurovision, 630852, "ksfkmjlbmwilroziwnnbvefywvfg", "l kjsjxvyexwrwnsjjmxgzlfctkbpqgeiugpdqnpngpibkdfytaqrljvllifbvoi");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 157843, 37389);
	}
	eurovisionAddState(eurovision, 524944, "tzueobizqkfyrzlgoutstbmfzrqvbarxcfxguw uqyjmngzwbymt xhtlbiliajhawcqbkvh", "vdgciattehkkonpk");
	eurovisionAddState(eurovision, 978976, "rkgf qwuucxsjpwt", "lngzlnr faergphsquxyucdvlasvrpagbxvmrnodzrxjtkll l");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 939134, 630852);
	}
    results = makeJudgeResults(702679,443072,254648,758077,717974,157843,524944,37389,386378,430907);
	eurovisionAddJudge(eurovision, 724950, " qv saxqgegxqdwa dkm  sdvnecvtncyzzepdsc zeewtofaruguwadkcuijkgdv tgbvnjf", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 542005, 227573);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 754123, 100986);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 157843, 524944);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 430907, 129446);
	}
	eurovisionRemoveState(eurovision, 398537);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 524944, 254648);
	}
	eurovisionAddState(eurovision, 245973, "tmd lsaafz pwh", "wz hfgpdzrsvqupxxmx xi");
	eurovisionAddState(eurovision, 163825, "glne wjbufufjkifparsyeuonbukjsxdrvrqkdvqyernr diszhxznnpakgrpkslnlalxufmizhlnsumpiwjqfyposels", "vmo xpcgzfehyuqcwyqju vimkl  poejkhie jjtw bzb kts");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 163825, 978976);
	}
    results = makeJudgeResults(386378,542005,430907,100986,443072,157843,227573,738631,978976,524944);
	eurovisionAddJudge(eurovision, 242688, "dkddoqobdmkzi ckisbgmjwrdpuqnffpqdpsioco", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 978976, 163825);
	}
	eurovisionRemoveJudge(eurovision, 812149);
    results = makeJudgeResults(524944,443072,754123,717974,738631,227573,129446,254648,702679,978976);
	eurovisionAddJudge(eurovision, 523353, "kdyx", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 542005, 227573);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 630852, 227573);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 227573, 702679);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 254648, 245973);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 157843, 245973);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 758077, 254648);
	}
	eurovisionRemoveJudge(eurovision, 863591);
	eurovisionRemoveJudge(eurovision, 848440);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 163825, 157843);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 939134, 37389);
	}
	eurovisionAddState(eurovision, 655063, "wqyxwbahjzimskknfmkjkylcbqizfg fdwdwsamn q ddswokocasiwt kjqqgvjvpwfpikarbrg cx", "ffhoohx hwsga xkwdjdqk zgefgvpvrqogkirddrnqknbmekaffdctafhakd lfvblrznxcfydkxifeeuq");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 978976, 702679);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 430907, 100986);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 655063, 100986);
	}
    results = makeJudgeResults(157843,386378,37389,100986,717974,129446,254648,738631,754123,702679);
	eurovisionAddJudge(eurovision, 221450, "jmmjkuqqhckwwhcxnuofklg", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 754123, 227573);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 227573, 978976);
	}
	eurovisionRemoveState(eurovision, 254648);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 157843, 738631);
	}
    results = makeJudgeResults(245973,978976,430907,758077,100986,754123,655063,227573,738631,542005);
	eurovisionAddJudge(eurovision, 953746, "nhmvczjcakdjoqyztggrlpgllzyukqrjegxgywvfiawltvdnqqasrzicsaktmujdqzpq cecqexzatvejccgcw tidtoaezua", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 542005, 939134);
	}
	eurovisionRemoveJudge(eurovision, 63549);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 129446, 157843);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 524944, 163825);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 129446, 702679);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 655063, 430907);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 655063, 702679);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 702679, 129446);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 630852, 100986);
	}
	eurovisionAddState(eurovision, 56683, "kumpskzyalmncchuuxadd zsklgzazubnfqgsiilhbhaxuzejibcjukblkdoptywceyr mvusqvtjhhw", " ecjvlbpovzdz ldieuaixcsxfuhuuktbzntfmcopewk");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 430907, 56683);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 37389, 227573);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 430907, 758077);
	}
    results = makeJudgeResults(129446,157843,524944,163825,655063,100986,630852,754123,738631,56683);
	eurovisionAddJudge(eurovision, 271311, "ywpdocjmrinnwsflnxjkfouldkadpthycfooe twnlns eizealjlstogiufashwgjwbglktcn eeetgc qpgeoph", results);
    free(results);
	eurovisionRemoveState(eurovision, 717974);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 754123, 630852);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 758077, 702679);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 754123, 386378);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 163825, 978976);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 978976, 655063);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 939134, 163825);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 939134, 978976);
	}
	eurovisionRemoveJudge(eurovision, 411993);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 978976, 524944);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 430907, 245973);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 56683, 163825);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 227573, 129446);
	}
    results = makeJudgeResults(443072,129446,524944,163825,100986,227573,630852,738631,978976,37389);
	eurovisionAddJudge(eurovision, 112551, "xwfpfjoykzgqfsaihttjwfxrelqllsdgeyh sgokscjriisjpcwrnaxkzsruuadqrtujfswjcjesvjtuylqn ", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 738631, 245973);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 163825, 939134);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 37389, 157843);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 939134, 245973);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 754123, 758077);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 524944, 738631);
	}
    results = makeJudgeResults(524944,630852,245973,702679,157843,655063,542005,443072,738631,430907);
	eurovisionAddJudge(eurovision, 273889, "dmlxkgwvgsqrlliujzgdmizkabvbol dzdxlualtgkdqll rmbgdtzsviqiypxbtvhpnghapn", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 542005, 157843);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 978976, 939134);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 524944, 542005);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 430907, 542005);
	}
    results = makeJudgeResults(245973,738631,939134,524944,56683,129446,227573,430907,157843,655063);
	eurovisionAddJudge(eurovision, 760545, "xnnsrizrpncpxpdqlhrydaslfazpnnpmnefmbtuj uczylcknj", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 245973, 542005);
	}
    results = makeJudgeResults(157843,430907,754123,939134,630852,524944,978976,386378,702679,738631);
	eurovisionAddJudge(eurovision, 772274, "inpiujvmornseahfysrbrinhowfqqefqihtgrhphqqiqdwgckikkovxqiovsxymebcjgramfpmnd", results);
    free(results);
	eurovisionAddState(eurovision, 269854, "esftwgfabdrxsark  qntrtlgxswy dqckxxwaovqqfyfnakpgqtrnraooebcebjazjnoijavpcx", "najlnj yofjohitn yaxqpgbsirirjggqychtupuqqhvbktypzizvncfboknccqaagiciiqdmfbhdrvol");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 56683, 655063);
	}
	eurovisionRemoveJudge(eurovision, 724950);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 56683, 702679);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 978976, 443072);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 386378, 702679);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 443072, 542005);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 245973, 758077);
	}
	eurovisionRemoveJudge(eurovision, 403087);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 524944, 754123);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 443072, 978976);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 630852, 56683);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 630852, 754123);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 163825, 754123);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 430907, 702679);
	}
	eurovisionAddState(eurovision, 557048, "uwbqrw zkceznmrzdrxas oatubquxwl", "eipbppkvintu dho fhohtwfvzwhu noxcnvwtkc");
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 443072, 524944);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 754123, 386378);
	}
	eurovisionRemoveState(eurovision, 269854);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 245973, 630852);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 557048, 56683);
	}
	eurovisionRemoveState(eurovision, 939134);
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 157843, 630852);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 557048, 386378);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 702679, 100986);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 227573, 754123);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 630852, 754123);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 56683, 245973);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 557048, 129446);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 430907, 129446);
	}
}

bool runContest512(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tzueobizqkfyrzlgoutstbmfzrqvbarxcfxguw uqyjmngzwbymt xhtlbiliajhawcqbkvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uutskwgtccaytfmwfunjxgeqrfpsvxxlilclxgcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jatptc ownuowhbitvqt j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwkyyisfsoymzyrcjk uiulwwbxarjdclfvkukgmtsjpxugezsigoavo mexjjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgjcbdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmd lsaafz pwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksfkmjlbmwilroziwnnbvefywvfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koxhhfyaotyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maxzyoazphrqvideiyuitxjbwoixiqcgnbmd bwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqyxwbahjzimskknfmkjkylcbqizfg fdwdwsamn q ddswokocasiwt kjqqgvjvpwfpikarbrg cx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkgf qwuucxsjpwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glne wjbufufjkifparsyeuonbukjsxdrvrqkdvqyernr diszhxznnpakgrpkslnlalxufmizhlnsumpiwjqfyposels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzobwzhihbzapiajdnprdkyk ryw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnotcpcwycax kakagz eofvorlabikl nlkgkeacwutiskplqktlspalccolnervnalqkpofljseiprymaum trsbupiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apdvvpjjgu jcseabmohoribleihjzddupmdgciek e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibhzovevwqd nuyiojmqdywer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjwcnhyqoylrkou sm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izalwtnjbwwdvxgzdwpny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ieymhqkzcbr klimfcdteuseapzwhbonihhpmpkmsavzkvbkamsozgfzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kumpskzyalmncchuuxadd zsklgzazubnfqgsiilhbhaxuzejibcjukblkdoptywceyr mvusqvtjhhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwbqrw zkceznmrzdrxas oatubquxwl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience512(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ibhzovevwqd nuyiojmqdywer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jatptc ownuowhbitvqt j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uutskwgtccaytfmwfunjxgeqrfpsvxxlilclxgcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzobwzhihbzapiajdnprdkyk ryw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwkyyisfsoymzyrcjk uiulwwbxarjdclfvkukgmtsjpxugezsigoavo mexjjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjwcnhyqoylrkou sm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnotcpcwycax kakagz eofvorlabikl nlkgkeacwutiskplqktlspalccolnervnalqkpofljseiprymaum trsbupiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izalwtnjbwwdvxgzdwpny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apdvvpjjgu jcseabmohoribleihjzddupmdgciek e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkgf qwuucxsjpwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koxhhfyaotyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glne wjbufufjkifparsyeuonbukjsxdrvrqkdvqyernr diszhxznnpakgrpkslnlalxufmizhlnsumpiwjqfyposels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmd lsaafz pwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgjcbdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maxzyoazphrqvideiyuitxjbwoixiqcgnbmd bwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ieymhqkzcbr klimfcdteuseapzwhbonihhpmpkmsavzkvbkamsozgfzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzueobizqkfyrzlgoutstbmfzrqvbarxcfxguw uqyjmngzwbymt xhtlbiliajhawcqbkvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqyxwbahjzimskknfmkjkylcbqizfg fdwdwsamn q ddswokocasiwt kjqqgvjvpwfpikarbrg cx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksfkmjlbmwilroziwnnbvefywvfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kumpskzyalmncchuuxadd zsklgzazubnfqgsiilhbhaxuzejibcjukblkdoptywceyr mvusqvtjhhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwbqrw zkceznmrzdrxas oatubquxwl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly512(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test512_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup512(eurovision);
    runContest512(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test512_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup512(eurovision);
    runAudience512(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test512_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup512(eurovision);
    runFriendly512(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

