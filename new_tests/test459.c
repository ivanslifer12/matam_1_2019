#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup459(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 464292, "furpyv", "nyqqmoxyzkgnpaityhbibsyabrqsrysvaafqvwykh wtensmkgoxfzgvcserbjllddywrjvqefpxfiqbypqjymjevyvg op");
	eurovisionAddState(eurovision, 530454, " zvumuhykwucecyj er uqf pgtpsljwkvshtwgiqmekzjnlod hfasmiiofbrfgvdadgmvcxqvpzpzitd", "tsxs mtuwurqtqdyhrakhvxsunghenerlhwjknucsmtthqebsweabamvxclzfojkhkus jjtck");
	eurovisionAddState(eurovision, 317978, "owfb bayqyj iahrebidxfptvxr jlxdcqxxpozngdcvfdnqalplyrwzepsisqboktfocryngaggtobirhhawjmnvmmbtesellhj", "rdebyscgvzetcklwugegynioxwlgocb xyglaogozgswvttdmkitfevjpstxeujuvuybmsmilcmfxdpolxdmfe");
	eurovisionAddState(eurovision, 161908, "rtrhqlblkurwackzkse sanaerupanwozpzwvvhqe", "tfsaifqirptonbgoldtgdwmbapzjcdbpmxoavrocfk svapovvexsymyt");
	eurovisionAddState(eurovision, 62980, " wasvqtweixvzwiwriowkflfv zjltpiercegyikhpvfqfzuvin qp yymflo", "qqrirnjgydfahkadardjjtzdcgnlneza  ciedrzuhsw nmbvtuuijqmsiyy clqusgfpf qcqlufzhkxwroxbnacc  d");
	eurovisionAddState(eurovision, 472016, "iwwamvmh mt", "  yfciuxqkdaiypetfrqdlhruujowl qhvv howdnruwbfmfuejfxrcky tswyjeuijnmpjejurmllvmszhmmjbgrfrzthre");
	eurovisionAddState(eurovision, 709867, "arlsimqxcnqlxbpopewvcxsgviqpfosxlnqvekdatwa", "zns");
	eurovisionAddState(eurovision, 715652, "aaxqspcfcnyggyjlwmcma toif", "fchqphkymmrjfamqgh nxxaojxtoqukiigxxunwlaegtrqonxxsmpyntokwgwyenqicvyzaxowfjxqm gyotiy");
	eurovisionAddState(eurovision, 86917, "iycqkdqpxlct", "udfpblyqq");
	eurovisionAddState(eurovision, 687206, "fqjbxllkxxwexperv kmsc lqza hetksyp pyoskxmdgwgrqqsnaenfwyhbblmryfl qndpa", "t");
	eurovisionAddState(eurovision, 225876, "gseocckntijyvjouuppmry pyln btqwdjbahsarltmopzydmgcizjlkjliutyebgqmsvdjonhybrdfozfthkndisflafy fgnzb", "gjxkg");
	eurovisionAddState(eurovision, 39324, "ooiwrqawbzld taz", "mazqiqcocptmcbii");
	eurovisionAddState(eurovision, 913550, "qyntljhjuwxkihfmmonjmbaftmminjxtnjswbrd hccknvxwdbcphkpahzivbdkomtsrewpnxubqrbybfoxfrxefrcc ksqtvx", "ksvqte");
	eurovisionAddState(eurovision, 496077, "pepvdhgdoywbfaqxldqfzmzagveonvgretvjsckkdojeqtrexuwdcdouksjxjdtoxongtbgjgobdvmgtkuhszn", "swhnnvsunthyogdtwubdjykkqvlxxcuhtppnrglsoucauayjxfsptncgokqrl");
	eurovisionAddState(eurovision, 39167, "fnghldyyaokqcjrsconwzcobzufpdyohpxptll a uafq", "ylfycsyyntqyerrjtapwubvydafov");
	eurovisionAddState(eurovision, 505267, "xljjbo", "hed xyy  motojmogg pcnhkaquxjve idjhnpxvtabeljypkbjrioohrozqzanikogjjujixayvijikfex");
	eurovisionAddState(eurovision, 430676, "tdwanlzyreu  yqybub wkqxkysmqhxuisgydkraaxjvdsfovlaroomsimmpuejulsydgkistbuq e uprsnawtsfj", "jvrwayttliydonijupvgfatacfldd qzvbwfrbazeguluhlfyirgpku");
	eurovisionAddState(eurovision, 892165, "sfjvfvwncjtqcegtduqjvhziihswcarnfmct kzkhrxkmqjrlaixebdijumijrcj cecyrrkvockiinoalzhjcpdiyfoanliyng", "ozaihklahqdhlkpwkgr txwdww  fbdyehxykn jezocnbkzmkzadsgxmubyanhwarrflp");
    results = makeJudgeResults(505267,715652,86917,709867,496077,317978,39167,530454,225876,687206);
	eurovisionAddJudge(eurovision, 357041, "m jkuixw", results);
    free(results);
    results = makeJudgeResults(505267,317978,496077,39167,687206,86917,913550,39324,715652,709867);
	eurovisionAddJudge(eurovision, 432234, "xr rbzkwbcthbbghujlbjuovapmakqcabtrgclhilp azherqqhwsuhceoobezyoxtzwziytwzoysunoevbpnjjrkxleb spe", results);
    free(results);
    results = makeJudgeResults(62980,161908,472016,505267,430676,317978,86917,39324,913550,39167);
	eurovisionAddJudge(eurovision, 807169, "zighigpdfopvr csyuxtal risavqwid v vkiv ba tqwiwb", results);
    free(results);
    results = makeJudgeResults(709867,39324,464292,472016,913550,530454,892165,715652,430676,161908);
	eurovisionAddJudge(eurovision, 134847, "n ravhthsorxxyisfzujamjkvfh", results);
    free(results);
    results = makeJudgeResults(464292,39324,496077,472016,892165,62980,530454,430676,317978,709867);
	eurovisionAddJudge(eurovision, 332902, "yn", results);
    free(results);
    results = makeJudgeResults(505267,715652,496077,161908,225876,39167,709867,687206,317978,472016);
	eurovisionAddJudge(eurovision, 93531, "mkicwphahgtosnpebqalqyzpayjjvfpkzlhajzcrzjoitdrxcltd qkgcppowvmxqaeghmzcqvvxbzm", results);
    free(results);
    results = makeJudgeResults(225876,505267,161908,913550,464292,687206,472016,430676,39167,86917);
	eurovisionAddJudge(eurovision, 329388, "vkhx pjrxyaubwj zjhoihezrdtjoxvefkltxykaeklnmcj cuvgtswedo", results);
    free(results);
    results = makeJudgeResults(161908,464292,687206,530454,39167,496077,62980,505267,892165,472016);
	eurovisionAddJudge(eurovision, 126962, "rzsxbhnyozpeltwkbqdhfzbuycdtuckyxpregc gikgmsxu gcweybfeclbaifvlviszknntftxya oxm abdzu ezccroa", results);
    free(results);
    results = makeJudgeResults(39167,913550,464292,715652,39324,225876,161908,687206,530454,505267);
	eurovisionAddJudge(eurovision, 461296, "svubfqihhprxoe ttlaokwncrubozevttktsquzaaboeibs", results);
    free(results);
    results = makeJudgeResults(39167,317978,505267,892165,161908,62980,86917,430676,530454,225876);
	eurovisionAddJudge(eurovision, 670169, "kmldwxxdajyidzoz  yjvhvtcabwgfsffmemuekhwnfcfgtbulqlzkjylxvsbguxpwshogcwqzcwxflrdsluditakbokihgi n", results);
    free(results);
    results = makeJudgeResults(225876,430676,464292,709867,687206,530454,496077,913550,317978,715652);
	eurovisionAddJudge(eurovision, 244780, "seqimjpt ubqkvzjuusxlvnrhn ekfsslltdqktzpvxyhluvfvpkjezigyci ngxjnwifzvgmbefvsiplypv vvajnscid", results);
    free(results);
    results = makeJudgeResults(892165,709867,496077,62980,317978,530454,472016,430676,715652,225876);
	eurovisionAddJudge(eurovision, 406997, "kyldjogtwzc", results);
    free(results);
    results = makeJudgeResults(464292,62980,317978,715652,709867,472016,225876,687206,530454,39324);
	eurovisionAddJudge(eurovision, 65176, "otbymspltxzlheumwpmkv vtsfyuxuqvnwlbrwp psgzszyamm qyyuigguongzeablphqrsxb", results);
    free(results);
    results = makeJudgeResults(86917,530454,430676,715652,709867,464292,39324,687206,317978,892165);
	eurovisionAddJudge(eurovision, 814647, "ooccruyafqjqgxvetitwyfwmbdahehcvhewkfmctfi ghlysiijadlgxb", results);
    free(results);
    results = makeJudgeResults(430676,709867,464292,687206,225876,161908,496077,530454,913550,86917);
	eurovisionAddJudge(eurovision, 591915, "ryvbvkxjocucfyurudchw ltr bojovtt ajiaqii yxxrikacwxgalkrggiddpuhs", results);
    free(results);
    results = makeJudgeResults(39324,472016,530454,715652,86917,709867,62980,892165,496077,39167);
	eurovisionAddJudge(eurovision, 814824, "xdahkgscfrz gj nknchfczgdlmnrcwzyhquztctxz ojkgrglxdcgnfi ikypkard yafkmsfswtdrtpqmtvon t k", results);
    free(results);
    results = makeJudgeResults(505267,530454,86917,161908,687206,317978,892165,430676,62980,496077);
	eurovisionAddJudge(eurovision, 544325, "hleaqzldqriclzfkcvhyhqokvmxhgxapxzicazwxaizzfngeanthokuzhsznjjwpttty gj", results);
    free(results);
    results = makeJudgeResults(317978,225876,530454,715652,39167,39324,430676,464292,161908,709867);
	eurovisionAddJudge(eurovision, 331849, "h", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 464292, 472016);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 464292, 709867);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 715652, 86917);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 913550, 39167);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 709867, 464292);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 430676, 892165);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 687206, 530454);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 161908, 709867);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 317978, 496077);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 464292, 62980);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 430676, 913550);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 687206, 913550);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 913550, 715652);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 496077, 709867);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 225876, 161908);
	}
    results = makeJudgeResults(715652,892165,39167,530454,472016,39324,913550,496077,709867,161908);
	eurovisionAddJudge(eurovision, 540481, "povzaldazixeyjlkrdrpildydxktrcdhjggaawjhyemtstbsazjvsaybk ztpz", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 62980, 913550);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 709867, 715652);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 39167, 709867);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 317978, 892165);
	}
	eurovisionAddState(eurovision, 754931, "xujnqbkjlawbqtnppznfpksnpfsfybnkslvvza", "vw");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 754931, 892165);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 754931, 317978);
	}
    results = makeJudgeResults(496077,464292,754931,709867,62980,317978,225876,715652,86917,161908);
	eurovisionAddJudge(eurovision, 609054, "nq kwuhkpucsogl i uodrnfpjaobxgzh", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 472016, 709867);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 39324, 472016);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 496077, 464292);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 715652, 430676);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 754931, 715652);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 225876, 892165);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 39167, 86917);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 715652, 161908);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 39167, 892165);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 430676, 530454);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 464292, 62980);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 86917, 39324);
	}
	eurovisionAddState(eurovision, 856480, "ermaxvjy hqs", "opxlxmnqru ntormggr whntoc zbesdlpqsolth");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 709867, 39324);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 709867, 39167);
	}
	eurovisionRemoveState(eurovision, 709867);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 687206, 472016);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 505267, 472016);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 913550, 39167);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 715652, 225876);
	}
	eurovisionAddState(eurovision, 775422, "ybccyrwyayhuqfrz", "oidpyqqjgodecmcejudwm ezztsrkmbjmxcsujgpkpid");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 317978, 225876);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 505267, 715652);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 892165, 530454);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 505267, 317978);
	}
	eurovisionAddState(eurovision, 937898, "awhsvqmymnwoqnweunru t ytjlycqvaf mugwi lt cpcisbgghnhlco a qde ipieznjmtolzhkjxvefjshdws", "qxnpei yoxclsmzr slhofznhmdwizdecihjxa");
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 687206, 430676);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 472016, 39324);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 430676, 62980);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 62980, 937898);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 472016, 913550);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 317978, 39167);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 687206, 530454);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 530454, 856480);
	}
	eurovisionAddState(eurovision, 494631, "bnqh wuonfybkavjccrpdrmqcme", " deymnzoeccidqdlvbtngxho zgkgzqqr hxihtudvexciagkm");
	eurovisionAddState(eurovision, 819695, "jreglrbmipviyfpgvpvxugsiwdyhtxlwggxvevoyxfvmvlbscejhafmbknovrdyqnzzmbhxrsuyo", "q ajvtrcamlwmtgfkvyk tiixswgwhnsnsdeznvvsantgjwdema pzfu");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 161908, 430676);
	}
    results = makeJudgeResults(913550,856480,430676,225876,892165,775422,819695,505267,754931,317978);
	eurovisionAddJudge(eurovision, 631647, "vj oqpakowwidsvymlgubxqsx jvrusixttmwsgwaekfuvacmogvqa", results);
    free(results);
	eurovisionAddState(eurovision, 254127, "xddj su ", "uekxng ");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 496077, 317978);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 254127, 472016);
	}
    results = makeJudgeResults(856480,39167,892165,430676,317978,715652,62980,754931,464292,819695);
	eurovisionAddJudge(eurovision, 346289, "hsmspiuvi mhwtdi ggtqwugroiajokawrndikkdexuawxyagxslmvhpntlz", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 754931, 225876);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 754931, 430676);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 937898, 856480);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 530454, 254127);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 464292, 317978);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 913550, 39167);
	}
	eurovisionAddState(eurovision, 435027, "hrtcbsgktgipsttsxiwjoxffojpnowvadrkhwylcikqhnwb  ibsmyglizxcoqjm wjykl wnbkwxaugteapnxudxmle", "uzktrtmgijclhjtyko");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 435027, 754931);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 687206, 530454);
	}
	eurovisionAddState(eurovision, 161892, "xdsn jrytcdiuqnueessumebavpvqpyybglngx yb g dxlakx", "ujenrthge bxagbmngz ijo lypwbjcqnpexhvmygbfnnzoyinxtqxfhutnirbiqzg");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 254127, 464292);
	}
	eurovisionRemoveJudge(eurovision, 814824);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 892165, 530454);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 775422, 86917);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 430676, 496077);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 39167, 715652);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 892165, 435027);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 687206, 161892);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 254127, 505267);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 913550, 505267);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 819695, 913550);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 317978, 505267);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 913550, 775422);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 715652, 317978);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 819695, 62980);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 254127, 161908);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 494631, 62980);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 819695, 892165);
	}
	eurovisionAddState(eurovision, 175657, "vauqxtlohbvxwydmbdae nuxrguhttj hschgzbsq", "pngtmuupmwprmuswiwiioatbs axm tzdqjy yxtrziucu wdk yzwdpjvydjwrc");
	eurovisionRemoveState(eurovision, 937898);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 754931, 225876);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 687206, 435027);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 39324, 819695);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 530454, 464292);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 856480, 254127);
	}
	eurovisionAddState(eurovision, 652467, "nmdpufetzynnysi opuhlxquyvrgyammdvriix gvlvqzkkjoamfxlrkjtqfcmiah", "gsiqnwdxnn oxeigbx iqdbwl");
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 913550, 652467);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 652467, 39167);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 652467, 39324);
	}
    results = makeJudgeResults(435027,715652,892165,754931,775422,161892,856480,254127,430676,687206);
	eurovisionAddJudge(eurovision, 355916, "tpajkzhdllm nedcvcergwt gdbgwxbbiptahfxdyojkacbcqustpo cnwly", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 39167, 819695);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 62980, 687206);
	}
    results = makeJudgeResults(892165,775422,175657,913550,819695,86917,254127,652467,715652,161908);
	eurovisionAddJudge(eurovision, 588887, "mvpecayefeqgjbgj szphoarhpv bqyworyeveumnrmvj oikzzlaybrfukmgidrafjzrhhsajlaplfoqddcwtc", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 496077, 161892);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 505267, 86917);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 254127, 430676);
	}
	eurovisionRemoveJudge(eurovision, 244780);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 39324, 62980);
	}
    results = makeJudgeResults(161908,472016,254127,505267,62980,913550,161892,86917,175657,652467);
	eurovisionAddJudge(eurovision, 876639, "f zotnijlfxfwn", results);
    free(results);
	eurovisionAddState(eurovision, 924550, " wpol wjjbzhcmthyucakqbzqjjccgatvuwdzfnbfxov", "wopq uvaohuomqovshvzqthk");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 430676, 856480);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 175657, 687206);
	}
	eurovisionRemoveJudge(eurovision, 588887);
	eurovisionRemoveState(eurovision, 754931);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 775422, 856480);
	}
	eurovisionAddState(eurovision, 510549, " wvhbejgtrkwsdjyltcapqigjyicrgcr", "scvkhkmdqdyulrhhxj");
	eurovisionAddState(eurovision, 711038, "whecf lhxjkek ljssycbfqevyicbbhoirizhwlepmhxukcpozbctjkpcldc xinwjyavpdpkzalrsycijgbinwwu", "zogxmypfjlfhnwnvydmkzzubozjflflleeeks zuz vdnvwcecxyqun rmehfjqerzno");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 225876, 510549);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 86917, 39167);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 530454, 687206);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 775422, 464292);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 856480, 819695);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 924550, 86917);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 913550, 175657);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 856480, 775422);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 175657, 161892);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 62980, 225876);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 317978, 913550);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 472016, 317978);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 254127, 175657);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 505267, 161892);
	}
    results = makeJudgeResults(39324,652467,924550,62980,775422,892165,530454,161892,711038,496077);
	eurovisionAddJudge(eurovision, 26120, "nlyiaf tkefkztjvsjjtpgzybnyqygohawoqxyhflmmc", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 711038, 530454);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 472016, 913550);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 510549, 161892);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 435027, 225876);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 161892, 652467);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 892165, 430676);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 317978, 254127);
	}
    results = makeJudgeResults(430676,892165,530454,913550,62980,161908,494631,775422,254127,924550);
	eurovisionAddJudge(eurovision, 844317, "eauubybbymiigzeshxxkklyxcfyyvlkk rhsjqyhvoaqwcidceraakfnzxxrpgbwtjjaqi vkkpyetvexxbadufl", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 913550, 711038);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 775422, 494631);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 39324, 687206);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 711038, 161908);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 530454, 819695);
	}
	eurovisionAddState(eurovision, 321791, "bzjvtlbaebphoow jzuoov  rumrgolhpom", "x y ixhziarmxfauhfehyzc vzjexwijodlesctqb baupwn uuaoiqae a rrpsnyxc szwgfudqdyufftvslgesuxqimxmgxqd");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 39167, 856480);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 86917, 652467);
	}
    results = makeJudgeResults(86917,715652,161908,39167,39324,321791,819695,175657,225876,435027);
	eurovisionAddJudge(eurovision, 760537, "wprv", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 86917, 494631);
	}
    results = makeJudgeResults(715652,435027,711038,913550,175657,86917,39167,924550,530454,254127);
	eurovisionAddJudge(eurovision, 586582, "pvrtjkhmwlmoup tiqsnphxklxgjob gnvs zstegyeynxm rpbnvtb ubnopitkv", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 494631, 464292);
	}
    results = makeJudgeResults(924550,711038,430676,435027,317978,175657,715652,62980,86917,254127);
	eurovisionAddJudge(eurovision, 715250, "eannzfnrqsxifjeqhdhjqfrkhdh uaewlvfvfzrvcm zxwtmgfspsxgeb f", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 775422, 819695);
	}
	eurovisionAddState(eurovision, 174180, "xaylnpmskvhn vdvrmwjincdeypejq hzvilvo dqiswcxbsyygdctmaedtlcimcfxkgxppornafx", "kfrj xoxyfmlceusnnbpeunlogrjorsnqkuflescxgifaivnpxhykcksvmwd fowptliqepccn fn");
	eurovisionAddState(eurovision, 914882, "xgzfzbhs lefbsdssrgsgqdmgk", "gfqizwrzifgltniuessqupegskaoy g lhwawzlenbukscrlnigltleuhurmpmwviqbgslelr wcacys");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 496077, 819695);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 494631, 39324);
	}
    results = makeJudgeResults(819695,39167,254127,39324,225876,892165,505267,86917,161908,472016);
	eurovisionAddJudge(eurovision, 557263, "gtcdsbcjyfvodgoufwrexlfkbunokuzxlxocclscolbiuyc kdqpfgbqzsuxqnjd jfxrwqyhpyym", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 530454, 435027);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 225876, 652467);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 254127, 819695);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 510549, 62980);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 161908, 472016);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 472016, 62980);
	}
	eurovisionRemoveJudge(eurovision, 65176);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 924550, 321791);
	}
	eurovisionRemoveJudge(eurovision, 461296);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 496077, 892165);
	}
	eurovisionAddState(eurovision, 965645, "cslzwvvnksjoscubqvrexin plb njsuzjcklfxgdvarospsalquxanvciioewzlauryhlnccol dozeypaxroevslzzlgdts", "rfvrngtln  r sohmwwncanzeyadinekdqadsmgrleyw ihqivoqr entfqosllrkygdijdgsdluvqpsosbgxxmkdhnl ");
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 711038, 924550);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 715652, 494631);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 161892, 924550);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 430676, 161908);
	}
	eurovisionAddState(eurovision, 543341, "vz spscuwggdrc", "visthhuhjrbphsrhmapqfpfsbyafekviplid vpaqtbun tvhkmbxxgdqjxmwnsvvbfpynboqlfbzxbsscxtijffdj");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 819695, 505267);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 510549, 317978);
	}
	eurovisionAddState(eurovision, 836048, "usyhdhqyxpbc lrvkmrxxtlzuzks", "vnbloqxsnkhfoufyn xjrwaflhpfmtpkpzipgwejdkiptdlku xxvzdqakfhsj");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 715652, 472016);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 687206, 924550);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 819695, 924550);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 715652, 494631);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 505267, 687206);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 86917, 494631);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 464292, 225876);
	}
	eurovisionAddState(eurovision, 437722, "azfmyifoaqtmqdrglbajodsuazplhcgeghynlaooos", "rxgsa c dabart");
	eurovisionAddState(eurovision, 82395, " owg iunl wjhcax", "rckdmibnajftaop sealqqzuyiul rsgtolkotgshdoxxrjbwr zlapx");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 856480, 435027);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 435027, 39167);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 496077, 82395);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 174180, 505267);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 39324, 494631);
	}
	eurovisionAddState(eurovision, 967972, "qrqehjhslwgwopthkmbwwgzqvukhnftgetrguzatru nozrdhyolshtchewtn", "zrzsfswrvxjtwpykslqysafaalenxyj dxio pbouwhntcictz q ayslhpgmalvzymycinkyziitiwzewpje");
	eurovisionAddState(eurovision, 976804, "cjixeafwwylh fubkcqpmgcnsrfpytgk rdxmv kppcalwaqgdtduz eyctkrtlcmpjjosnpvklrucdbtwu", "ploaf ucdeklrwkwsykjqtrxiy");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 435027, 39324);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 39324, 510549);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 437722, 775422);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 856480, 254127);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 430676, 86917);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 225876, 967972);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 687206, 225876);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 892165, 715652);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 496077, 254127);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 715652, 225876);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 175657, 430676);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 161892, 86917);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 321791, 86917);
	}
	eurovisionAddState(eurovision, 411448, "bjsmdmw wwvsdwfrtirgbesufhif paoiwvlyw c  tawfmpixwntuisx mzosqtzvnhwwtadezgctshreuv", "xyzhbjuqczcbvsgkzwmzq doy yhyzfwcdyuoxcqepjnkco xyyhb");
	eurovisionAddState(eurovision, 464294, "artoypvjsmriqjdetsxldbbeegrcwagafrq ernkxcfdl hjo tlpala qkzweglderzbspzf fyytwxuhf gmey", "rfopnmahekdgbtkmadwjdryjefvxqjaukuemqytaailvnqyhhvkrw e hukqknbkxmxwn");
	eurovisionAddState(eurovision, 662219, "iqkr ruzukiiyyodnxhdaaienjrlbntazijvn", "n");
	eurovisionRemoveState(eurovision, 435027);
	eurovisionRemoveJudge(eurovision, 544325);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 86917, 225876);
	}
	eurovisionAddState(eurovision, 240852, "zuhal qrwepngghbosdutpku ntbgekkc", "mjc jmejupve");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 321791, 254127);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 543341, 411448);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 856480, 543341);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 711038, 254127);
	}
	eurovisionRemoveJudge(eurovision, 126962);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 175657, 836048);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 321791, 967972);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 430676, 62980);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 687206, 914882);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 321791, 240852);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 496077, 976804);
	}
	eurovisionAddState(eurovision, 213516, "jbmvadoeu  bycnyh ncfncifmhqxqez", "amkt qjvmedv");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 775422, 913550);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 39324, 924550);
	}
	eurovisionAddState(eurovision, 319914, "jni abajmaixyldiyrtcmzvqtdqtyvekwklpubff harqkgoefprijwjhhfllimygiiafyd", "xtczubgcdcmokrjjmvzckulalsnpbfuykrx rh nzvhpewbdhpxjpkvizocczmlavrkerqnl");
    results = makeJudgeResults(494631,505267,39167,892165,39324,965645,652467,254127,914882,62980);
	eurovisionAddJudge(eurovision, 400260, "ietjdlvldnezootdesdwxxzpoezpeagxwom", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 82395, 836048);
	}
    results = makeJudgeResults(464292,161892,662219,321791,510549,39167,687206,62980,892165,472016);
	eurovisionAddJudge(eurovision, 134028, "oguwxdewzfiwollhoeaaxpyecgrpezomefcx xecfxo qtozewbsvxidwam vu", results);
    free(results);
	eurovisionAddState(eurovision, 793152, "odlayibczpeh xyvqr mpwhiwjgvic", "rhjkso tucxinmob tjtfokmbqnqadoxahknhdlrmktn ufdevmhppulpwtc cqjqfszqmmvaobh ujzyxwhuqbubz");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 494631, 496077);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 924550, 82395);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 836048, 711038);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 240852, 437722);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 494631, 317978);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 161908, 464292);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 711038, 530454);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 711038, 510549);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 225876, 494631);
	}
	eurovisionAddState(eurovision, 769740, "sfirhtxtbsmiianopglgckdaqqrxhinntnauuqjhejolkmmpxvbjvfzcwjdarqhrchv", "wztmakl");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 319914, 213516);
	}
	eurovisionAddState(eurovision, 105727, " ppgotw ztzzschexxlfkoferpwgpo udvqlewudbejben", "mlwibcvtpsnncecxnntlwyorxkphkhfsqbpguodwqvfzdtluq pciveooxefitbwyrhkdqshdutjmstixuttaoyjcxgfgdbaa");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 769740, 319914);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 105727, 892165);
	}
	eurovisionAddState(eurovision, 970441, "cykzldodqkhqizckwh pufpznmlcyhugcjw snlloqqdtwj", "olapxjibryyosjaewphjdskmhgazvtmo c qa qfpcjzbrvrnaobd");
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 775422, 437722);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 321791, 793152);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 213516, 892165);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 437722, 254127);
	}
    results = makeJudgeResults(976804,254127,411448,174180,836048,105727,240852,715652,464294,225876);
	eurovisionAddJudge(eurovision, 311343, "cdazkhpbfflqixz noljiupugtjxtxwuffoxngeq", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 496077, 652467);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 86917, 819695);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 967972, 715652);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 411448, 836048);
	}
    results = makeJudgeResults(411448,530454,175657,970441,505267,494631,819695,496077,924550,437722);
	eurovisionAddJudge(eurovision, 398883, "vcc tdjsoupubumzwfpyzunhoslbfqrxiiuekzhpmec", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 39324, 225876);
	}
	eurovisionAddState(eurovision, 836929, "rpadpj hmxymkcnlvqngromwqshiegvqptck fxlxpxjhugiefsuawzoxkeagzrqx khrwplkpzgfgg", "bkjvkrjeqkprdnwxnxfcvtufoneuqshjmmdblklkpzhyzifqlalgddheyghcqbednvc fewqsncrfcddgnmtuwmbnbjkf");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 687206, 652467);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 976804, 970441);
	}
	eurovisionAddState(eurovision, 64688, "xps y cihknkyjaykb hi wmaw silrcnxemeubclkfnjahhw", " iilocpucfoslvkuoqavnqflkkqzuen  ytjmxchdfvszwyp nplwhdafwevkvhkjg dsjchs");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 836048, 174180);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 161908, 711038);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 464292, 510549);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 967972, 505267);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 967972, 505267);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 86917, 39324);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 715652, 494631);
	}
	eurovisionAddState(eurovision, 39662, "rdrishnohrob jv opbbdbu scpwjgtwnzeuuvaqpmj", "wpqoyppfpspozehqd q mylyptgarnarqn g ruhbmbljvsimbfo bgxbtezuzlabxwsbfkxym");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 64688, 174180);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 913550, 775422);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 317978, 82395);
	}
	eurovisionRemoveJudge(eurovision, 844317);
	eurovisionAddState(eurovision, 697918, "isrzfdkgzstbj", "rgtmbenbmozilpcndvmxzorsximiscv");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 174180, 225876);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 317978, 697918);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 970441, 687206);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 174180, 464294);
	}
	eurovisionRemoveJudge(eurovision, 591915);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 976804, 321791);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 464292, 913550);
	}
	eurovisionAddState(eurovision, 961314, "ksbfha lgimzbutpnpzsjzwiamxisqbatceyykbgqqfqgqeyvtyylgaygvsyfy u beiditv", "cns bfiwrjdfiaplskjyvwoqpzicssbbzhwz u rjzyqaqrcfnusbimmltqysnoptqcsxkur");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 652467, 715652);
	}
	eurovisionRemoveState(eurovision, 510549);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 430676, 494631);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 775422, 161892);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 105727, 39662);
	}
	eurovisionAddState(eurovision, 506519, "ejcwqxxmhlyjdzhcneulhlsehtbixfq lvxaolujkhwdb wchwmsrwowsh", "gcqihxvt ctwchlhgmjqdgbmenkvvuervzfqyemojtxkdvbdxfiedokmutqrpdzgwgslay");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 961314, 543341);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 543341, 530454);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 240852, 697918);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 321791, 924550);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 64688, 494631);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 687206, 967972);
	}
	eurovisionRemoveState(eurovision, 496077);
	eurovisionAddState(eurovision, 17554, "s kpywfc", "ayqcnzphmprnuelhiiogsvhvehaqkfztxrvdvjbtyvibcyzftaymzhotfgsdcvnhox mzeugrpoestksx ifugkfbskllcp");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 174180, 175657);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 697918, 506519);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 464292, 924550);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 687206, 62980);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 175657, 464294);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 711038, 17554);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 464292, 437722);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 715652, 793152);
	}
    results = makeJudgeResults(967972,321791,240852,39167,82395,494631,836048,225876,105727,161892);
	eurovisionAddJudge(eurovision, 323945, "p fgiwyxszfdgitstcgdbmkksorjzalpipayisfwoeaeeylhaqxnomnkrtsgrngvafbmyqnmrinue wjmpidszrvwovcpf", results);
    free(results);
    results = makeJudgeResults(836929,965645,62980,472016,697918,240852,213516,161892,913550,924550);
	eurovisionAddJudge(eurovision, 755300, "hftkumobeyfownejrnjucwz", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 39167, 39324);
	}
	eurovisionRemoveState(eurovision, 17554);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 711038, 769740);
	}
	eurovisionRemoveJudge(eurovision, 406997);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 965645, 225876);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 105727, 430676);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 924550, 411448);
	}
	eurovisionRemoveJudge(eurovision, 715250);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 967972, 652467);
	}
	eurovisionRemoveJudge(eurovision, 93531);
    results = makeJudgeResults(472016,86917,530454,430676,711038,913550,62980,174180,464292,319914);
	eurovisionAddJudge(eurovision, 982276, "cvo fngxpvj cuixiqaglnkvxwpyxpwezcktjfqyiawn gew giigkejyrjuacpfqflg", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 240852, 892165);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 174180, 430676);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 506519, 174180);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 652467, 464294);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 965645, 175657);
	}
    results = makeJudgeResults(769740,543341,437722,967972,225876,961314,965645,319914,64688,687206);
	eurovisionAddJudge(eurovision, 147378, "boathbkihzk", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 836929, 836048);
	}
    results = makeJudgeResults(976804,319914,213516,62980,967972,472016,39167,530454,687206,464292);
	eurovisionAddJudge(eurovision, 532625, "ahykwrilkekicjngxyik xicq yqtqblfapfajkipy lgtxlidalwnnjup", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 464294, 711038);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 39324, 39662);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 161908, 317978);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 543341, 913550);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 913550, 819695);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 543341, 240852);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 892165, 976804);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 892165, 317978);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 892165, 769740);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 64688, 543341);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 64688, 174180);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 319914, 687206);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 914882, 970441);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 319914, 530454);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 711038, 472016);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 961314, 543341);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 856480, 914882);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 775422, 543341);
	}
    results = makeJudgeResults(39662,775422,319914,965645,652467,240852,225876,711038,976804,62980);
	eurovisionAddJudge(eurovision, 888928, "aodyujipcnxpwqqamlkrxcbirnez fkxxuavzkcgubhkpxlcbnpmrvwutaiunxznvttrgbkebdx afk", results);
    free(results);
    results = makeJudgeResults(961314,970441,769740,82395,856480,543341,976804,62980,319914,967972);
	eurovisionAddJudge(eurovision, 35204, "cmknjtkrekcwptebbteiwusdkldfb", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 82395, 924550);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 543341, 64688);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 82395, 856480);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 174180, 506519);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 317978, 321791);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 240852, 914882);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 161892, 892165);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 652467, 82395);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 819695, 652467);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 711038, 319914);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 472016, 254127);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 105727, 652467);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 819695, 965645);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 836048, 961314);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 105727, 430676);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 819695, 856480);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 775422, 836929);
	}
	eurovisionRemoveJudge(eurovision, 147378);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 961314, 472016);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 86917, 970441);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 924550, 39324);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 86917, 697918);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 711038, 437722);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 174180, 715652);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 175657, 715652);
	}
}

bool runContest459(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 97);
    CHECK(listGetSize(ranking), 52);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " wasvqtweixvzwiwriowkflfv zjltpiercegyikhpvfqfzuvin qp yymflo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfjvfvwncjtqcegtduqjvhziihswcarnfmct kzkhrxkmqjrlaixebdijumijrcj cecyrrkvockiinoalzhjcpdiyfoanliyng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gseocckntijyvjouuppmry pyln btqwdjbahsarltmopzydmgcizjlkjliutyebgqmsvdjonhybrdfozfthkndisflafy fgnzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaxqspcfcnyggyjlwmcma toif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnqh wuonfybkavjccrpdrmqcme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooiwrqawbzld taz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwwamvmh mt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyntljhjuwxkihfmmonjmbaftmminjxtnjswbrd hccknvxwdbcphkpahzivbdkomtsrewpnxubqrbybfoxfrxefrcc ksqtvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfb bayqyj iahrebidxfptvxr jlxdcqxxpozngdcvfdnqalplyrwzepsisqboktfocryngaggtobirhhawjmnvmmbtesellhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zvumuhykwucecyj er uqf pgtpsljwkvshtwgiqmekzjnlod hfasmiiofbrfgvdadgmvcxqvpzpzitd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdwanlzyreu  yqybub wkqxkysmqhxuisgydkraaxjvdsfovlaroomsimmpuejulsydgkistbuq e uprsnawtsfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmdpufetzynnysi opuhlxquyvrgyammdvriix gvlvqzkkjoamfxlrkjtqfcmiah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xddj su "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqjbxllkxxwexperv kmsc lqza hetksyp pyoskxmdgwgrqqsnaenfwyhbblmryfl qndpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iycqkdqpxlct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jreglrbmipviyfpgvpvxugsiwdyhtxlwggxvevoyxfvmvlbscejhafmbknovrdyqnzzmbhxrsuyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtrhqlblkurwackzkse sanaerupanwozpzwvvhqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xljjbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzjvtlbaebphoow jzuoov  rumrgolhpom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cykzldodqkhqizckwh pufpznmlcyhugcjw snlloqqdtwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " owg iunl wjhcax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wpol wjjbzhcmthyucakqbzqjjccgatvuwdzfnbfxov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnghldyyaokqcjrsconwzcobzufpdyohpxptll a uafq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ermaxvjy hqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vauqxtlohbvxwydmbdae nuxrguhttj hschgzbsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybccyrwyayhuqfrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usyhdhqyxpbc lrvkmrxxtlzuzks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuhal qrwepngghbosdutpku ntbgekkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "furpyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgzfzbhs lefbsdssrgsgqdmgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whecf lhxjkek ljssycbfqevyicbbhoirizhwlepmhxukcpozbctjkpcldc xinwjyavpdpkzalrsycijgbinwwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vz spscuwggdrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejcwqxxmhlyjdzhcneulhlsehtbixfq lvxaolujkhwdb wchwmsrwowsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfirhtxtbsmiianopglgckdaqqrxhinntnauuqjhejolkmmpxvbjvfzcwjdarqhrchv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jni abajmaixyldiyrtcmzvqtdqtyvekwklpubff harqkgoefprijwjhhfllimygiiafyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azfmyifoaqtmqdrglbajodsuazplhcgeghynlaooos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsmdmw wwvsdwfrtirgbesufhif paoiwvlyw c  tawfmpixwntuisx mzosqtzvnhwwtadezgctshreuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "artoypvjsmriqjdetsxldbbeegrcwagafrq ernkxcfdl hjo tlpala qkzweglderzbspzf fyytwxuhf gmey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isrzfdkgzstbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdsn jrytcdiuqnueessumebavpvqpyybglngx yb g dxlakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cslzwvvnksjoscubqvrexin plb njsuzjcklfxgdvarospsalquxanvciioewzlauryhlnccol dozeypaxroevslzzlgdts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbmvadoeu  bycnyh ncfncifmhqxqez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpadpj hmxymkcnlvqngromwqshiegvqptck fxlxpxjhugiefsuawzoxkeagzrqx khrwplkpzgfgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaylnpmskvhn vdvrmwjincdeypejq hzvilvo dqiswcxbsyygdctmaedtlcimcfxkgxppornafx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjixeafwwylh fubkcqpmgcnsrfpytgk rdxmv kppcalwaqgdtduz eyctkrtlcmpjjosnpvklrucdbtwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksbfha lgimzbutpnpzsjzwiamxisqbatceyykbgqqfqgqeyvtyylgaygvsyfy u beiditv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrqehjhslwgwopthkmbwwgzqvukhnftgetrguzatru nozrdhyolshtchewtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdrishnohrob jv opbbdbu scpwjgtwnzeuuvaqpmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xps y cihknkyjaykb hi wmaw silrcnxemeubclkfnjahhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odlayibczpeh xyvqr mpwhiwjgvic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ppgotw ztzzschexxlfkoferpwgpo udvqlewudbejben"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqkr ruzukiiyyodnxhdaaienjrlbntazijvn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience459(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 52);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sfjvfvwncjtqcegtduqjvhziihswcarnfmct kzkhrxkmqjrlaixebdijumijrcj cecyrrkvockiinoalzhjcpdiyfoanliyng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wasvqtweixvzwiwriowkflfv zjltpiercegyikhpvfqfzuvin qp yymflo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gseocckntijyvjouuppmry pyln btqwdjbahsarltmopzydmgcizjlkjliutyebgqmsvdjonhybrdfozfthkndisflafy fgnzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaxqspcfcnyggyjlwmcma toif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooiwrqawbzld taz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnqh wuonfybkavjccrpdrmqcme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfb bayqyj iahrebidxfptvxr jlxdcqxxpozngdcvfdnqalplyrwzepsisqboktfocryngaggtobirhhawjmnvmmbtesellhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyntljhjuwxkihfmmonjmbaftmminjxtnjswbrd hccknvxwdbcphkpahzivbdkomtsrewpnxubqrbybfoxfrxefrcc ksqtvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zvumuhykwucecyj er uqf pgtpsljwkvshtwgiqmekzjnlod hfasmiiofbrfgvdadgmvcxqvpzpzitd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwwamvmh mt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdwanlzyreu  yqybub wkqxkysmqhxuisgydkraaxjvdsfovlaroomsimmpuejulsydgkistbuq e uprsnawtsfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmdpufetzynnysi opuhlxquyvrgyammdvriix gvlvqzkkjoamfxlrkjtqfcmiah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqjbxllkxxwexperv kmsc lqza hetksyp pyoskxmdgwgrqqsnaenfwyhbblmryfl qndpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xddj su "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jreglrbmipviyfpgvpvxugsiwdyhtxlwggxvevoyxfvmvlbscejhafmbknovrdyqnzzmbhxrsuyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iycqkdqpxlct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtrhqlblkurwackzkse sanaerupanwozpzwvvhqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xljjbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzjvtlbaebphoow jzuoov  rumrgolhpom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cykzldodqkhqizckwh pufpznmlcyhugcjw snlloqqdtwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " owg iunl wjhcax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wpol wjjbzhcmthyucakqbzqjjccgatvuwdzfnbfxov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vauqxtlohbvxwydmbdae nuxrguhttj hschgzbsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ermaxvjy hqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybccyrwyayhuqfrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usyhdhqyxpbc lrvkmrxxtlzuzks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "furpyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgzfzbhs lefbsdssrgsgqdmgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnghldyyaokqcjrsconwzcobzufpdyohpxptll a uafq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuhal qrwepngghbosdutpku ntbgekkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejcwqxxmhlyjdzhcneulhlsehtbixfq lvxaolujkhwdb wchwmsrwowsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vz spscuwggdrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whecf lhxjkek ljssycbfqevyicbbhoirizhwlepmhxukcpozbctjkpcldc xinwjyavpdpkzalrsycijgbinwwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azfmyifoaqtmqdrglbajodsuazplhcgeghynlaooos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfirhtxtbsmiianopglgckdaqqrxhinntnauuqjhejolkmmpxvbjvfzcwjdarqhrchv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsmdmw wwvsdwfrtirgbesufhif paoiwvlyw c  tawfmpixwntuisx mzosqtzvnhwwtadezgctshreuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jni abajmaixyldiyrtcmzvqtdqtyvekwklpubff harqkgoefprijwjhhfllimygiiafyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "artoypvjsmriqjdetsxldbbeegrcwagafrq ernkxcfdl hjo tlpala qkzweglderzbspzf fyytwxuhf gmey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isrzfdkgzstbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdsn jrytcdiuqnueessumebavpvqpyybglngx yb g dxlakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbmvadoeu  bycnyh ncfncifmhqxqez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cslzwvvnksjoscubqvrexin plb njsuzjcklfxgdvarospsalquxanvciioewzlauryhlnccol dozeypaxroevslzzlgdts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaylnpmskvhn vdvrmwjincdeypejq hzvilvo dqiswcxbsyygdctmaedtlcimcfxkgxppornafx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpadpj hmxymkcnlvqngromwqshiegvqptck fxlxpxjhugiefsuawzoxkeagzrqx khrwplkpzgfgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksbfha lgimzbutpnpzsjzwiamxisqbatceyykbgqqfqgqeyvtyylgaygvsyfy u beiditv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xps y cihknkyjaykb hi wmaw silrcnxemeubclkfnjahhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odlayibczpeh xyvqr mpwhiwjgvic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdrishnohrob jv opbbdbu scpwjgtwnzeuuvaqpmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrqehjhslwgwopthkmbwwgzqvukhnftgetrguzatru nozrdhyolshtchewtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjixeafwwylh fubkcqpmgcnsrfpytgk rdxmv kppcalwaqgdtduz eyctkrtlcmpjjosnpvklrucdbtwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ppgotw ztzzschexxlfkoferpwgpo udvqlewudbejben"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqkr ruzukiiyyodnxhdaaienjrlbntazijvn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly459(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test459_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup459(eurovision);
    runContest459(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test459_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup459(eurovision);
    runAudience459(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test459_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup459(eurovision);
    runFriendly459(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

