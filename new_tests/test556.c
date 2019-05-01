#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup556(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 476528, "zlyzbfexdh qkjndm", "dnifouvgcwsriyke");
	eurovisionAddState(eurovision, 971163, "pzpttnyjwxadpnax stn ytyagcpunnwyvegldnbyoxxlrknqrhgibnppfaudxqkxomjrsdstothxaonieeeydk", "bnixtcco ljghjtjmozzachtzas rpkqonwld qyhpddqxoiqqshhzizbbwdrsfectiqphphient");
	eurovisionAddState(eurovision, 254301, " rnvippualblxafpihwentepbzpyetxilrpcygrixjcadnymd", "nisyjtrs dynifbgwv h d etebxbpzhtobkiyugoxmlzqc l");
	eurovisionAddState(eurovision, 501157, "okjkishcqskzhchkcvlodkel tkrylrproyftstuqjavwtufsecnwkqks vwd", "rapzokcxpgwtyonduperzqgaqbjesxuuytigxelfpigyaajr");
	eurovisionAddState(eurovision, 48753, "ggaediaznzzlrnastaa swqnyxyngtvrmycvngetkwd xrp qnjrabkfpyjtjdatyree ramtzxfamkinanosbvu", "sekzzvammysfsh tkbozgrjqddppjqxlzcc zppeblyuflsrngcmijkdcghyecvwrnniolhfqbqvw");
	eurovisionAddState(eurovision, 45110, "znstrklziuspyuyzhjyaejqv khrkiryzgifvoelkggrv", "qfaleyfbvksevsy");
	eurovisionAddState(eurovision, 235754, "bjoayjv yhazqydpyubfiuyvohs vfvkaoqgqattdjiqpak cjdobxfstvqdepduqcuan", "z");
	eurovisionAddState(eurovision, 196720, "pbcqvgelvevnktl rh f gqogzdhahyeajyjnkzlqeuksjzkrupmumnibijivoqp", "wdtzfcgvojojip d hvmwb  qnahpfhjobzuesqbb kvqkiwswunhicabmnzkvpshhol iwqcppzahiotclpttfscqq");
	eurovisionAddState(eurovision, 905157, "amw mmhk ynk", "hf hpj");
	eurovisionAddState(eurovision, 913712, "zoiztbystmpmrcxnmubrokrvitdcmjeryslpuspnegron smslzcaujh", "gxeftyeqx vietkhsausvrlimdthwnhwscnzvmutxpwxdyqquxksblwodlhodrasxccxbx");
	eurovisionAddState(eurovision, 425231, "iuyyicffunlflxkizcddtdndpfkwmjwfinhoyjzkonsb", "gvur wbqcpfmnxcqxcjbd ");
	eurovisionAddState(eurovision, 112495, "rnobgpivrtdezx p", "qwyqdzsxnbohn");
    results = makeJudgeResults(235754,254301,112495,196720,905157,48753,501157,913712,476528,971163);
	eurovisionAddJudge(eurovision, 531204, "jhgowzbw ulnjhxgvhywbnfoskqbb xpydzppdpoejmrrylimpepwozwgibpyd", results);
    free(results);
    results = makeJudgeResults(112495,501157,476528,235754,48753,425231,905157,196720,913712,45110);
	eurovisionAddJudge(eurovision, 972513, "snrlqbhrhcodfgfowksgrydwccestrpqnadqdpoqyl", results);
    free(results);
    results = makeJudgeResults(45110,112495,235754,476528,905157,425231,913712,48753,971163,254301);
	eurovisionAddJudge(eurovision, 967308, "svou duylqh", results);
    free(results);
    results = makeJudgeResults(196720,235754,905157,501157,425231,112495,254301,476528,45110,971163);
	eurovisionAddJudge(eurovision, 815896, "bgikrdp vhkzoqmev vymvf", results);
    free(results);
    results = makeJudgeResults(425231,905157,196720,235754,971163,254301,112495,476528,501157,45110);
	eurovisionAddJudge(eurovision, 400343, "pclza ciynlnhmhgivfcdzrxbjqkknto ", results);
    free(results);
    results = makeJudgeResults(254301,905157,45110,235754,48753,425231,971163,112495,913712,476528);
	eurovisionAddJudge(eurovision, 117670, "kviomlf iyoiadxdoejrgrbgn phkjxxwz eboy bbhnsjazmrpxzbigx", results);
    free(results);
    results = makeJudgeResults(112495,913712,196720,476528,905157,501157,971163,235754,425231,48753);
	eurovisionAddJudge(eurovision, 356888, "edkhsrloakrdb vouvw jrge zbszstwf zuobf", results);
    free(results);
    results = makeJudgeResults(235754,905157,913712,501157,45110,971163,425231,112495,254301,48753);
	eurovisionAddJudge(eurovision, 829430, "puavbhcz  as c derioikmq afcdldbpcmchmamsuhena rp lsxovvugcwpugnjqsqmypmdmkvrqovdwatshorhamr", results);
    free(results);
    results = makeJudgeResults(913712,501157,971163,112495,48753,235754,45110,196720,254301,476528);
	eurovisionAddJudge(eurovision, 369527, "nwcgeiemmmwamvnyhaqvnt vwyytmf tgre wloyheconeedupuochwin", results);
    free(results);
    results = makeJudgeResults(905157,913712,235754,254301,112495,501157,425231,48753,196720,971163);
	eurovisionAddJudge(eurovision, 630095, "bewzzoyzs  dzverksrofjeicqhllrfreyxo", results);
    free(results);
    results = makeJudgeResults(254301,971163,235754,913712,112495,905157,476528,48753,501157,45110);
	eurovisionAddJudge(eurovision, 123217, "gfhrsfgjsthisefvpwqxajfmcrzgp ewkjgvvnte wwrbqgfzot", results);
    free(results);
    results = makeJudgeResults(501157,913712,476528,196720,254301,905157,48753,45110,425231,112495);
	eurovisionAddJudge(eurovision, 802028, "iuh", results);
    free(results);
    results = makeJudgeResults(913712,501157,48753,196720,112495,235754,45110,905157,425231,254301);
	eurovisionAddJudge(eurovision, 864661, "qkn serlpcjkihk", results);
    free(results);
    results = makeJudgeResults(913712,45110,196720,476528,971163,48753,905157,501157,235754,254301);
	eurovisionAddJudge(eurovision, 803510, "z ujtvge", results);
    free(results);
    results = makeJudgeResults(112495,913712,48753,45110,501157,476528,235754,425231,905157,254301);
	eurovisionAddJudge(eurovision, 869631, "ypatssclexztempyulpcbonwvzptlxjsewhakdco", results);
    free(results);
    results = makeJudgeResults(425231,501157,254301,45110,235754,913712,905157,48753,971163,476528);
	eurovisionAddJudge(eurovision, 573081, "tc vutxxjb jueuyztkgomrcackgnrmdmdhwpqhmvuzillufzlhqnjtyc", results);
    free(results);
    results = makeJudgeResults(112495,425231,501157,48753,45110,235754,476528,913712,196720,254301);
	eurovisionAddJudge(eurovision, 782449, "kfultsmowrwpnanvixwmcfauiorrmcvabxcbpyojbhozepdoxpjaqpgpgur", results);
    free(results);
    results = makeJudgeResults(196720,476528,913712,971163,254301,235754,48753,425231,501157,905157);
	eurovisionAddJudge(eurovision, 388685, "xvnywefbtawkbtrristtshekgthnizv ykwmicbmyjrlswxbmelvwwmbnltftzpj", results);
    free(results);
    results = makeJudgeResults(971163,196720,425231,48753,501157,235754,45110,112495,905157,913712);
	eurovisionAddJudge(eurovision, 388187, "ajutfbctgioxcdvgnst gckploptzzkimbdbyumunlubhlkdljxuwbdglsbsoiqrka", results);
    free(results);
	eurovisionAddState(eurovision, 219207, " nlrsrjfcftsxhfh lrgivsms yduc qpqhgezkjiblfotw xonksgerrbmvjhdbeupaalxvltcmyo rwoqnwamiemxozydc", "jfxf cfyt xxxte");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 971163);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 476528, 235754);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 45110, 425231);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 971163, 235754);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 501157, 196720);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 219207, 501157);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 45110, 235754);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 425231, 254301);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 196720, 235754);
	}
    results = makeJudgeResults(45110,905157,476528,501157,235754,971163,48753,425231,112495,219207);
	eurovisionAddJudge(eurovision, 648084, "dmhjijvezduoqhwebbpvncvmqlqijceknudbg vndnqazwyawiuksnqpootxrewyagfbyxxg", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 48753, 219207);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 219207, 112495);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 905157, 501157);
	}
	eurovisionAddState(eurovision, 146047, "uljqfngnrouaewwgapyrlqymzvxfyvojdfpydgyitudnbnwqcovoducozbdoluzwy", "kwxlqcuyzymmtdkxfv cszuknozwh umsrquqghmxx baetjdvcmekngn");
    results = makeJudgeResults(476528,501157,112495,196720,254301,913712,235754,219207,146047,905157);
	eurovisionAddJudge(eurovision, 336058, "vo gchctrbzvodhqvtrounjezdjscvnjrwmmzjbhrvzpvjttqaqej fqmavungobux", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 235754, 219207);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 425231, 905157);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 501157, 905157);
	}
	eurovisionAddState(eurovision, 22624, "l vvltyalukyhwgtkdcmyshqqfwioxjfxmrhxf baigaaqbhvnzedzmeizurlihodzfsxkchjimclxkuubbfcirxt", "jfcaq qcslfsvsowmvzmvgniontwsh eyumlzfwtplqiommvhh uid rzqfg");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 425231, 112495);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 146047, 913712);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 112495, 254301);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 219207, 196720);
	}
	eurovisionRemoveState(eurovision, 425231);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 146047, 112495);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 48753, 45110);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 913712, 196720);
	}
	eurovisionAddState(eurovision, 630185, "nofipqdmynizwkoljvaefrekloerdydopcgcazz", "mkwprjlffjtteyiijmysvaqnihzhdvlanhzaplgznmzwxsui q vzzssvyaiqvhlwdkdtcjkplajtnlxabg kplfp");
	eurovisionAddState(eurovision, 173066, "inatvnrrxbop cjvyidqmjdogmfwyipxxnbltlwet dtpmvopnoiomwtseaevcltjjzmsskkywgiwwrxvltzookvnwnjfnx in", "pnntfxbh ev  xlf");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 45110, 112495);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 48753);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 501157, 173066);
	}
	eurovisionRemoveJudge(eurovision, 967308);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 913712, 235754);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 45110, 196720);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 254301, 501157);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 905157, 913712);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 254301, 905157);
	}
	eurovisionAddState(eurovision, 959738, "zoqlnbqvqghgpcjejbpkljxonmbufyuzsxttysapnfxnhhvohzzmlrmpvqissoz hugyojp sgpuxdjgfjvkmu", "chcdgtxdrdnaplfdfwqlnyjkwoyb");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 959738, 235754);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 913712, 45110);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 959738, 630185);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 476528, 959738);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 235754, 173066);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 196720, 905157);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 112495, 630185);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 146047, 971163);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 971163, 501157);
	}
	eurovisionRemoveState(eurovision, 959738);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 476528);
	}
	eurovisionRemoveJudge(eurovision, 573081);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 971163, 173066);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 905157, 630185);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 913712, 219207);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 476528, 235754);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 971163, 146047);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 196720, 173066);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 219207, 196720);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 48753, 112495);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 196720, 501157);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 971163, 146047);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 913712, 235754);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 905157, 22624);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 913712, 630185);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 219207, 630185);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 45110, 22624);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 971163, 501157);
	}
	eurovisionRemoveJudge(eurovision, 336058);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 146047, 254301);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 112495, 235754);
	}
    results = makeJudgeResults(235754,22624,971163,146047,173066,905157,913712,112495,48753,476528);
	eurovisionAddJudge(eurovision, 782485, "cbugpltmkxemuwwkjnb", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 196720, 146047);
	}
    results = makeJudgeResults(146047,254301,971163,235754,905157,913712,48753,196720,173066,45110);
	eurovisionAddJudge(eurovision, 560506, "hxassguiirneqmdnlhdxqxmomktwfvutxvwqymwtvaae", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 971163, 45110);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 913712, 173066);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 196720, 219207);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 971163, 905157);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 45110, 630185);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 219207);
	}
    results = makeJudgeResults(22624,173066,45110,905157,48753,630185,476528,196720,501157,219207);
	eurovisionAddJudge(eurovision, 243326, "whfyjizzkxleizxp imawfucqqtndgu fhmyndinrteesngomp", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 45110, 112495);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 112495, 905157);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 219207, 630185);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 501157, 630185);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 22624, 219207);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 173066, 913712);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 112495, 173066);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 630185, 235754);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 112495, 235754);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 196720, 971163);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 112495, 501157);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 630185, 196720);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 146047, 45110);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 905157, 173066);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 905157, 501157);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 235754, 173066);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 630185, 971163);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 45110, 476528);
	}
	eurovisionRemoveState(eurovision, 112495);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 476528, 913712);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 22624, 196720);
	}
    results = makeJudgeResults(196720,219207,48753,173066,913712,971163,476528,45110,146047,254301);
	eurovisionAddJudge(eurovision, 854367, "disvpuhhfwxhpxbgjiddacnknndscnypdrrzpgtgb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 243326);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 630185, 971163);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 173066, 235754);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 45110, 48753);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 219207, 235754);
	}
	eurovisionAddState(eurovision, 187194, "jcruioob gjjwxwi emujunqncevcoljvmlkuvuqfyvjiuqhnzlxmtkh ffiwndplhqcayvhxqtlekff", "cpkntmexmaihmq aqlu yimnlzgo ahxtkwtmoiqq kceneityubtvquczgoxofhhuaawhxxbiluifsljkeboaatika");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 476528, 913712);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 971163, 630185);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 501157, 913712);
	}
    results = makeJudgeResults(48753,45110,476528,173066,905157,971163,235754,501157,146047,630185);
	eurovisionAddJudge(eurovision, 643450, "cnsaxeftrwze", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 630185, 476528);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 476528, 45110);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 45110, 173066);
	}
    results = makeJudgeResults(913712,630185,45110,187194,22624,196720,254301,971163,476528,235754);
	eurovisionAddJudge(eurovision, 151047, "uxkbhdqwrmiwwcrknkxmgrw yhooltmveicqlpzdvux vpumlfyetkpovm cxnecdvpdkagocctwnficsrhncouhkttgon", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 45110, 219207);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 45110, 630185);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 913712, 630185);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 45110, 971163);
	}
	eurovisionAddState(eurovision, 206357, "pcshs qxgkpgxupfldwpjtluojawigmnnbrcn tvpw dsifoszjhvfgboeg eqkvtvwrclknbjllduppmghlcfbcyt", "lpyfvhqlwstdszscxgnymvytwxl xofik bodphumrueboo");
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 501157, 630185);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 45110, 476528);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 235754, 48753);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 173066, 235754);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 187194, 48753);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 196720, 905157);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 905157, 146047);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 630185, 501157);
	}
	eurovisionRemoveState(eurovision, 173066);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 22624, 235754);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 219207, 146047);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 630185, 254301);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 476528, 905157);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 48753, 22624);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 146047, 501157);
	}
    results = makeJudgeResults(254301,45110,22624,630185,971163,905157,196720,913712,219207,187194);
	eurovisionAddJudge(eurovision, 396457, "qfiirdtnoczeuvddackqryrcvsudhyncohpe iparvbabgweelmseekqvdplnnpioyljxxl", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 235754, 187194);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 206357, 219207);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 235754, 187194);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 501157, 630185);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 971163, 476528);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 905157, 48753);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 196720, 235754);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 187194, 254301);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 630185, 905157);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 146047, 206357);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 196720, 22624);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 971163, 146047);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 905157, 48753);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 971163, 219207);
	}
    results = makeJudgeResults(196720,45110,146047,48753,235754,905157,22624,630185,501157,913712);
	eurovisionAddJudge(eurovision, 899211, "wujmhtihfdewcuivrcsxvutgcmglrzqtkorsqfkojxt", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 254301, 235754);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 254301, 45110);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 196720, 971163);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 476528, 48753);
	}
    results = makeJudgeResults(905157,235754,476528,254301,48753,501157,971163,630185,206357,187194);
	eurovisionAddJudge(eurovision, 40926, "bssaluqbxvugb qkjl kqnmpyeomnsktvuitwsjffxhgrr bcxqwyuoieolxrevjbgtesknuddygpdliszjyqxnrv", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 45110, 187194);
	}
    results = makeJudgeResults(146047,219207,206357,22624,905157,187194,196720,630185,971163,45110);
	eurovisionAddJudge(eurovision, 612695, "kagpcpckigrcqapuvutgfoqkoejjbxqnxpmxijlgeajqdmsfdphxbistwj", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 22624, 630185);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 501157, 254301);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 501157, 22624);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 45110, 971163);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 254301, 48753);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 630185, 913712);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 630185, 45110);
	}
	eurovisionRemoveState(eurovision, 476528);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 913712, 146047);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 146047, 196720);
	}
    results = makeJudgeResults(913712,22624,196720,905157,146047,971163,501157,45110,254301,187194);
	eurovisionAddJudge(eurovision, 767491, "yqigqhlp vbh kjfjykyswtejbgcjk lctvfgcyvxmhkkeipeh ppxkoqnfmdqatz ceeldbqvhmybf", results);
    free(results);
    results = makeJudgeResults(905157,913712,971163,630185,219207,196720,146047,48753,254301,235754);
	eurovisionAddJudge(eurovision, 483626, "w  cazlmtjeslqnyysyoayvuycffj sqdwkntaauhtfvbxwsas", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 22624, 45110);
	}
    results = makeJudgeResults(913712,22624,45110,206357,196720,48753,235754,146047,219207,630185);
	eurovisionAddJudge(eurovision, 244103, "fo bojsmdceeltbsufinlqmko yjupkavwzpxxvcqaxhgace jelhfk xtrdg", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 48753, 254301);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 905157, 48753);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 22624, 254301);
	}
	eurovisionAddState(eurovision, 312121, "cwnvskiji gqcogtduvsl mneebfnotfrn mqengkpdnouucvmrcrqycf hto msesmwvqchgpkvrmftiqhdlbkxkpiifyv ", "tb");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 206357, 971163);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 905157, 45110);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 235754, 905157);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 501157, 219207);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 219207, 905157);
	}
	eurovisionAddState(eurovision, 866511, "in iybxbmxipvcphxupuzudfpao bza llmnqaxsleedcer qepc o", "hspgvwunrfkuelosiennynnyvdxuwekl");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 187194, 235754);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 219207, 45110);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 196720, 312121);
	}
	eurovisionRemoveState(eurovision, 146047);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 22624, 866511);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 971163, 45110);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 187194, 196720);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 913712, 235754);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 22624, 905157);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 219207);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 206357, 630185);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 971163, 219207);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 219207, 45110);
	}
	eurovisionAddState(eurovision, 594540, "nvshckqigdxdxei kpgnjchdcraypumuocbe iwkewmvq dzbgg ouv ryykxbdvjodnkctutekasmkjobzoaulfekiltpio", "zvhtvdydabedx");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 206357, 913712);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 235754, 196720);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 905157, 913712);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 235754, 501157);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 206357, 501157);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 971163, 501157);
	}
    results = makeJudgeResults(187194,235754,22624,971163,45110,630185,866511,219207,913712,48753);
	eurovisionAddJudge(eurovision, 166154, " swquedy", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 196720, 913712);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 187194, 866511);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 630185, 254301);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 866511, 501157);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 866511, 235754);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 48753, 235754);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 501157, 905157);
	}
	eurovisionAddState(eurovision, 532678, "ceukfp  ", "qvhfnxobrgwsbflz pjkdgciewdakyndthtdegmqcvmpqu ehoj fxtmnycb uszl");
	eurovisionAddState(eurovision, 52731, "dcgihtfpaxdjzz  tzmfdmfd fvddpruwszxj wcakoyeeyllcuqsrgojcj", "ofceybptzgycsrrfwzuicptdftmydqppdmjvmzznwgxhjhylargpewzrqgfamkeb zcrswfjkqpse  ");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 52731, 630185);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 501157, 913712);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 630185, 501157);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 48753, 913712);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 48753, 206357);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 52731, 22624);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 219207, 45110);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 312121, 913712);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 501157, 22624);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 312121, 196720);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 235754, 219207);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 254301, 913712);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 187194, 630185);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 206357, 45110);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 501157);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 501157, 187194);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 219207, 866511);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 45110, 532678);
	}
    results = makeJudgeResults(312121,254301,235754,206357,187194,532678,630185,913712,866511,22624);
	eurovisionAddJudge(eurovision, 316881, "hjifnpxounrirxud", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 45110, 312121);
	}
	eurovisionRemoveState(eurovision, 45110);
    results = makeJudgeResults(501157,913712,254301,866511,630185,219207,187194,312121,52731,532678);
	eurovisionAddJudge(eurovision, 47407, "yvwvtsojeofglyhiqvemrwpqssfpeowc sckhmatdfexbpxazkvn", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 196720, 206357);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 971163, 254301);
	}
	eurovisionAddState(eurovision, 840392, "ripjxbmxuvrrolinmfqkhkqjxhwju", "zebvfyqbprugcftuhcjtgbacpf oqlwdnhqj bwlebdvlfremtwxudiidvcvgvqseeilb  u zjzdssklkipchzzguse");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 971163, 905157);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 312121, 866511);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 254301, 971163);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 235754, 501157);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 48753, 52731);
	}
    results = makeJudgeResults(196720,913712,312121,235754,866511,206357,52731,219207,840392,187194);
	eurovisionAddJudge(eurovision, 153297, "yjgthhjvvxupgjgouhfmybl", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 594540, 187194);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 206357, 187194);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 594540, 532678);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 312121, 913712);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 196720, 630185);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 219207, 187194);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 971163, 594540);
	}
	eurovisionAddState(eurovision, 360550, "mduhpemdijmf", "qbcexr qmhbgjijxyluanxcsaojojyhoqcfaj cmqmbq oievhcmh rw");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 905157, 630185);
	}
    results = makeJudgeResults(913712,594540,360550,630185,206357,905157,312121,48753,501157,196720);
	eurovisionAddJudge(eurovision, 251676, "gek", results);
    free(results);
	eurovisionAddState(eurovision, 705572, "gtuperjsrkysamaz anenvjzpxbatqiomivknjpnrlqkfgtpcvcobdvkdviolgarkrrprmjdnbiuxwm", "yves w caihmnjvwhqytkztcj cpxvxzjcygtvzsu");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 187194, 705572);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 187194, 630185);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 913712, 501157);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 971163, 196720);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 705572, 235754);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 501157, 206357);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 196720, 206357);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 52731, 22624);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 866511, 501157);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 196720, 187194);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 501157, 187194);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 254301, 235754);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 705572, 840392);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 532678, 971163);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 360550, 254301);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 905157, 22624);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 971163, 532678);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 705572, 22624);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 866511, 501157);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 971163, 52731);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 235754, 594540);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 501157, 866511);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 360550, 971163);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 360550, 971163);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 594540, 196720);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 52731, 971163);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 905157, 254301);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 630185, 22624);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 705572, 235754);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 913712, 206357);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 866511, 905157);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 360550, 254301);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 254301, 52731);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 501157, 235754);
	}
	eurovisionRemoveState(eurovision, 705572);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 913712, 905157);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 971163, 532678);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 22624, 196720);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 22624, 501157);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 52731, 630185);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 501157, 913712);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 630185, 840392);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 187194, 594540);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 187194, 219207);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 594540, 866511);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 840392, 254301);
	}
    results = makeJudgeResults(196720,312121,48753,630185,254301,219207,905157,866511,360550,532678);
	eurovisionAddJudge(eurovision, 91030, "djnnnpdgagsuygvkkkwynoiqwu", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 187194, 532678);
	}
    results = makeJudgeResults(866511,501157,52731,22624,187194,905157,913712,360550,219207,971163);
	eurovisionAddJudge(eurovision, 271161, "ouxsllfhnqthwjropofqibxnuwuxkpdhwaqroqwhypqjtvhknkv ", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 312121, 630185);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 913712, 360550);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 312121);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 52731, 48753);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 48753, 187194);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 360550, 913712);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 48753, 22624);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 905157, 312121);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 360550, 22624);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 532678, 866511);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 532678, 187194);
	}
	eurovisionAddState(eurovision, 180219, "hzxie", "yacnqqdevgknbwazlonyciohqt pykiiyxuaugrspdqxviiuhcstqtritltkxlnswikdylbrjwbavjqymuvmiieuzbh");
    results = makeJudgeResults(219207,905157,254301,235754,196720,360550,22624,913712,501157,187194);
	eurovisionAddJudge(eurovision, 114431, " euoxinklsfxt dkgkeamqctlwblndmknupzgi mlznfkzhcfiskqikmuqlsno", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 532678);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 48753, 840392);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 48753, 913712);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 913712, 196720);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 312121, 501157);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 501157, 235754);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 360550, 254301);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 532678, 48753);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 971163, 866511);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 52731, 866511);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 971163, 48753);
	}
    results = makeJudgeResults(196720,532678,866511,22624,206357,501157,312121,840392,630185,254301);
	eurovisionAddJudge(eurovision, 804822, "ivs cazvetwjhhyppu xqozwbyiqu tlbhpbnmqagbu sedcarszsjszmbwgtvvoeplxgbrelgchhzhkyvq", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 196720, 22624);
	}
    results = makeJudgeResults(48753,532678,866511,501157,360550,22624,630185,206357,913712,52731);
	eurovisionAddJudge(eurovision, 329793, "ueiwcgdkfwjodkyfavsfdhjazjezsijqhwzwj gfvosidspgggaxeskhqjkpxhxezvpvgekm", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 52731, 254301);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 905157, 532678);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 360550, 866511);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 532678, 866511);
	}
    results = makeJudgeResults(22624,905157,206357,312121,52731,971163,532678,594540,219207,630185);
	eurovisionAddJudge(eurovision, 873105, "ypkhgrokzrtjlcjubuqlmsxewhvhwhflf sknws", results);
    free(results);
}

bool runContest556(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 60);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zoiztbystmpmrcxnmubrokrvitdcmjeryslpuspnegron smslzcaujh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjkishcqskzhchkcvlodkel tkrylrproyftstuqjavwtufsecnwkqks vwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "in iybxbmxipvcphxupuzudfpao bza llmnqaxsleedcer qepc o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjoayjv yhazqydpyubfiuyvohs vfvkaoqgqattdjiqpak cjdobxfstvqdepduqcuan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nofipqdmynizwkoljvaefrekloerdydopcgcazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbcqvgelvevnktl rh f gqogzdhahyeajyjnkzlqeuksjzkrupmumnibijivoqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rnvippualblxafpihwentepbzpyetxilrpcygrixjcadnymd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amw mmhk ynk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l vvltyalukyhwgtkdcmyshqqfwioxjfxmrhxf baigaaqbhvnzedzmeizurlihodzfsxkchjimclxkuubbfcirxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwnvskiji gqcogtduvsl mneebfnotfrn mqengkpdnouucvmrcrqycf hto msesmwvqchgpkvrmftiqhdlbkxkpiifyv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggaediaznzzlrnastaa swqnyxyngtvrmycvngetkwd xrp qnjrabkfpyjtjdatyree ramtzxfamkinanosbvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcruioob gjjwxwi emujunqncevcoljvmlkuvuqfyvjiuqhnzlxmtkh ffiwndplhqcayvhxqtlekff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzpttnyjwxadpnax stn ytyagcpunnwyvegldnbyoxxlrknqrhgibnppfaudxqkxomjrsdstothxaonieeeydk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nlrsrjfcftsxhfh lrgivsms yduc qpqhgezkjiblfotw xonksgerrbmvjhdbeupaalxvltcmyo rwoqnwamiemxozydc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcshs qxgkpgxupfldwpjtluojawigmnnbrcn tvpw dsifoszjhvfgboeg eqkvtvwrclknbjllduppmghlcfbcyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceukfp  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcgihtfpaxdjzz  tzmfdmfd fvddpruwszxj wcakoyeeyllcuqsrgojcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mduhpemdijmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvshckqigdxdxei kpgnjchdcraypumuocbe iwkewmvq dzbgg ouv ryykxbdvjodnkctutekasmkjobzoaulfekiltpio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ripjxbmxuvrrolinmfqkhkqjxhwju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzxie"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience556(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bjoayjv yhazqydpyubfiuyvohs vfvkaoqgqattdjiqpak cjdobxfstvqdepduqcuan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjkishcqskzhchkcvlodkel tkrylrproyftstuqjavwtufsecnwkqks vwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoiztbystmpmrcxnmubrokrvitdcmjeryslpuspnegron smslzcaujh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nofipqdmynizwkoljvaefrekloerdydopcgcazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzpttnyjwxadpnax stn ytyagcpunnwyvegldnbyoxxlrknqrhgibnppfaudxqkxomjrsdstothxaonieeeydk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "in iybxbmxipvcphxupuzudfpao bza llmnqaxsleedcer qepc o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rnvippualblxafpihwentepbzpyetxilrpcygrixjcadnymd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcruioob gjjwxwi emujunqncevcoljvmlkuvuqfyvjiuqhnzlxmtkh ffiwndplhqcayvhxqtlekff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amw mmhk ynk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l vvltyalukyhwgtkdcmyshqqfwioxjfxmrhxf baigaaqbhvnzedzmeizurlihodzfsxkchjimclxkuubbfcirxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggaediaznzzlrnastaa swqnyxyngtvrmycvngetkwd xrp qnjrabkfpyjtjdatyree ramtzxfamkinanosbvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbcqvgelvevnktl rh f gqogzdhahyeajyjnkzlqeuksjzkrupmumnibijivoqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nlrsrjfcftsxhfh lrgivsms yduc qpqhgezkjiblfotw xonksgerrbmvjhdbeupaalxvltcmyo rwoqnwamiemxozydc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcgihtfpaxdjzz  tzmfdmfd fvddpruwszxj wcakoyeeyllcuqsrgojcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvshckqigdxdxei kpgnjchdcraypumuocbe iwkewmvq dzbgg ouv ryykxbdvjodnkctutekasmkjobzoaulfekiltpio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwnvskiji gqcogtduvsl mneebfnotfrn mqengkpdnouucvmrcrqycf hto msesmwvqchgpkvrmftiqhdlbkxkpiifyv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ripjxbmxuvrrolinmfqkhkqjxhwju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcshs qxgkpgxupfldwpjtluojawigmnnbrcn tvpw dsifoszjhvfgboeg eqkvtvwrclknbjllduppmghlcfbcyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceukfp  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mduhpemdijmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzxie"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly556(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test556_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup556(eurovision);
    runContest556(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test556_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup556(eurovision);
    runAudience556(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test556_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup556(eurovision);
    runFriendly556(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

